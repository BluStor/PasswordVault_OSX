/********************************************************************************
** Form generated from reading UI file 'DatabaseOpenWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASEOPENWIDGET_H
#define UI_DATABASEOPENWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gui/PasswordEdit.h"

QT_BEGIN_NAMESPACE

class Ui_DatabaseOpenWidget
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelHeadline;
    QLabel *labelFilename;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout;
    QCheckBox *checkKeyFile;
    QCheckBox *checkPassword;
    QHBoxLayout *horizontalLayout;
    PasswordEdit *editPassword;
    QToolButton *buttonTogglePassword;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboKeyFile;
    QPushButton *buttonBrowseFile;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DatabaseOpenWidget)
    {
        if (DatabaseOpenWidget->objectName().isEmpty())
            DatabaseOpenWidget->setObjectName(QStringLiteral("DatabaseOpenWidget"));
        DatabaseOpenWidget->resize(596, 250);
        verticalLayout = new QVBoxLayout(DatabaseOpenWidget);
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        labelHeadline = new QLabel(DatabaseOpenWidget);
        labelHeadline->setObjectName(QStringLiteral("labelHeadline"));

        verticalLayout->addWidget(labelHeadline);

        labelFilename = new QLabel(DatabaseOpenWidget);
        labelFilename->setObjectName(QStringLiteral("labelFilename"));

        verticalLayout->addWidget(labelFilename);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(8);
        checkKeyFile = new QCheckBox(DatabaseOpenWidget);
        checkKeyFile->setObjectName(QStringLiteral("checkKeyFile"));

        gridLayout->addWidget(checkKeyFile, 1, 0, 1, 1);

        checkPassword = new QCheckBox(DatabaseOpenWidget);
        checkPassword->setObjectName(QStringLiteral("checkPassword"));

        gridLayout->addWidget(checkPassword, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        editPassword = new PasswordEdit(DatabaseOpenWidget);
        editPassword->setObjectName(QStringLiteral("editPassword"));
        editPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(editPassword);

        buttonTogglePassword = new QToolButton(DatabaseOpenWidget);
        buttonTogglePassword->setObjectName(QStringLiteral("buttonTogglePassword"));
        buttonTogglePassword->setCheckable(true);

        horizontalLayout->addWidget(buttonTogglePassword);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        comboKeyFile = new QComboBox(DatabaseOpenWidget);
        comboKeyFile->setObjectName(QStringLiteral("comboKeyFile"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboKeyFile->sizePolicy().hasHeightForWidth());
        comboKeyFile->setSizePolicy(sizePolicy);
        comboKeyFile->setEditable(true);

        horizontalLayout_2->addWidget(comboKeyFile);

        buttonBrowseFile = new QPushButton(DatabaseOpenWidget);
        buttonBrowseFile->setObjectName(QStringLiteral("buttonBrowseFile"));

        horizontalLayout_2->addWidget(buttonBrowseFile);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(DatabaseOpenWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(6, 3);
        QWidget::setTabOrder(checkPassword, editPassword);
        QWidget::setTabOrder(editPassword, buttonTogglePassword);
        QWidget::setTabOrder(buttonTogglePassword, checkKeyFile);
        QWidget::setTabOrder(checkKeyFile, comboKeyFile);
        QWidget::setTabOrder(comboKeyFile, buttonBrowseFile);
        QWidget::setTabOrder(buttonBrowseFile, buttonBox);

        retranslateUi(DatabaseOpenWidget);

        QMetaObject::connectSlotsByName(DatabaseOpenWidget);
    } // setupUi

    void retranslateUi(QWidget *DatabaseOpenWidget)
    {
        labelHeadline->setText(QApplication::translate("DatabaseOpenWidget", "Enter master key", Q_NULLPTR));
        checkKeyFile->setText(QApplication::translate("DatabaseOpenWidget", "Key File:", Q_NULLPTR));
        checkPassword->setText(QApplication::translate("DatabaseOpenWidget", "Password:", Q_NULLPTR));
        buttonBrowseFile->setText(QApplication::translate("DatabaseOpenWidget", "Browse", Q_NULLPTR));
        Q_UNUSED(DatabaseOpenWidget);
    } // retranslateUi

};

namespace Ui {
    class DatabaseOpenWidget: public Ui_DatabaseOpenWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASEOPENWIDGET_H
