/********************************************************************************
** Form generated from reading UI file 'EditGroupWidgetMain.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITGROUPWIDGETMAIN_H
#define UI_EDITGROUPWIDGETMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditGroupWidgetMain
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelName;
    QLineEdit *editName;
    QLabel *labelNotes;
    QPlainTextEdit *editNotes;
    QCheckBox *expireCheck;
    QDateTimeEdit *expireDatePicker;
    QLabel *searchLabel;
    QComboBox *searchComboBox;
    QLabel *autotypeLabel;
    QComboBox *autotypeComboBox;
    QRadioButton *autoTypeSequenceInherit;
    QRadioButton *autoTypeSequenceCustomRadio;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *autoTypeSequenceCustomEdit;

    void setupUi(QWidget *EditGroupWidgetMain)
    {
        if (EditGroupWidgetMain->objectName().isEmpty())
            EditGroupWidgetMain->setObjectName(QStringLiteral("EditGroupWidgetMain"));
        EditGroupWidgetMain->resize(676, 356);
        verticalLayout = new QVBoxLayout(EditGroupWidgetMain);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        labelName = new QLabel(EditGroupWidgetMain);
        labelName->setObjectName(QStringLiteral("labelName"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelName);

        editName = new QLineEdit(EditGroupWidgetMain);
        editName->setObjectName(QStringLiteral("editName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editName);

        labelNotes = new QLabel(EditGroupWidgetMain);
        labelNotes->setObjectName(QStringLiteral("labelNotes"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelNotes);

        editNotes = new QPlainTextEdit(EditGroupWidgetMain);
        editNotes->setObjectName(QStringLiteral("editNotes"));

        formLayout->setWidget(1, QFormLayout::FieldRole, editNotes);

        expireCheck = new QCheckBox(EditGroupWidgetMain);
        expireCheck->setObjectName(QStringLiteral("expireCheck"));

        formLayout->setWidget(2, QFormLayout::LabelRole, expireCheck);

        expireDatePicker = new QDateTimeEdit(EditGroupWidgetMain);
        expireDatePicker->setObjectName(QStringLiteral("expireDatePicker"));
        expireDatePicker->setEnabled(false);
        expireDatePicker->setCalendarPopup(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, expireDatePicker);

        searchLabel = new QLabel(EditGroupWidgetMain);
        searchLabel->setObjectName(QStringLiteral("searchLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, searchLabel);

        searchComboBox = new QComboBox(EditGroupWidgetMain);
        searchComboBox->setObjectName(QStringLiteral("searchComboBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, searchComboBox);

        autotypeLabel = new QLabel(EditGroupWidgetMain);
        autotypeLabel->setObjectName(QStringLiteral("autotypeLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, autotypeLabel);

        autotypeComboBox = new QComboBox(EditGroupWidgetMain);
        autotypeComboBox->setObjectName(QStringLiteral("autotypeComboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, autotypeComboBox);

        autoTypeSequenceInherit = new QRadioButton(EditGroupWidgetMain);
        autoTypeSequenceInherit->setObjectName(QStringLiteral("autoTypeSequenceInherit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, autoTypeSequenceInherit);

        autoTypeSequenceCustomRadio = new QRadioButton(EditGroupWidgetMain);
        autoTypeSequenceCustomRadio->setObjectName(QStringLiteral("autoTypeSequenceCustomRadio"));

        formLayout->setWidget(6, QFormLayout::FieldRole, autoTypeSequenceCustomRadio);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(20, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        autoTypeSequenceCustomEdit = new QLineEdit(EditGroupWidgetMain);
        autoTypeSequenceCustomEdit->setObjectName(QStringLiteral("autoTypeSequenceCustomEdit"));
        autoTypeSequenceCustomEdit->setEnabled(false);

        horizontalLayout_2->addWidget(autoTypeSequenceCustomEdit);


        formLayout->setLayout(7, QFormLayout::FieldRole, horizontalLayout_2);


        verticalLayout->addLayout(formLayout);

        QWidget::setTabOrder(editName, editNotes);
        QWidget::setTabOrder(editNotes, expireCheck);
        QWidget::setTabOrder(expireCheck, expireDatePicker);
        QWidget::setTabOrder(expireDatePicker, searchComboBox);
        QWidget::setTabOrder(searchComboBox, autotypeComboBox);

        retranslateUi(EditGroupWidgetMain);

        QMetaObject::connectSlotsByName(EditGroupWidgetMain);
    } // setupUi

    void retranslateUi(QWidget *EditGroupWidgetMain)
    {
        labelName->setText(QApplication::translate("EditGroupWidgetMain", "Name", Q_NULLPTR));
        labelNotes->setText(QApplication::translate("EditGroupWidgetMain", "Notes", Q_NULLPTR));
        expireCheck->setText(QApplication::translate("EditGroupWidgetMain", "Expires", Q_NULLPTR));
        searchLabel->setText(QApplication::translate("EditGroupWidgetMain", "Search", Q_NULLPTR));
        autotypeLabel->setText(QApplication::translate("EditGroupWidgetMain", "Auto-type", Q_NULLPTR));
        autoTypeSequenceInherit->setText(QApplication::translate("EditGroupWidgetMain", "Use default auto-type sequence of parent group", Q_NULLPTR));
        autoTypeSequenceCustomRadio->setText(QApplication::translate("EditGroupWidgetMain", "Set default auto-type sequence", Q_NULLPTR));
        Q_UNUSED(EditGroupWidgetMain);
    } // retranslateUi

};

namespace Ui {
    class EditGroupWidgetMain: public Ui_EditGroupWidgetMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITGROUPWIDGETMAIN_H
