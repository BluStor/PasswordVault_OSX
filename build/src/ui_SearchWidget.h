/********************************************************************************
** Form generated from reading UI file 'SearchWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWIDGET_H
#define UI_SEARCHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "gui/LineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_SearchWidget
{
public:
    QGridLayout *gridLayout;
    LineEdit *searchEdit;
    QHBoxLayout *horizontalLayout;
    QToolButton *closeSearchButton;
    QLabel *label;
    QWidget *optionsWidget;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *caseSensitiveCheckBox;
    QRadioButton *searchCurrentRadioButton;
    QRadioButton *searchRootRadioButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *SearchWidget)
    {
        if (SearchWidget->objectName().isEmpty())
            SearchWidget->setObjectName(QStringLiteral("SearchWidget"));
        SearchWidget->resize(630, 87);
        gridLayout = new QGridLayout(SearchWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        searchEdit = new LineEdit(SearchWidget);
        searchEdit->setObjectName(QStringLiteral("searchEdit"));

        gridLayout->addWidget(searchEdit, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        closeSearchButton = new QToolButton(SearchWidget);
        closeSearchButton->setObjectName(QStringLiteral("closeSearchButton"));
        closeSearchButton->setFocusPolicy(Qt::ClickFocus);
        closeSearchButton->setAutoRaise(true);

        horizontalLayout->addWidget(closeSearchButton);

        label = new QLabel(SearchWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        optionsWidget = new QWidget(SearchWidget);
        optionsWidget->setObjectName(QStringLiteral("optionsWidget"));
        horizontalLayout_2 = new QHBoxLayout(optionsWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        caseSensitiveCheckBox = new QCheckBox(optionsWidget);
        caseSensitiveCheckBox->setObjectName(QStringLiteral("caseSensitiveCheckBox"));

        horizontalLayout_2->addWidget(caseSensitiveCheckBox);

        searchCurrentRadioButton = new QRadioButton(optionsWidget);
        searchCurrentRadioButton->setObjectName(QStringLiteral("searchCurrentRadioButton"));
        searchCurrentRadioButton->setChecked(false);

        horizontalLayout_2->addWidget(searchCurrentRadioButton);

        searchRootRadioButton = new QRadioButton(optionsWidget);
        searchRootRadioButton->setObjectName(QStringLiteral("searchRootRadioButton"));
        searchRootRadioButton->setChecked(true);

        horizontalLayout_2->addWidget(searchRootRadioButton);

        horizontalSpacer = new QSpacerItem(255, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addWidget(optionsWidget, 1, 1, 1, 1);

        QWidget::setTabOrder(closeSearchButton, searchEdit);
        QWidget::setTabOrder(searchEdit, caseSensitiveCheckBox);
        QWidget::setTabOrder(caseSensitiveCheckBox, searchCurrentRadioButton);
        QWidget::setTabOrder(searchCurrentRadioButton, searchRootRadioButton);

        retranslateUi(SearchWidget);

        QMetaObject::connectSlotsByName(SearchWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchWidget)
    {
        label->setText(QApplication::translate("SearchWidget", "Find:", Q_NULLPTR));
        caseSensitiveCheckBox->setText(QApplication::translate("SearchWidget", "Case sensitive", Q_NULLPTR));
        searchCurrentRadioButton->setText(QApplication::translate("SearchWidget", "Current group", Q_NULLPTR));
        searchRootRadioButton->setText(QApplication::translate("SearchWidget", "Root group", Q_NULLPTR));
        Q_UNUSED(SearchWidget);
    } // retranslateUi

};

namespace Ui {
    class SearchWidget: public Ui_SearchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWIDGET_H
