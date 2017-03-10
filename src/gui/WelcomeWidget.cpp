/*
 *  Copyright (C) 2012 Felix Geyer <debfx@fobos.de>
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

#include "WelcomeWidget.h"
#include "ui_WelcomeWidget.h"

WelcomeWidget::WelcomeWidget(QWidget* parent)
    : QWidget(parent)
    , m_ui(new Ui::WelcomeWidget())
{
    m_ui->setupUi(this);
    m_ui->labelBT->setText("Welcome!");
}

void WelcomeWidget::updateWindowData(int value , QString text)
{

    if(value == 0)
    {
       m_ui->labelBT->setText(text);
       m_ui->progressBar->setValue(value);
       m_ui->progressBar->valueChanged(value);
       m_ui->progressBar->setVisible(false);
    }
    else  if(value == 100)
    {
         m_ui->labelBT->setText("Welcome!");
         m_ui->progressBar->setValue(0);
         m_ui->progressBar->valueChanged(0);
         m_ui->progressBar->setVisible(false);
    }
    else
    {
        if(text.isNull()==false)
             m_ui->labelBT->setText(text);
        m_ui->progressBar->setValue(value);
        m_ui->progressBar->valueChanged(value);
         m_ui->progressBar->setVisible(true);
    }

    QApplication::processEvents( QEventLoop::ExcludeUserInputEvents );

}


WelcomeWidget::~WelcomeWidget()
{
}
