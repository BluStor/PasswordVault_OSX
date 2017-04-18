/*
 *  Copyright (C) 2011 Felix Geyer <debfx@fobos.de>
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

#include <QBuffer>

#include "FirmwareUpdateWidget.h"
#include "ui_FirmwareUpdateWidget.h"

#include "core/Config.h"
#include "core/Database.h"
#include "core/FilePath.h"
#include "gui/FileDialog.h"
#include "gui/MessageBox.h"
#include "format/KeePass2Reader.h"
#include "keys/FileKey.h"
#include "keys/PasswordKey.h"
#include "bluetooth/BluetoothDevice.h"

FirmwareUpdateWidget::FirmwareUpdateWidget(QWidget* parent)
    : DialogyWidget(parent)
    , m_ui(new Ui::FirmwareUpdateWidget())
{
    m_ui->setupUi(this);

    m_ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);

    connect(m_ui->buttonBrowseFile, SIGNAL(clicked()), SLOT(browseFirmwareFile()));
    connect(m_ui->buttonBox, SIGNAL(accepted()), SLOT(update()));
    connect(m_ui->buttonBox, SIGNAL(rejected()), SLOT(cancel()));

    // Setup timer for firmware update completion
    timer.setSingleShot(true);
    connect(&timer, SIGNAL(timeout()), SLOT(finished()));

    m_ui->progressBar->hide();
    m_ui->labelUpdating->hide();

    this->setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint);
    this->setWindowTitle("Firmware Update");
}

FirmwareUpdateWidget::~FirmwareUpdateWidget()
{
}


void FirmwareUpdateWidget::cancel() {
    this->close();
}

void FirmwareUpdateWidget::update() {

    m_ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
    m_ui->buttonBox->button(QDialogButtonBox::Cancel)->setEnabled(false);

    m_ui->progressBar->show();
    m_ui->labelUpdating->show();


    BluetoothDevice *instance = btDevice();

    if( instance->connectDevice()) {

        // Load the firmware into a byte array
        QFile file(m_ui->firmwareFilename->text());
        if (!file.open(QIODevice::ReadOnly)) return;
        QByteArray data = file.readAll();

        // Write the firmware to the card
        instance->storeFileOnCard("/device/", "firmware", data);
        instance->disconnectDevice();

        // Start 25 second timer
        timer.start(25000);
    }



}

void FirmwareUpdateWidget::finished() {
    timer.stop();
    this->close();
}


void FirmwareUpdateWidget::browseFirmwareFile()
{
    QString filename = fileDialog()->getOpenFileName(this, tr("Select firmware file"), QDir::homePath() + "/Downloads", tr("Firmware (*.bin)"));

    if (!filename.isEmpty()) {
        m_ui->firmwareFilename->setText(filename);
        m_ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(true);


    }
}


