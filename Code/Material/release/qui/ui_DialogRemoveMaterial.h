/********************************************************************************
** Form generated from reading UI file 'DialogRemoveMaterial.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGREMOVEMATERIAL_H
#define UI_DIALOGREMOVEMATERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_RemoveMaterialDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *selectAllCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *clearSelectCheckBox;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *removePushButton;
    QPushButton *cancelPushButton;

    void setupUi(QDialog *RemoveMaterialDialog)
    {
        if (RemoveMaterialDialog->objectName().isEmpty())
            RemoveMaterialDialog->setObjectName(QString::fromUtf8("RemoveMaterialDialog"));
        RemoveMaterialDialog->resize(260, 376);
        gridLayout = new QGridLayout(RemoveMaterialDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        selectAllCheckBox = new QCheckBox(RemoveMaterialDialog);
        selectAllCheckBox->setObjectName(QString::fromUtf8("selectAllCheckBox"));

        horizontalLayout->addWidget(selectAllCheckBox);

        horizontalSpacer_2 = new QSpacerItem(27, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        clearSelectCheckBox = new QCheckBox(RemoveMaterialDialog);
        clearSelectCheckBox->setObjectName(QString::fromUtf8("clearSelectCheckBox"));

        horizontalLayout->addWidget(clearSelectCheckBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        listWidget = new QListWidget(RemoveMaterialDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        removePushButton = new QPushButton(RemoveMaterialDialog);
        removePushButton->setObjectName(QString::fromUtf8("removePushButton"));

        horizontalLayout_2->addWidget(removePushButton);

        cancelPushButton = new QPushButton(RemoveMaterialDialog);
        cancelPushButton->setObjectName(QString::fromUtf8("cancelPushButton"));

        horizontalLayout_2->addWidget(cancelPushButton);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        retranslateUi(RemoveMaterialDialog);

        QMetaObject::connectSlotsByName(RemoveMaterialDialog);
    } // setupUi

    void retranslateUi(QDialog *RemoveMaterialDialog)
    {
        RemoveMaterialDialog->setWindowTitle(QCoreApplication::translate("RemoveMaterialDialog", "Remove", nullptr));
        selectAllCheckBox->setText(QCoreApplication::translate("RemoveMaterialDialog", "Select All", nullptr));
        clearSelectCheckBox->setText(QCoreApplication::translate("RemoveMaterialDialog", "Clear Select", nullptr));
        removePushButton->setText(QCoreApplication::translate("RemoveMaterialDialog", "Remove", nullptr));
        cancelPushButton->setText(QCoreApplication::translate("RemoveMaterialDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveMaterialDialog: public Ui_RemoveMaterialDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGREMOVEMATERIAL_H
