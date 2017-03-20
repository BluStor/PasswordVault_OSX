/********************************************************************************
** Form generated from reading UI file 'SettingsWidgetGeneral.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWIDGETGENERAL_H
#define UI_SETTINGSWIDGETGENERAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "autotype/ShortcutWidget.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsWidgetGeneral
{
public:
    QFormLayout *formLayout;
    QCheckBox *rememberLastDatabasesCheckBox;
    QCheckBox *rememberLastKeyFilesCheckBox;
    QCheckBox *openPreviousDatabasesOnStartupCheckBox;
    QCheckBox *autoSaveOnExitCheckBox;
    QCheckBox *autoSaveAfterEveryChangeCheckBox;
    QCheckBox *minimizeOnCopyCheckBox;
    QCheckBox *useGroupIconOnEntryCreationCheckBox;
    QLabel *autoTypeShortcutLabel;
    ShortcutWidget *autoTypeShortcutWidget;
    QCheckBox *autoTypeEntryTitleMatchCheckBox;
    QLabel *languageLabel;
    QComboBox *languageComboBox;
    QCheckBox *systrayShowCheckBox;
    QCheckBox *systrayMinimizeToTrayCheckBox;

    void setupUi(QWidget *SettingsWidgetGeneral)
    {
        if (SettingsWidgetGeneral->objectName().isEmpty())
            SettingsWidgetGeneral->setObjectName(QStringLiteral("SettingsWidgetGeneral"));
        SettingsWidgetGeneral->resize(456, 313);
        formLayout = new QFormLayout(SettingsWidgetGeneral);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        rememberLastDatabasesCheckBox = new QCheckBox(SettingsWidgetGeneral);
        rememberLastDatabasesCheckBox->setObjectName(QStringLiteral("rememberLastDatabasesCheckBox"));
        rememberLastDatabasesCheckBox->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, rememberLastDatabasesCheckBox);

        rememberLastKeyFilesCheckBox = new QCheckBox(SettingsWidgetGeneral);
        rememberLastKeyFilesCheckBox->setObjectName(QStringLiteral("rememberLastKeyFilesCheckBox"));
        rememberLastKeyFilesCheckBox->setChecked(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, rememberLastKeyFilesCheckBox);

        openPreviousDatabasesOnStartupCheckBox = new QCheckBox(SettingsWidgetGeneral);
        openPreviousDatabasesOnStartupCheckBox->setObjectName(QStringLiteral("openPreviousDatabasesOnStartupCheckBox"));

        formLayout->setWidget(2, QFormLayout::LabelRole, openPreviousDatabasesOnStartupCheckBox);

        autoSaveOnExitCheckBox = new QCheckBox(SettingsWidgetGeneral);
        autoSaveOnExitCheckBox->setObjectName(QStringLiteral("autoSaveOnExitCheckBox"));

        formLayout->setWidget(3, QFormLayout::LabelRole, autoSaveOnExitCheckBox);

        autoSaveAfterEveryChangeCheckBox = new QCheckBox(SettingsWidgetGeneral);
        autoSaveAfterEveryChangeCheckBox->setObjectName(QStringLiteral("autoSaveAfterEveryChangeCheckBox"));

        formLayout->setWidget(4, QFormLayout::LabelRole, autoSaveAfterEveryChangeCheckBox);

        minimizeOnCopyCheckBox = new QCheckBox(SettingsWidgetGeneral);
        minimizeOnCopyCheckBox->setObjectName(QStringLiteral("minimizeOnCopyCheckBox"));

        formLayout->setWidget(5, QFormLayout::LabelRole, minimizeOnCopyCheckBox);

        useGroupIconOnEntryCreationCheckBox = new QCheckBox(SettingsWidgetGeneral);
        useGroupIconOnEntryCreationCheckBox->setObjectName(QStringLiteral("useGroupIconOnEntryCreationCheckBox"));

        formLayout->setWidget(6, QFormLayout::LabelRole, useGroupIconOnEntryCreationCheckBox);

        autoTypeShortcutLabel = new QLabel(SettingsWidgetGeneral);
        autoTypeShortcutLabel->setObjectName(QStringLiteral("autoTypeShortcutLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, autoTypeShortcutLabel);

        autoTypeShortcutWidget = new ShortcutWidget(SettingsWidgetGeneral);
        autoTypeShortcutWidget->setObjectName(QStringLiteral("autoTypeShortcutWidget"));

        formLayout->setWidget(7, QFormLayout::FieldRole, autoTypeShortcutWidget);

        autoTypeEntryTitleMatchCheckBox = new QCheckBox(SettingsWidgetGeneral);
        autoTypeEntryTitleMatchCheckBox->setObjectName(QStringLiteral("autoTypeEntryTitleMatchCheckBox"));

        formLayout->setWidget(8, QFormLayout::LabelRole, autoTypeEntryTitleMatchCheckBox);

        languageLabel = new QLabel(SettingsWidgetGeneral);
        languageLabel->setObjectName(QStringLiteral("languageLabel"));

        formLayout->setWidget(9, QFormLayout::LabelRole, languageLabel);

        languageComboBox = new QComboBox(SettingsWidgetGeneral);
        languageComboBox->setObjectName(QStringLiteral("languageComboBox"));

        formLayout->setWidget(9, QFormLayout::FieldRole, languageComboBox);

        systrayShowCheckBox = new QCheckBox(SettingsWidgetGeneral);
        systrayShowCheckBox->setObjectName(QStringLiteral("systrayShowCheckBox"));

        formLayout->setWidget(10, QFormLayout::LabelRole, systrayShowCheckBox);

        systrayMinimizeToTrayCheckBox = new QCheckBox(SettingsWidgetGeneral);
        systrayMinimizeToTrayCheckBox->setObjectName(QStringLiteral("systrayMinimizeToTrayCheckBox"));
        systrayMinimizeToTrayCheckBox->setEnabled(false);

        formLayout->setWidget(11, QFormLayout::LabelRole, systrayMinimizeToTrayCheckBox);

        QWidget::setTabOrder(rememberLastDatabasesCheckBox, rememberLastKeyFilesCheckBox);
        QWidget::setTabOrder(rememberLastKeyFilesCheckBox, openPreviousDatabasesOnStartupCheckBox);
        QWidget::setTabOrder(openPreviousDatabasesOnStartupCheckBox, autoSaveOnExitCheckBox);
        QWidget::setTabOrder(autoSaveOnExitCheckBox, autoSaveAfterEveryChangeCheckBox);
        QWidget::setTabOrder(autoSaveAfterEveryChangeCheckBox, minimizeOnCopyCheckBox);
        QWidget::setTabOrder(minimizeOnCopyCheckBox, autoTypeShortcutWidget);

        retranslateUi(SettingsWidgetGeneral);

        QMetaObject::connectSlotsByName(SettingsWidgetGeneral);
    } // setupUi

    void retranslateUi(QWidget *SettingsWidgetGeneral)
    {
        rememberLastDatabasesCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Remember last databases", Q_NULLPTR));
        rememberLastKeyFilesCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Remember last key files", Q_NULLPTR));
        openPreviousDatabasesOnStartupCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Open previous databases on startup", Q_NULLPTR));
        autoSaveOnExitCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Automatically save on exit", Q_NULLPTR));
        autoSaveAfterEveryChangeCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Automatically save after every change", Q_NULLPTR));
        minimizeOnCopyCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Minimize when copying to clipboard", Q_NULLPTR));
        useGroupIconOnEntryCreationCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Use group icon on entry creation", Q_NULLPTR));
        autoTypeShortcutLabel->setText(QApplication::translate("SettingsWidgetGeneral", "Global Auto-Type shortcut", Q_NULLPTR));
        autoTypeEntryTitleMatchCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Use entry title to match windows for global auto-type", Q_NULLPTR));
        languageLabel->setText(QApplication::translate("SettingsWidgetGeneral", "Language", Q_NULLPTR));
        systrayShowCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Show a system tray icon", Q_NULLPTR));
        systrayMinimizeToTrayCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Hide window to system tray when minimized", Q_NULLPTR));
        Q_UNUSED(SettingsWidgetGeneral);
    } // retranslateUi

};

namespace Ui {
    class SettingsWidgetGeneral: public Ui_SettingsWidgetGeneral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWIDGETGENERAL_H
