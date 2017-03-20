/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gui/DatabaseTabWidget.h"
#include "gui/SettingsWidget.h"
#include "gui/WelcomeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionDatabaseOpen;
    QAction *actionDatabaseSave;
    QAction *actionDatabaseClose;
    QAction *actionDatabaseNew;
    QAction *actionEntryNew;
    QAction *actionEntryEdit;
    QAction *actionEntryDelete;
    QAction *actionGroupNew;
    QAction *actionGroupEdit;
    QAction *actionGroupDelete;
    QAction *actionDatabaseSaveAs;
    QAction *actionChangeMasterKey;
    QAction *actionChangeDatabaseSettings;
    QAction *actionImportKeePass1;
    QAction *actionEntryClone;
    QAction *actionSearch;
    QAction *actionEntryCopyUsername;
    QAction *actionEntryCopyPassword;
    QAction *actionSettings;
    QAction *actionEntryAutoType;
    QAction *actionEntryOpenUrl;
    QAction *actionLockDatabases;
    QAction *actionEntryCopyTitle;
    QAction *actionEntryCopyURL;
    QAction *actionEntryCopyNotes;
    QAction *actionExportCsv;
    QAction *actionRepairDatabase;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageDatabase;
    QVBoxLayout *verticalLayout_2;
    DatabaseTabWidget *tabWidget;
    QWidget *pageSettings;
    QVBoxLayout *verticalLayout_3;
    SettingsWidget *settingsWidget;
    QWidget *pageWelcome;
    QVBoxLayout *verticalLayout_5;
    WelcomeWidget *welcomeWidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuEntries;
    QMenu *menuEntryCopyAttribute;
    QMenu *menuGroups;
    QMenu *menuTools;
    QMenu *menuView;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setWindowTitle(QStringLiteral("PasswordVault"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionDatabaseOpen = new QAction(MainWindow);
        actionDatabaseOpen->setObjectName(QStringLiteral("actionDatabaseOpen"));
        actionDatabaseSave = new QAction(MainWindow);
        actionDatabaseSave->setObjectName(QStringLiteral("actionDatabaseSave"));
        actionDatabaseSave->setEnabled(false);
        actionDatabaseClose = new QAction(MainWindow);
        actionDatabaseClose->setObjectName(QStringLiteral("actionDatabaseClose"));
        actionDatabaseClose->setEnabled(false);
        actionDatabaseNew = new QAction(MainWindow);
        actionDatabaseNew->setObjectName(QStringLiteral("actionDatabaseNew"));
        actionEntryNew = new QAction(MainWindow);
        actionEntryNew->setObjectName(QStringLiteral("actionEntryNew"));
        actionEntryNew->setEnabled(false);
        actionEntryEdit = new QAction(MainWindow);
        actionEntryEdit->setObjectName(QStringLiteral("actionEntryEdit"));
        actionEntryEdit->setEnabled(false);
        actionEntryDelete = new QAction(MainWindow);
        actionEntryDelete->setObjectName(QStringLiteral("actionEntryDelete"));
        actionEntryDelete->setEnabled(false);
        actionGroupNew = new QAction(MainWindow);
        actionGroupNew->setObjectName(QStringLiteral("actionGroupNew"));
        actionGroupNew->setEnabled(false);
        actionGroupEdit = new QAction(MainWindow);
        actionGroupEdit->setObjectName(QStringLiteral("actionGroupEdit"));
        actionGroupEdit->setEnabled(false);
        actionGroupDelete = new QAction(MainWindow);
        actionGroupDelete->setObjectName(QStringLiteral("actionGroupDelete"));
        actionGroupDelete->setEnabled(false);
        actionDatabaseSaveAs = new QAction(MainWindow);
        actionDatabaseSaveAs->setObjectName(QStringLiteral("actionDatabaseSaveAs"));
        actionDatabaseSaveAs->setEnabled(false);
        actionChangeMasterKey = new QAction(MainWindow);
        actionChangeMasterKey->setObjectName(QStringLiteral("actionChangeMasterKey"));
        actionChangeMasterKey->setEnabled(false);
        actionChangeDatabaseSettings = new QAction(MainWindow);
        actionChangeDatabaseSettings->setObjectName(QStringLiteral("actionChangeDatabaseSettings"));
        actionChangeDatabaseSettings->setEnabled(false);
        actionImportKeePass1 = new QAction(MainWindow);
        actionImportKeePass1->setObjectName(QStringLiteral("actionImportKeePass1"));
        actionEntryClone = new QAction(MainWindow);
        actionEntryClone->setObjectName(QStringLiteral("actionEntryClone"));
        actionEntryClone->setEnabled(false);
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName(QStringLiteral("actionSearch"));
        actionSearch->setEnabled(false);
        actionEntryCopyUsername = new QAction(MainWindow);
        actionEntryCopyUsername->setObjectName(QStringLiteral("actionEntryCopyUsername"));
        actionEntryCopyUsername->setEnabled(false);
        actionEntryCopyPassword = new QAction(MainWindow);
        actionEntryCopyPassword->setObjectName(QStringLiteral("actionEntryCopyPassword"));
        actionEntryCopyPassword->setEnabled(false);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionEntryAutoType = new QAction(MainWindow);
        actionEntryAutoType->setObjectName(QStringLiteral("actionEntryAutoType"));
        actionEntryAutoType->setEnabled(false);
        actionEntryOpenUrl = new QAction(MainWindow);
        actionEntryOpenUrl->setObjectName(QStringLiteral("actionEntryOpenUrl"));
        actionEntryOpenUrl->setEnabled(false);
        actionLockDatabases = new QAction(MainWindow);
        actionLockDatabases->setObjectName(QStringLiteral("actionLockDatabases"));
        actionLockDatabases->setEnabled(false);
        actionEntryCopyTitle = new QAction(MainWindow);
        actionEntryCopyTitle->setObjectName(QStringLiteral("actionEntryCopyTitle"));
        actionEntryCopyTitle->setEnabled(false);
        actionEntryCopyURL = new QAction(MainWindow);
        actionEntryCopyURL->setObjectName(QStringLiteral("actionEntryCopyURL"));
        actionEntryCopyURL->setEnabled(false);
        actionEntryCopyNotes = new QAction(MainWindow);
        actionEntryCopyNotes->setObjectName(QStringLiteral("actionEntryCopyNotes"));
        actionEntryCopyNotes->setEnabled(false);
        actionExportCsv = new QAction(MainWindow);
        actionExportCsv->setObjectName(QStringLiteral("actionExportCsv"));
        actionExportCsv->setEnabled(false);
        actionRepairDatabase = new QAction(MainWindow);
        actionRepairDatabase->setObjectName(QStringLiteral("actionRepairDatabase"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageDatabase = new QWidget();
        pageDatabase->setObjectName(QStringLiteral("pageDatabase"));
        verticalLayout_2 = new QVBoxLayout(pageDatabase);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new DatabaseTabWidget(pageDatabase);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);

        verticalLayout_2->addWidget(tabWidget);

        stackedWidget->addWidget(pageDatabase);
        pageSettings = new QWidget();
        pageSettings->setObjectName(QStringLiteral("pageSettings"));
        verticalLayout_3 = new QVBoxLayout(pageSettings);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        settingsWidget = new SettingsWidget(pageSettings);
        settingsWidget->setObjectName(QStringLiteral("settingsWidget"));

        verticalLayout_3->addWidget(settingsWidget);

        stackedWidget->addWidget(pageSettings);
        pageWelcome = new QWidget();
        pageWelcome->setObjectName(QStringLiteral("pageWelcome"));
        verticalLayout_5 = new QVBoxLayout(pageWelcome);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        welcomeWidget = new WelcomeWidget(pageWelcome);
        welcomeWidget->setObjectName(QStringLiteral("welcomeWidget"));
        welcomeWidget->setMinimumSize(QSize(240, 120));

        verticalLayout_5->addWidget(welcomeWidget, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        stackedWidget->addWidget(pageWelcome);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuEntries = new QMenu(menubar);
        menuEntries->setObjectName(QStringLiteral("menuEntries"));
        menuEntryCopyAttribute = new QMenu(menuEntries);
        menuEntryCopyAttribute->setObjectName(QStringLiteral("menuEntryCopyAttribute"));
        menuEntryCopyAttribute->setEnabled(false);
        menuGroups = new QMenu(menubar);
        menuGroups->setObjectName(QStringLiteral("menuGroups"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEntries->menuAction());
        menubar->addAction(menuGroups->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionDatabaseNew);
        menuFile->addAction(actionDatabaseOpen);
        menuFile->addAction(actionDatabaseSave);
        menuFile->addAction(actionDatabaseSaveAs);
        menuFile->addAction(actionDatabaseClose);
        menuFile->addSeparator();
        menuFile->addAction(actionChangeMasterKey);
        menuFile->addAction(actionChangeDatabaseSettings);
        menuFile->addSeparator();
        menuFile->addAction(actionImportKeePass1);
        menuFile->addAction(actionExportCsv);
        menuFile->addAction(actionRepairDatabase);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);
        menuEntries->addAction(actionEntryNew);
        menuEntries->addAction(actionEntryClone);
        menuEntries->addAction(actionEntryEdit);
        menuEntries->addAction(actionEntryDelete);
        menuEntries->addAction(actionEntryCopyUsername);
        menuEntries->addAction(actionEntryCopyPassword);
        menuEntries->addAction(menuEntryCopyAttribute->menuAction());
        menuEntries->addAction(actionEntryAutoType);
        menuEntries->addAction(actionEntryOpenUrl);
        menuEntries->addAction(actionSearch);
        menuEntryCopyAttribute->addAction(actionEntryCopyTitle);
        menuEntryCopyAttribute->addAction(actionEntryCopyURL);
        menuEntryCopyAttribute->addAction(actionEntryCopyNotes);
        menuEntryCopyAttribute->addSeparator();
        menuGroups->addAction(actionGroupNew);
        menuGroups->addAction(actionGroupEdit);
        menuGroups->addAction(actionGroupDelete);
        menuTools->addAction(actionLockDatabases);
        menuTools->addAction(actionSettings);
        toolBar->addAction(actionDatabaseOpen);
        toolBar->addAction(actionDatabaseSave);
        toolBar->addSeparator();
        toolBar->addAction(actionEntryNew);
        toolBar->addAction(actionEntryEdit);
        toolBar->addAction(actionEntryDelete);
        toolBar->addSeparator();
        toolBar->addAction(actionEntryCopyUsername);
        toolBar->addAction(actionEntryCopyPassword);
        toolBar->addSeparator();
        toolBar->addAction(actionLockDatabases);
        toolBar->addAction(actionSearch);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);
        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        actionDatabaseOpen->setText(QApplication::translate("MainWindow", "Open database", Q_NULLPTR));
        actionDatabaseSave->setText(QApplication::translate("MainWindow", "Save database", Q_NULLPTR));
        actionDatabaseClose->setText(QApplication::translate("MainWindow", "Close database", Q_NULLPTR));
        actionDatabaseNew->setText(QApplication::translate("MainWindow", "New database", Q_NULLPTR));
        actionEntryNew->setText(QApplication::translate("MainWindow", "Add new entry", Q_NULLPTR));
        actionEntryEdit->setText(QApplication::translate("MainWindow", "View/Edit entry", Q_NULLPTR));
        actionEntryDelete->setText(QApplication::translate("MainWindow", "Delete entry", Q_NULLPTR));
        actionGroupNew->setText(QApplication::translate("MainWindow", "Add new group", Q_NULLPTR));
        actionGroupEdit->setText(QApplication::translate("MainWindow", "Edit group", Q_NULLPTR));
        actionGroupDelete->setText(QApplication::translate("MainWindow", "Delete group", Q_NULLPTR));
        actionDatabaseSaveAs->setText(QApplication::translate("MainWindow", "Save database as", Q_NULLPTR));
        actionChangeMasterKey->setText(QApplication::translate("MainWindow", "Change master key", Q_NULLPTR));
        actionChangeDatabaseSettings->setText(QApplication::translate("MainWindow", "Database settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionChangeDatabaseSettings->setToolTip(QApplication::translate("MainWindow", "Database settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionImportKeePass1->setText(QApplication::translate("MainWindow", "Import KeePass 1 database", Q_NULLPTR));
        actionEntryClone->setText(QApplication::translate("MainWindow", "Clone entry", Q_NULLPTR));
        actionSearch->setText(QApplication::translate("MainWindow", "Find", Q_NULLPTR));
        actionEntryCopyUsername->setText(QApplication::translate("MainWindow", "Copy username", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionEntryCopyUsername->setToolTip(QApplication::translate("MainWindow", "Copy username to clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionEntryCopyPassword->setText(QApplication::translate("MainWindow", "Copy password", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionEntryCopyPassword->setToolTip(QApplication::translate("MainWindow", "Copy password to clipboard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
        actionEntryAutoType->setText(QApplication::translate("MainWindow", "Perform Auto-Type", Q_NULLPTR));
        actionEntryOpenUrl->setText(QApplication::translate("MainWindow", "Open URL", Q_NULLPTR));
        actionLockDatabases->setText(QApplication::translate("MainWindow", "Lock databases", Q_NULLPTR));
        actionEntryCopyTitle->setText(QApplication::translate("MainWindow", "Title", Q_NULLPTR));
        actionEntryCopyURL->setText(QApplication::translate("MainWindow", "URL", Q_NULLPTR));
        actionEntryCopyNotes->setText(QApplication::translate("MainWindow", "Notes", Q_NULLPTR));
        actionExportCsv->setText(QApplication::translate("MainWindow", "Export to CSV file", Q_NULLPTR));
        actionRepairDatabase->setText(QApplication::translate("MainWindow", "Repair database", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "Database", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        menuEntries->setTitle(QApplication::translate("MainWindow", "Entries", Q_NULLPTR));
        menuEntryCopyAttribute->setTitle(QApplication::translate("MainWindow", "Copy attribute to clipboard", Q_NULLPTR));
        menuGroups->setTitle(QApplication::translate("MainWindow", "Groups", Q_NULLPTR));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", Q_NULLPTR));
        menuView->setTitle(QApplication::translate("MainWindow", "View", Q_NULLPTR));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
