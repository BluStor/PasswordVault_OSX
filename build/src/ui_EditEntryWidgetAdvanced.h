/********************************************************************************
** Form generated from reading UI file 'EditEntryWidgetAdvanced.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITENTRYWIDGETADVANCED_H
#define UI_EDITENTRYWIDGETADVANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gui/entry/EditEntryWidget_p.h"

QT_BEGIN_NAMESPACE

class Ui_EditEntryWidgetAdvanced
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *attributesBox;
    QHBoxLayout *horizontalLayout;
    AttributesListView *attributesView;
    QPlainTextEdit *attributesEdit;
    QVBoxLayout *verticalLayout_2;
    QPushButton *addAttributeButton;
    QPushButton *editAttributeButton;
    QPushButton *removeAttributeButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *attachmentsBox;
    QHBoxLayout *horizontalLayout_2;
    QListView *attachmentsView;
    QVBoxLayout *verticalLayout_3;
    QPushButton *addAttachmentButton;
    QPushButton *removeAttachmentButton;
    QPushButton *openAttachmentButton;
    QPushButton *saveAttachmentButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *EditEntryWidgetAdvanced)
    {
        if (EditEntryWidgetAdvanced->objectName().isEmpty())
            EditEntryWidgetAdvanced->setObjectName(QStringLiteral("EditEntryWidgetAdvanced"));
        EditEntryWidgetAdvanced->resize(400, 315);
        verticalLayout = new QVBoxLayout(EditEntryWidgetAdvanced);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        attributesBox = new QGroupBox(EditEntryWidgetAdvanced);
        attributesBox->setObjectName(QStringLiteral("attributesBox"));
        horizontalLayout = new QHBoxLayout(attributesBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        attributesView = new AttributesListView(attributesBox);
        attributesView->setObjectName(QStringLiteral("attributesView"));

        horizontalLayout->addWidget(attributesView);

        attributesEdit = new QPlainTextEdit(attributesBox);
        attributesEdit->setObjectName(QStringLiteral("attributesEdit"));
        attributesEdit->setEnabled(false);

        horizontalLayout->addWidget(attributesEdit);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        addAttributeButton = new QPushButton(attributesBox);
        addAttributeButton->setObjectName(QStringLiteral("addAttributeButton"));

        verticalLayout_2->addWidget(addAttributeButton);

        editAttributeButton = new QPushButton(attributesBox);
        editAttributeButton->setObjectName(QStringLiteral("editAttributeButton"));
        editAttributeButton->setEnabled(false);

        verticalLayout_2->addWidget(editAttributeButton);

        removeAttributeButton = new QPushButton(attributesBox);
        removeAttributeButton->setObjectName(QStringLiteral("removeAttributeButton"));
        removeAttributeButton->setEnabled(false);

        verticalLayout_2->addWidget(removeAttributeButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addWidget(attributesBox);

        attachmentsBox = new QGroupBox(EditEntryWidgetAdvanced);
        attachmentsBox->setObjectName(QStringLiteral("attachmentsBox"));
        horizontalLayout_2 = new QHBoxLayout(attachmentsBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        attachmentsView = new QListView(attachmentsBox);
        attachmentsView->setObjectName(QStringLiteral("attachmentsView"));
        attachmentsView->setFlow(QListView::LeftToRight);
        attachmentsView->setProperty("isWrapping", QVariant(true));

        horizontalLayout_2->addWidget(attachmentsView);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        addAttachmentButton = new QPushButton(attachmentsBox);
        addAttachmentButton->setObjectName(QStringLiteral("addAttachmentButton"));

        verticalLayout_3->addWidget(addAttachmentButton);

        removeAttachmentButton = new QPushButton(attachmentsBox);
        removeAttachmentButton->setObjectName(QStringLiteral("removeAttachmentButton"));
        removeAttachmentButton->setEnabled(false);

        verticalLayout_3->addWidget(removeAttachmentButton);

        openAttachmentButton = new QPushButton(attachmentsBox);
        openAttachmentButton->setObjectName(QStringLiteral("openAttachmentButton"));
        openAttachmentButton->setEnabled(false);

        verticalLayout_3->addWidget(openAttachmentButton);

        saveAttachmentButton = new QPushButton(attachmentsBox);
        saveAttachmentButton->setObjectName(QStringLiteral("saveAttachmentButton"));
        saveAttachmentButton->setEnabled(false);

        verticalLayout_3->addWidget(saveAttachmentButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addWidget(attachmentsBox);

        QWidget::setTabOrder(attributesView, attributesEdit);
        QWidget::setTabOrder(attributesEdit, addAttributeButton);
        QWidget::setTabOrder(addAttributeButton, editAttributeButton);
        QWidget::setTabOrder(editAttributeButton, removeAttributeButton);
        QWidget::setTabOrder(removeAttributeButton, attachmentsView);
        QWidget::setTabOrder(attachmentsView, addAttachmentButton);
        QWidget::setTabOrder(addAttachmentButton, removeAttachmentButton);
        QWidget::setTabOrder(removeAttachmentButton, saveAttachmentButton);

        retranslateUi(EditEntryWidgetAdvanced);

        QMetaObject::connectSlotsByName(EditEntryWidgetAdvanced);
    } // setupUi

    void retranslateUi(QWidget *EditEntryWidgetAdvanced)
    {
        attributesBox->setTitle(QApplication::translate("EditEntryWidgetAdvanced", "Additional attributes", Q_NULLPTR));
        addAttributeButton->setText(QApplication::translate("EditEntryWidgetAdvanced", "Add", Q_NULLPTR));
        editAttributeButton->setText(QApplication::translate("EditEntryWidgetAdvanced", "Edit", Q_NULLPTR));
        removeAttributeButton->setText(QApplication::translate("EditEntryWidgetAdvanced", "Remove", Q_NULLPTR));
        attachmentsBox->setTitle(QApplication::translate("EditEntryWidgetAdvanced", "Attachments", Q_NULLPTR));
        addAttachmentButton->setText(QApplication::translate("EditEntryWidgetAdvanced", "Add", Q_NULLPTR));
        removeAttachmentButton->setText(QApplication::translate("EditEntryWidgetAdvanced", "Remove", Q_NULLPTR));
        openAttachmentButton->setText(QApplication::translate("EditEntryWidgetAdvanced", "Open", Q_NULLPTR));
        saveAttachmentButton->setText(QApplication::translate("EditEntryWidgetAdvanced", "Save", Q_NULLPTR));
        Q_UNUSED(EditEntryWidgetAdvanced);
    } // retranslateUi

};

namespace Ui {
    class EditEntryWidgetAdvanced: public Ui_EditEntryWidgetAdvanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITENTRYWIDGETADVANCED_H
