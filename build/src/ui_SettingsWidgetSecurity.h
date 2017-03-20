/********************************************************************************
** Form generated from reading UI file 'SettingsWidgetSecurity.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWIDGETSECURITY_H
#define UI_SETTINGSWIDGETSECURITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWidgetSecurity
{
public:
    QFormLayout *formLayout;
    QCheckBox *clearClipboardCheckBox;
    QSpinBox *clearClipboardSpinBox;
    QCheckBox *lockDatabaseIdleCheckBox;
    QSpinBox *lockDatabaseIdleSpinBox;
    QCheckBox *passwordCleartextCheckBox;
    QCheckBox *autoTypeAskCheckBox;

    void setupUi(QWidget *SettingsWidgetSecurity)
    {
        if (SettingsWidgetSecurity->objectName().isEmpty())
            SettingsWidgetSecurity->setObjectName(QStringLiteral("SettingsWidgetSecurity"));
        SettingsWidgetSecurity->resize(374, 303);
        formLayout = new QFormLayout(SettingsWidgetSecurity);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        clearClipboardCheckBox = new QCheckBox(SettingsWidgetSecurity);
        clearClipboardCheckBox->setObjectName(QStringLiteral("clearClipboardCheckBox"));

        formLayout->setWidget(0, QFormLayout::LabelRole, clearClipboardCheckBox);

        clearClipboardSpinBox = new QSpinBox(SettingsWidgetSecurity);
        clearClipboardSpinBox->setObjectName(QStringLiteral("clearClipboardSpinBox"));
        clearClipboardSpinBox->setEnabled(false);
        clearClipboardSpinBox->setMinimum(1);
        clearClipboardSpinBox->setMaximum(999);

        formLayout->setWidget(0, QFormLayout::FieldRole, clearClipboardSpinBox);

        lockDatabaseIdleCheckBox = new QCheckBox(SettingsWidgetSecurity);
        lockDatabaseIdleCheckBox->setObjectName(QStringLiteral("lockDatabaseIdleCheckBox"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lockDatabaseIdleCheckBox);

        lockDatabaseIdleSpinBox = new QSpinBox(SettingsWidgetSecurity);
        lockDatabaseIdleSpinBox->setObjectName(QStringLiteral("lockDatabaseIdleSpinBox"));
        lockDatabaseIdleSpinBox->setEnabled(false);
        lockDatabaseIdleSpinBox->setMinimum(10);
        lockDatabaseIdleSpinBox->setMaximum(9999);

        formLayout->setWidget(1, QFormLayout::FieldRole, lockDatabaseIdleSpinBox);

        passwordCleartextCheckBox = new QCheckBox(SettingsWidgetSecurity);
        passwordCleartextCheckBox->setObjectName(QStringLiteral("passwordCleartextCheckBox"));

        formLayout->setWidget(2, QFormLayout::LabelRole, passwordCleartextCheckBox);

        autoTypeAskCheckBox = new QCheckBox(SettingsWidgetSecurity);
        autoTypeAskCheckBox->setObjectName(QStringLiteral("autoTypeAskCheckBox"));

        formLayout->setWidget(3, QFormLayout::LabelRole, autoTypeAskCheckBox);

        QWidget::setTabOrder(clearClipboardCheckBox, clearClipboardSpinBox);

        retranslateUi(SettingsWidgetSecurity);

        QMetaObject::connectSlotsByName(SettingsWidgetSecurity);
    } // setupUi

    void retranslateUi(QWidget *SettingsWidgetSecurity)
    {
        clearClipboardCheckBox->setText(QApplication::translate("SettingsWidgetSecurity", "Clear clipboard after", Q_NULLPTR));
        clearClipboardSpinBox->setSuffix(QApplication::translate("SettingsWidgetSecurity", " sec", Q_NULLPTR));
        lockDatabaseIdleCheckBox->setText(QApplication::translate("SettingsWidgetSecurity", "Lock databases after inactivity of", Q_NULLPTR));
        lockDatabaseIdleSpinBox->setSuffix(QApplication::translate("SettingsWidgetSecurity", " sec", Q_NULLPTR));
        passwordCleartextCheckBox->setText(QApplication::translate("SettingsWidgetSecurity", "Show passwords in cleartext by default", Q_NULLPTR));
        autoTypeAskCheckBox->setText(QApplication::translate("SettingsWidgetSecurity", "Always ask before performing auto-type", Q_NULLPTR));
        Q_UNUSED(SettingsWidgetSecurity);
    } // retranslateUi

};

namespace Ui {
    class SettingsWidgetSecurity: public Ui_SettingsWidgetSecurity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWIDGETSECURITY_H
