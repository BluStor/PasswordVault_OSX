/********************************************************************************
** Form generated from reading UI file 'EditWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITWIDGET_H
#define UI_EDITWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gui/entry/EditEntryWidget_p.h"

QT_BEGIN_NAMESPACE

class Ui_EditWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *headerLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    CategoryListWidget *categoryList;
    QStackedWidget *stackedWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *EditWidget)
    {
        if (EditWidget->objectName().isEmpty())
            EditWidget->setObjectName(QStringLiteral("EditWidget"));
        EditWidget->resize(612, 255);
        verticalLayout = new QVBoxLayout(EditWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        headerLabel = new QLabel(EditWidget);
        headerLabel->setObjectName(QStringLiteral("headerLabel"));

        verticalLayout->addWidget(headerLabel);

        verticalSpacer = new QSpacerItem(1, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        categoryList = new CategoryListWidget(EditWidget);
        categoryList->setObjectName(QStringLiteral("categoryList"));

        horizontalLayout->addWidget(categoryList);

        stackedWidget = new QStackedWidget(EditWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(EditWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(categoryList, buttonBox);

        retranslateUi(EditWidget);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(EditWidget);
    } // setupUi

    void retranslateUi(QWidget *EditWidget)
    {
        headerLabel->setText(QString());
        Q_UNUSED(EditWidget);
    } // retranslateUi

};

namespace Ui {
    class EditWidget: public Ui_EditWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWIDGET_H
