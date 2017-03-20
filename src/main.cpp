/*
 *  Copyright (C) 2010 Felix Geyer <debfx@fobos.de>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 or (at your option)
 *  version 3 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <QCommandLineParser>
#include <QFile>
#include <QSerialPort>
#include <QDebug>

#include "config-keepassx.h"
#include "core/Config.h"
#include "core/Tools.h"
#include "core/Translator.h"
#include "crypto/Crypto.h"
#include "gui/Application.h"
#include "gui/MainWindow.h"
#include "gui/MessageBox.h"
#include "bluetooth/BluetoothDevice.h"




int main(int argc, char** argv)
{
#ifdef QT_NO_DEBUG
    Tools::disableCoreDumps();
#endif
    Tools::setupSearchPaths();

    Application app(argc, argv);
    Application::setApplicationName("keepassx");
    Application::setApplicationVersion(KEEPASSX_VERSION);
    // don't set organizationName as that changes the return value of
    // QStandardPaths::writableLocation(QDesktopServices::DataLocation)

    QApplication::setQuitOnLastWindowClosed(false);

    if (!Crypto::init()) {
        QString error = QCoreApplication::translate("Main",
                                                    "Fatal error while testing the cryptographic functions.");
        error.append("\n");
        error.append(Crypto::errorString());
        MessageBox::critical(nullptr, QCoreApplication::translate("Main", "PasswordVault - Error"), error);
        return 1;
    }

    QCommandLineParser parser;
    parser.setApplicationDescription(QCoreApplication::translate("main", "PasswordVault - cross-platform password manager"));
    parser.addPositionalArgument("filename", QCoreApplication::translate("main", "filename of the password database to open (*.kdbx)"));

    QCommandLineOption configOption("config",
                                    QCoreApplication::translate("main", "path to a custom config file"),
                                    "config");
    QCommandLineOption keyfileOption("keyfile",
                                     QCoreApplication::translate("main", "key file of the database"),
                                     "keyfile");

    parser.addHelpOption();
    parser.addVersionOption();
    parser.addOption(configOption);
    parser.addOption(keyfileOption);

    parser.process(app);
    const QStringList args = parser.positionalArguments();

    if (parser.isSet(configOption)) {
        Config::createConfigFromFile(parser.value(configOption));
    }

    Translator::installTranslator();

#ifdef Q_OS_MAC
    // Don't show menu icons on OSX
    QApplication::setAttribute(Qt::AA_DontShowIconsInMenus);
#endif

    MainWindow* mainWindow = mainWindowInstance();
    mainWindow->show();
    mainWindow->updateWelcomeWidget(PROGRESS_INIT , "Opening database ... Please wait...");

    app.setMainWindow(mainWindow);

    QObject::connect(&app, SIGNAL(openFile(QString)), mainWindow, SLOT(openDatabase(QString)));

    if (!args.isEmpty()) {
        QString filename = args[0];
        if (!filename.isEmpty() && QFile::exists(filename)) {
            mainWindow->openDatabase(filename, QString(), parser.value(keyfileOption));
        }
    }

    if (config()->get("OpenPreviousDatabasesOnStartup").toBool()) {
        const QStringList filenames = config()->get("LastOpenedDatabases").toStringList();
        for (const QString& filename : filenames) {
            if (!filename.isEmpty() && QFile::exists(filename)) {
                mainWindow->openDatabase(filename, QString(), QString());
            }
        }
    }


    mainWindow->updateWelcomeWidget(PROGRESS_CHECK_BT_SETTINGS , NULL);
    // Connect to CyberGateCard (BlueToothDevice)
    BluetoothDevice *btDeviceInstance = btDevice();

    if ( btDeviceInstance->connectDevice() == true )
    {

        mainWindow->updateWelcomeWidget(PROGRESS_CHECK_DB_FILE , NULL);

        if(btDeviceInstance->checkIfFileExists(DB_FILE_DIR, DB_FILE_NAME))
        {
            mainWindow->updateWelcomeWidget(PROGRESS_OPEN_NEW_DB , NULL);
            // openDataBase
            mainWindow->openDatabase(QString(DB_FILE_DIR) + DB_FILE_NAME, QString(), QString());

        }
        else
        {
            mainWindow->newDatabase();
        }
        mainWindow->updateWelcomeWidget(PROGRESS_COMPLETE , "Welcome!");

        btDeviceInstance->disconnectDevice();
    }
    else
    {
        mainWindow->updateWelcomeWidget(0 , "Error ... Please retry.");

    }

    return app.exec();
}
