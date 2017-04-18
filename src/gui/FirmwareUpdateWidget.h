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

#ifndef KEEPASSX_FIRMWAREUPDATEWIDGET_H
#define KEEPASSX_FIRMWAREUPDATEWIDGET_H

#include <QScopedPointer>
#include <QTimer>

#include "gui/DialogyWidget.h"
#include "keys/CompositeKey.h"

class Database;
class QFile;

namespace Ui {
    class FirmwareUpdateWidget;
}

class FirmwareUpdateWidget : public DialogyWidget
{
    Q_OBJECT

public:
    explicit FirmwareUpdateWidget(QWidget* parent = nullptr);
    ~FirmwareUpdateWidget();

Q_SIGNALS:

protected:

protected Q_SLOTS:


private Q_SLOTS:
    void browseFirmwareFile();
    void cancel();
    void update();
    void finished();

protected:
    const QScopedPointer<Ui::FirmwareUpdateWidget> m_ui;
    QString m_filename;

private:
    QTimer timer;
};

#endif // KEEPASSX_FIRMWAREUPDATEWIDGET_H
