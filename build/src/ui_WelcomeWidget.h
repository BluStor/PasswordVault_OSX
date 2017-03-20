/********************************************************************************
** Form generated from reading UI file 'WelcomeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWIDGET_H
#define UI_WELCOMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWidget
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelWelcome;
    QLabel *labelBT;
    QProgressBar *progressBar;

    void setupUi(QWidget *WelcomeWidget)
    {
        if (WelcomeWidget->objectName().isEmpty())
            WelcomeWidget->setObjectName(QStringLiteral("WelcomeWidget"));
        WelcomeWidget->resize(413, 102);
        verticalLayout = new QVBoxLayout(WelcomeWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelWelcome = new QLabel(WelcomeWidget);
        labelWelcome->setObjectName(QStringLiteral("labelWelcome"));
        labelWelcome->setEnabled(true);
        labelWelcome->setBaseSize(QSize(30, 30));
        labelWelcome->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelWelcome);

        labelBT = new QLabel(WelcomeWidget);
        labelBT->setObjectName(QStringLiteral("labelBT"));

        verticalLayout_2->addWidget(labelBT, 0, Qt::AlignHCenter);

        progressBar = new QProgressBar(WelcomeWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        verticalLayout_2->addWidget(progressBar);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(WelcomeWidget);

        QMetaObject::connectSlotsByName(WelcomeWidget);
    } // setupUi

    void retranslateUi(QWidget *WelcomeWidget)
    {
        labelWelcome->setText(QString());
        labelBT->setText(QApplication::translate("WelcomeWidget", "Loading ...", Q_NULLPTR));
        Q_UNUSED(WelcomeWidget);
    } // retranslateUi

};

namespace Ui {
    class WelcomeWidget: public Ui_WelcomeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWIDGET_H
