/********************************************************************************
** Form generated from reading UI file 'ChangeMasterKeyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEMASTERKEYWIDGET_H
#define UI_CHANGEMASTERKEYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
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

class Ui_ChangeMasterKeyWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *headlineLabel;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *passwordGroup;
    QFormLayout *formLayout;
    QLabel *enterPasswordLabel;
    QHBoxLayout *horizontalLayout;
    PasswordEdit *enterPasswordEdit;
    QToolButton *togglePasswordButton;
    QLabel *repeatPasswordLabel;
    PasswordEdit *repeatPasswordEdit;
    QGroupBox *keyFileGroup;
    QGridLayout *gridLayout;
    QPushButton *browseKeyFileButton;
    QPushButton *createKeyFileButton;
    QComboBox *keyFileCombo;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *ChangeMasterKeyWidget)
    {
        if (ChangeMasterKeyWidget->objectName().isEmpty())
            ChangeMasterKeyWidget->setObjectName(QStringLiteral("ChangeMasterKeyWidget"));
        ChangeMasterKeyWidget->resize(438, 256);
        verticalLayout = new QVBoxLayout(ChangeMasterKeyWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        headlineLabel = new QLabel(ChangeMasterKeyWidget);
        headlineLabel->setObjectName(QStringLiteral("headlineLabel"));

        verticalLayout->addWidget(headlineLabel);

        verticalSpacer_2 = new QSpacerItem(1, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        passwordGroup = new QGroupBox(ChangeMasterKeyWidget);
        passwordGroup->setObjectName(QStringLiteral("passwordGroup"));
        passwordGroup->setCheckable(true);
        passwordGroup->setChecked(true);
        formLayout = new QFormLayout(passwordGroup);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        enterPasswordLabel = new QLabel(passwordGroup);
        enterPasswordLabel->setObjectName(QStringLiteral("enterPasswordLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, enterPasswordLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        enterPasswordEdit = new PasswordEdit(passwordGroup);
        enterPasswordEdit->setObjectName(QStringLiteral("enterPasswordEdit"));
        enterPasswordEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(enterPasswordEdit);

        togglePasswordButton = new QToolButton(passwordGroup);
        togglePasswordButton->setObjectName(QStringLiteral("togglePasswordButton"));
        togglePasswordButton->setCheckable(true);

        horizontalLayout->addWidget(togglePasswordButton);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        repeatPasswordLabel = new QLabel(passwordGroup);
        repeatPasswordLabel->setObjectName(QStringLiteral("repeatPasswordLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, repeatPasswordLabel);

        repeatPasswordEdit = new PasswordEdit(passwordGroup);
        repeatPasswordEdit->setObjectName(QStringLiteral("repeatPasswordEdit"));
        repeatPasswordEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, repeatPasswordEdit);


        verticalLayout->addWidget(passwordGroup);

        keyFileGroup = new QGroupBox(ChangeMasterKeyWidget);
        keyFileGroup->setObjectName(QStringLiteral("keyFileGroup"));
        keyFileGroup->setCheckable(true);
        gridLayout = new QGridLayout(keyFileGroup);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        browseKeyFileButton = new QPushButton(keyFileGroup);
        browseKeyFileButton->setObjectName(QStringLiteral("browseKeyFileButton"));

        gridLayout->addWidget(browseKeyFileButton, 0, 2, 1, 1);

        createKeyFileButton = new QPushButton(keyFileGroup);
        createKeyFileButton->setObjectName(QStringLiteral("createKeyFileButton"));

        gridLayout->addWidget(createKeyFileButton, 1, 2, 1, 1);

        keyFileCombo = new QComboBox(keyFileGroup);
        keyFileCombo->setObjectName(QStringLiteral("keyFileCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(keyFileCombo->sizePolicy().hasHeightForWidth());
        keyFileCombo->setSizePolicy(sizePolicy);
        keyFileCombo->setEditable(true);

        gridLayout->addWidget(keyFileCombo, 0, 1, 1, 1);


        verticalLayout->addWidget(keyFileGroup);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ChangeMasterKeyWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(passwordGroup, enterPasswordEdit);
        QWidget::setTabOrder(enterPasswordEdit, repeatPasswordEdit);
        QWidget::setTabOrder(repeatPasswordEdit, togglePasswordButton);
        QWidget::setTabOrder(togglePasswordButton, keyFileGroup);
        QWidget::setTabOrder(keyFileGroup, keyFileCombo);
        QWidget::setTabOrder(keyFileCombo, browseKeyFileButton);
        QWidget::setTabOrder(browseKeyFileButton, createKeyFileButton);
        QWidget::setTabOrder(createKeyFileButton, buttonBox);

        retranslateUi(ChangeMasterKeyWidget);

        QMetaObject::connectSlotsByName(ChangeMasterKeyWidget);
    } // setupUi

    void retranslateUi(QWidget *ChangeMasterKeyWidget)
    {
        passwordGroup->setTitle(QApplication::translate("ChangeMasterKeyWidget", "Password", Q_NULLPTR));
        enterPasswordLabel->setText(QApplication::translate("ChangeMasterKeyWidget", "Enter password:", Q_NULLPTR));
        repeatPasswordLabel->setText(QApplication::translate("ChangeMasterKeyWidget", "Repeat password:", Q_NULLPTR));
        keyFileGroup->setTitle(QApplication::translate("ChangeMasterKeyWidget", "Key file", Q_NULLPTR));
        browseKeyFileButton->setText(QApplication::translate("ChangeMasterKeyWidget", "Browse", Q_NULLPTR));
        createKeyFileButton->setText(QApplication::translate("ChangeMasterKeyWidget", "Create", Q_NULLPTR));
        Q_UNUSED(ChangeMasterKeyWidget);
    } // retranslateUi

};

namespace Ui {
    class ChangeMasterKeyWidget: public Ui_ChangeMasterKeyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEMASTERKEYWIDGET_H
