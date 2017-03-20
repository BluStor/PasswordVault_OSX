/********************************************************************************
** Form generated from reading UI file 'EditEntryWidgetMain.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITENTRYWIDGETMAIN_H
#define UI_EDITENTRYWIDGETMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "gui/PasswordEdit.h"
#include "gui/PasswordGeneratorWidget.h"

QT_BEGIN_NAMESPACE

class Ui_EditEntryWidgetMain
{
public:
    QFormLayout *formLayout;
    QLabel *titleLabel;
    QLineEdit *titleEdit;
    QLabel *usernameLabel;
    QLineEdit *usernameEdit;
    QLabel *passwordLabel;
    QHBoxLayout *horizontalLayout;
    PasswordEdit *passwordEdit;
    QToolButton *togglePasswordButton;
    QLabel *passwordRepeatLabel;
    QHBoxLayout *horizontalLayout_4;
    PasswordEdit *passwordRepeatEdit;
    QToolButton *tooglePasswordGeneratorButton;
    QLabel *urlLabel;
    QLineEdit *urlEdit;
    QCheckBox *expireCheck;
    QHBoxLayout *horizontalLayout_2;
    QDateTimeEdit *expireDatePicker;
    QPushButton *expirePresets;
    QLabel *notesLabel;
    QPlainTextEdit *notesEdit;
    PasswordGeneratorWidget *passwordGenerator;

    void setupUi(QWidget *EditEntryWidgetMain)
    {
        if (EditEntryWidgetMain->objectName().isEmpty())
            EditEntryWidgetMain->setObjectName(QStringLiteral("EditEntryWidgetMain"));
        EditEntryWidgetMain->resize(372, 301);
        formLayout = new QFormLayout(EditEntryWidgetMain);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        titleLabel = new QLabel(EditEntryWidgetMain);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, titleLabel);

        titleEdit = new QLineEdit(EditEntryWidgetMain);
        titleEdit->setObjectName(QStringLiteral("titleEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, titleEdit);

        usernameLabel = new QLabel(EditEntryWidgetMain);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, usernameLabel);

        usernameEdit = new QLineEdit(EditEntryWidgetMain);
        usernameEdit->setObjectName(QStringLiteral("usernameEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, usernameEdit);

        passwordLabel = new QLabel(EditEntryWidgetMain);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, passwordLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        passwordEdit = new PasswordEdit(EditEntryWidgetMain);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(passwordEdit);

        togglePasswordButton = new QToolButton(EditEntryWidgetMain);
        togglePasswordButton->setObjectName(QStringLiteral("togglePasswordButton"));
        togglePasswordButton->setCheckable(true);

        horizontalLayout->addWidget(togglePasswordButton);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        passwordRepeatLabel = new QLabel(EditEntryWidgetMain);
        passwordRepeatLabel->setObjectName(QStringLiteral("passwordRepeatLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, passwordRepeatLabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        passwordRepeatEdit = new PasswordEdit(EditEntryWidgetMain);
        passwordRepeatEdit->setObjectName(QStringLiteral("passwordRepeatEdit"));
        passwordRepeatEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(passwordRepeatEdit);

        tooglePasswordGeneratorButton = new QToolButton(EditEntryWidgetMain);
        tooglePasswordGeneratorButton->setObjectName(QStringLiteral("tooglePasswordGeneratorButton"));
        tooglePasswordGeneratorButton->setCheckable(true);

        horizontalLayout_4->addWidget(tooglePasswordGeneratorButton);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout_4);

        urlLabel = new QLabel(EditEntryWidgetMain);
        urlLabel->setObjectName(QStringLiteral("urlLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, urlLabel);

        urlEdit = new QLineEdit(EditEntryWidgetMain);
        urlEdit->setObjectName(QStringLiteral("urlEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, urlEdit);

        expireCheck = new QCheckBox(EditEntryWidgetMain);
        expireCheck->setObjectName(QStringLiteral("expireCheck"));

        formLayout->setWidget(8, QFormLayout::LabelRole, expireCheck);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        expireDatePicker = new QDateTimeEdit(EditEntryWidgetMain);
        expireDatePicker->setObjectName(QStringLiteral("expireDatePicker"));
        expireDatePicker->setEnabled(false);
        expireDatePicker->setCalendarPopup(true);

        horizontalLayout_2->addWidget(expireDatePicker);

        expirePresets = new QPushButton(EditEntryWidgetMain);
        expirePresets->setObjectName(QStringLiteral("expirePresets"));

        horizontalLayout_2->addWidget(expirePresets);


        formLayout->setLayout(8, QFormLayout::FieldRole, horizontalLayout_2);

        notesLabel = new QLabel(EditEntryWidgetMain);
        notesLabel->setObjectName(QStringLiteral("notesLabel"));

        formLayout->setWidget(9, QFormLayout::LabelRole, notesLabel);

        notesEdit = new QPlainTextEdit(EditEntryWidgetMain);
        notesEdit->setObjectName(QStringLiteral("notesEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(notesEdit->sizePolicy().hasHeightForWidth());
        notesEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(9, QFormLayout::FieldRole, notesEdit);

        passwordGenerator = new PasswordGeneratorWidget(EditEntryWidgetMain);
        passwordGenerator->setObjectName(QStringLiteral("passwordGenerator"));

        formLayout->setWidget(6, QFormLayout::FieldRole, passwordGenerator);

        QWidget::setTabOrder(titleEdit, usernameEdit);
        QWidget::setTabOrder(usernameEdit, passwordEdit);
        QWidget::setTabOrder(passwordEdit, passwordRepeatEdit);
        QWidget::setTabOrder(passwordRepeatEdit, togglePasswordButton);
        QWidget::setTabOrder(togglePasswordButton, tooglePasswordGeneratorButton);
        QWidget::setTabOrder(tooglePasswordGeneratorButton, urlEdit);
        QWidget::setTabOrder(urlEdit, expireCheck);
        QWidget::setTabOrder(expireCheck, expireDatePicker);
        QWidget::setTabOrder(expireDatePicker, expirePresets);
        QWidget::setTabOrder(expirePresets, notesEdit);

        retranslateUi(EditEntryWidgetMain);

        QMetaObject::connectSlotsByName(EditEntryWidgetMain);
    } // setupUi

    void retranslateUi(QWidget *EditEntryWidgetMain)
    {
        titleLabel->setText(QApplication::translate("EditEntryWidgetMain", "Title:", Q_NULLPTR));
        usernameLabel->setText(QApplication::translate("EditEntryWidgetMain", "Username:", Q_NULLPTR));
        passwordLabel->setText(QApplication::translate("EditEntryWidgetMain", "Password:", Q_NULLPTR));
        passwordRepeatLabel->setText(QApplication::translate("EditEntryWidgetMain", "Repeat:", Q_NULLPTR));
        tooglePasswordGeneratorButton->setText(QApplication::translate("EditEntryWidgetMain", "Gen.", Q_NULLPTR));
        urlLabel->setText(QApplication::translate("EditEntryWidgetMain", "URL:", Q_NULLPTR));
        expireCheck->setText(QApplication::translate("EditEntryWidgetMain", "Expires", Q_NULLPTR));
        expirePresets->setText(QApplication::translate("EditEntryWidgetMain", "Presets", Q_NULLPTR));
        notesLabel->setText(QApplication::translate("EditEntryWidgetMain", "Notes:", Q_NULLPTR));
        Q_UNUSED(EditEntryWidgetMain);
    } // retranslateUi

};

namespace Ui {
    class EditEntryWidgetMain: public Ui_EditEntryWidgetMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITENTRYWIDGETMAIN_H
