/********************************************************************************
** Form generated from reading UI file 'PasswordGeneratorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDGENERATORWIDGET_H
#define UI_PASSWORDGENERATORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <gui/PasswordComboBox.h>

QT_BEGIN_NAMESPACE

class Ui_PasswordGeneratorWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *labelNewPassword;
    QHBoxLayout *horizontalLayout_2;
    PasswordComboBox *editNewPassword;
    QToolButton *togglePasswordButton;
    QLabel *labelLength;
    QHBoxLayout *horizontalLayout_4;
    QSlider *sliderLength;
    QSpinBox *spinBoxLength;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *checkBoxUpper;
    QToolButton *checkBoxLower;
    QToolButton *checkBoxNumbers;
    QToolButton *checkBoxSpecialChars;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxExcludeAlike;
    QCheckBox *checkBoxEnsureEvery;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonApply;
    QButtonGroup *optionButtons;

    void setupUi(QWidget *PasswordGeneratorWidget)
    {
        if (PasswordGeneratorWidget->objectName().isEmpty())
            PasswordGeneratorWidget->setObjectName(QStringLiteral("PasswordGeneratorWidget"));
        PasswordGeneratorWidget->resize(434, 250);
        verticalLayout_2 = new QVBoxLayout(PasswordGeneratorWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelNewPassword = new QLabel(PasswordGeneratorWidget);
        labelNewPassword->setObjectName(QStringLiteral("labelNewPassword"));

        gridLayout->addWidget(labelNewPassword, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        editNewPassword = new PasswordComboBox(PasswordGeneratorWidget);
        editNewPassword->setObjectName(QStringLiteral("editNewPassword"));
        editNewPassword->setEditable(true);

        horizontalLayout_2->addWidget(editNewPassword);

        togglePasswordButton = new QToolButton(PasswordGeneratorWidget);
        togglePasswordButton->setObjectName(QStringLiteral("togglePasswordButton"));
        togglePasswordButton->setCheckable(true);

        horizontalLayout_2->addWidget(togglePasswordButton);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        labelLength = new QLabel(PasswordGeneratorWidget);
        labelLength->setObjectName(QStringLiteral("labelLength"));

        gridLayout->addWidget(labelLength, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        sliderLength = new QSlider(PasswordGeneratorWidget);
        sliderLength->setObjectName(QStringLiteral("sliderLength"));
        sliderLength->setMinimum(1);
        sliderLength->setMaximum(64);
        sliderLength->setOrientation(Qt::Horizontal);
        sliderLength->setTickPosition(QSlider::TicksBelow);
        sliderLength->setTickInterval(8);

        horizontalLayout_4->addWidget(sliderLength);

        spinBoxLength = new QSpinBox(PasswordGeneratorWidget);
        spinBoxLength->setObjectName(QStringLiteral("spinBoxLength"));
        spinBoxLength->setMinimum(1);
        spinBoxLength->setMaximum(999);

        horizontalLayout_4->addWidget(spinBoxLength);


        gridLayout->addLayout(horizontalLayout_4, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        groupBox = new QGroupBox(PasswordGeneratorWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        checkBoxUpper = new QToolButton(groupBox);
        optionButtons = new QButtonGroup(PasswordGeneratorWidget);
        optionButtons->setObjectName(QStringLiteral("optionButtons"));
        optionButtons->setExclusive(false);
        optionButtons->addButton(checkBoxUpper);
        checkBoxUpper->setObjectName(QStringLiteral("checkBoxUpper"));
        checkBoxUpper->setText(QStringLiteral("A-Z"));
        checkBoxUpper->setCheckable(true);

        horizontalLayout_5->addWidget(checkBoxUpper);

        checkBoxLower = new QToolButton(groupBox);
        optionButtons->addButton(checkBoxLower);
        checkBoxLower->setObjectName(QStringLiteral("checkBoxLower"));
        checkBoxLower->setText(QStringLiteral("a-z"));
        checkBoxLower->setCheckable(true);

        horizontalLayout_5->addWidget(checkBoxLower);

        checkBoxNumbers = new QToolButton(groupBox);
        optionButtons->addButton(checkBoxNumbers);
        checkBoxNumbers->setObjectName(QStringLiteral("checkBoxNumbers"));
        checkBoxNumbers->setText(QStringLiteral("0-9"));
        checkBoxNumbers->setCheckable(true);

        horizontalLayout_5->addWidget(checkBoxNumbers);

        checkBoxSpecialChars = new QToolButton(groupBox);
        optionButtons->addButton(checkBoxSpecialChars);
        checkBoxSpecialChars->setObjectName(QStringLiteral("checkBoxSpecialChars"));
        checkBoxSpecialChars->setText(QStringLiteral("/*_& ..."));
        checkBoxSpecialChars->setCheckable(true);

        horizontalLayout_5->addWidget(checkBoxSpecialChars);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_5);

        checkBoxExcludeAlike = new QCheckBox(groupBox);
        optionButtons->addButton(checkBoxExcludeAlike);
        checkBoxExcludeAlike->setObjectName(QStringLiteral("checkBoxExcludeAlike"));

        verticalLayout->addWidget(checkBoxExcludeAlike);

        checkBoxEnsureEvery = new QCheckBox(groupBox);
        optionButtons->addButton(checkBoxEnsureEvery);
        checkBoxEnsureEvery->setObjectName(QStringLiteral("checkBoxEnsureEvery"));

        verticalLayout->addWidget(checkBoxEnsureEvery);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        buttonApply = new QPushButton(PasswordGeneratorWidget);
        buttonApply->setObjectName(QStringLiteral("buttonApply"));
        buttonApply->setEnabled(false);

        horizontalLayout_3->addWidget(buttonApply);


        verticalLayout_2->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(editNewPassword, togglePasswordButton);
        QWidget::setTabOrder(togglePasswordButton, sliderLength);
        QWidget::setTabOrder(sliderLength, spinBoxLength);
        QWidget::setTabOrder(spinBoxLength, checkBoxUpper);
        QWidget::setTabOrder(checkBoxUpper, checkBoxLower);
        QWidget::setTabOrder(checkBoxLower, checkBoxNumbers);
        QWidget::setTabOrder(checkBoxNumbers, checkBoxSpecialChars);
        QWidget::setTabOrder(checkBoxSpecialChars, checkBoxExcludeAlike);
        QWidget::setTabOrder(checkBoxExcludeAlike, checkBoxEnsureEvery);
        QWidget::setTabOrder(checkBoxEnsureEvery, buttonApply);

        retranslateUi(PasswordGeneratorWidget);

        QMetaObject::connectSlotsByName(PasswordGeneratorWidget);
    } // setupUi

    void retranslateUi(QWidget *PasswordGeneratorWidget)
    {
        PasswordGeneratorWidget->setWindowTitle(QString());
        labelNewPassword->setText(QApplication::translate("PasswordGeneratorWidget", "Password:", Q_NULLPTR));
        labelLength->setText(QApplication::translate("PasswordGeneratorWidget", "Length:", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("PasswordGeneratorWidget", "Character Types", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkBoxUpper->setToolTip(QApplication::translate("PasswordGeneratorWidget", "Upper Case Letters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxLower->setToolTip(QApplication::translate("PasswordGeneratorWidget", "Lower Case Letters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxNumbers->setToolTip(QApplication::translate("PasswordGeneratorWidget", "Numbers", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxSpecialChars->setToolTip(QApplication::translate("PasswordGeneratorWidget", "Special Characters", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkBoxExcludeAlike->setText(QApplication::translate("PasswordGeneratorWidget", "Exclude look-alike characters", Q_NULLPTR));
        checkBoxEnsureEvery->setText(QApplication::translate("PasswordGeneratorWidget", "Ensure that the password contains characters from every group", Q_NULLPTR));
        buttonApply->setText(QApplication::translate("PasswordGeneratorWidget", "Accept", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PasswordGeneratorWidget: public Ui_PasswordGeneratorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDGENERATORWIDGET_H
