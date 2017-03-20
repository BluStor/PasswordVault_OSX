/********************************************************************************
** Form generated from reading UI file 'EditWidgetIcons.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITWIDGETICONS_H
#define UI_EDITWIDGETICONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditWidgetIcons
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *defaultIconsRadio;
    QListView *defaultIconsView;
    QRadioButton *customIconsRadio;
    QListView *customIconsView;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *deleteButton;

    void setupUi(QWidget *EditWidgetIcons)
    {
        if (EditWidgetIcons->objectName().isEmpty())
            EditWidgetIcons->setObjectName(QStringLiteral("EditWidgetIcons"));
        EditWidgetIcons->resize(400, 300);
        verticalLayout = new QVBoxLayout(EditWidgetIcons);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        defaultIconsRadio = new QRadioButton(EditWidgetIcons);
        defaultIconsRadio->setObjectName(QStringLiteral("defaultIconsRadio"));

        verticalLayout->addWidget(defaultIconsRadio);

        defaultIconsView = new QListView(EditWidgetIcons);
        defaultIconsView->setObjectName(QStringLiteral("defaultIconsView"));
        defaultIconsView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        defaultIconsView->setMovement(QListView::Static);
        defaultIconsView->setFlow(QListView::LeftToRight);
        defaultIconsView->setProperty("isWrapping", QVariant(true));
        defaultIconsView->setResizeMode(QListView::Adjust);
        defaultIconsView->setSpacing(8);
        defaultIconsView->setViewMode(QListView::IconMode);

        verticalLayout->addWidget(defaultIconsView);

        customIconsRadio = new QRadioButton(EditWidgetIcons);
        customIconsRadio->setObjectName(QStringLiteral("customIconsRadio"));

        verticalLayout->addWidget(customIconsRadio);

        customIconsView = new QListView(EditWidgetIcons);
        customIconsView->setObjectName(QStringLiteral("customIconsView"));
        customIconsView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        customIconsView->setMovement(QListView::Static);
        customIconsView->setFlow(QListView::LeftToRight);
        customIconsView->setProperty("isWrapping", QVariant(true));
        customIconsView->setResizeMode(QListView::Adjust);
        customIconsView->setSpacing(8);
        customIconsView->setViewMode(QListView::IconMode);

        verticalLayout->addWidget(customIconsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addButton = new QPushButton(EditWidgetIcons);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout->addWidget(addButton);

        deleteButton = new QPushButton(EditWidgetIcons);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        horizontalLayout->addWidget(deleteButton);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(defaultIconsRadio, defaultIconsView);
        QWidget::setTabOrder(defaultIconsView, customIconsRadio);
        QWidget::setTabOrder(customIconsRadio, customIconsView);
        QWidget::setTabOrder(customIconsView, addButton);
        QWidget::setTabOrder(addButton, deleteButton);

        retranslateUi(EditWidgetIcons);

        QMetaObject::connectSlotsByName(EditWidgetIcons);
    } // setupUi

    void retranslateUi(QWidget *EditWidgetIcons)
    {
        defaultIconsRadio->setText(QApplication::translate("EditWidgetIcons", "Use default icon", Q_NULLPTR));
        customIconsRadio->setText(QApplication::translate("EditWidgetIcons", "Use custom icon", Q_NULLPTR));
        addButton->setText(QApplication::translate("EditWidgetIcons", "Add custom icon", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("EditWidgetIcons", "Delete custom icon", Q_NULLPTR));
        Q_UNUSED(EditWidgetIcons);
    } // retranslateUi

};

namespace Ui {
    class EditWidgetIcons: public Ui_EditWidgetIcons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWIDGETICONS_H
