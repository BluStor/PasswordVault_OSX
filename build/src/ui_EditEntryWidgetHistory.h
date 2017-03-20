/********************************************************************************
** Form generated from reading UI file 'EditEntryWidgetHistory.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITENTRYWIDGETHISTORY_H
#define UI_EDITENTRYWIDGETHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditEntryWidgetHistory
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *historyView;
    QHBoxLayout *horizontalLayout;
    QPushButton *showButton;
    QPushButton *restoreButton;
    QPushButton *deleteButton;
    QPushButton *deleteAllButton;

    void setupUi(QWidget *EditEntryWidgetHistory)
    {
        if (EditEntryWidgetHistory->objectName().isEmpty())
            EditEntryWidgetHistory->setObjectName(QStringLiteral("EditEntryWidgetHistory"));
        EditEntryWidgetHistory->resize(400, 300);
        verticalLayout = new QVBoxLayout(EditEntryWidgetHistory);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        historyView = new QTreeView(EditEntryWidgetHistory);
        historyView->setObjectName(QStringLiteral("historyView"));
        historyView->setSortingEnabled(true);

        verticalLayout->addWidget(historyView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        showButton = new QPushButton(EditEntryWidgetHistory);
        showButton->setObjectName(QStringLiteral("showButton"));
        showButton->setEnabled(false);

        horizontalLayout->addWidget(showButton);

        restoreButton = new QPushButton(EditEntryWidgetHistory);
        restoreButton->setObjectName(QStringLiteral("restoreButton"));
        restoreButton->setEnabled(false);

        horizontalLayout->addWidget(restoreButton);

        deleteButton = new QPushButton(EditEntryWidgetHistory);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setEnabled(false);

        horizontalLayout->addWidget(deleteButton);

        deleteAllButton = new QPushButton(EditEntryWidgetHistory);
        deleteAllButton->setObjectName(QStringLiteral("deleteAllButton"));
        deleteAllButton->setEnabled(false);

        horizontalLayout->addWidget(deleteAllButton);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(historyView, showButton);
        QWidget::setTabOrder(showButton, restoreButton);
        QWidget::setTabOrder(restoreButton, deleteButton);
        QWidget::setTabOrder(deleteButton, deleteAllButton);

        retranslateUi(EditEntryWidgetHistory);

        QMetaObject::connectSlotsByName(EditEntryWidgetHistory);
    } // setupUi

    void retranslateUi(QWidget *EditEntryWidgetHistory)
    {
        showButton->setText(QApplication::translate("EditEntryWidgetHistory", "Show", Q_NULLPTR));
        restoreButton->setText(QApplication::translate("EditEntryWidgetHistory", "Restore", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("EditEntryWidgetHistory", "Delete", Q_NULLPTR));
        deleteAllButton->setText(QApplication::translate("EditEntryWidgetHistory", "Delete all", Q_NULLPTR));
        Q_UNUSED(EditEntryWidgetHistory);
    } // retranslateUi

};

namespace Ui {
    class EditEntryWidgetHistory: public Ui_EditEntryWidgetHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITENTRYWIDGETHISTORY_H
