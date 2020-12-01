/********************************************************************************
** Form generated from reading UI file 'PluginManageDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINMANAGEDIALOG_H
#define UI_PLUGINMANAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PluginManageDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *availableList;
    QVBoxLayout *verticalLayout;
    QPushButton *addButton;
    QPushButton *removeButton;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QListWidget *selectedList;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *customLayout;

    void setupUi(QDialog *PluginManageDialog)
    {
        if (PluginManageDialog->objectName().isEmpty())
            PluginManageDialog->setObjectName(QString::fromUtf8("PluginManageDialog"));
        PluginManageDialog->resize(376, 300);
        gridLayout = new QGridLayout(PluginManageDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(PluginManageDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        availableList = new QListWidget(PluginManageDialog);
        availableList->setObjectName(QString::fromUtf8("availableList"));

        verticalLayout_2->addWidget(availableList);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addButton = new QPushButton(PluginManageDialog);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout->addWidget(addButton);

        removeButton = new QPushButton(PluginManageDialog);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        verticalLayout->addWidget(removeButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(PluginManageDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        selectedList = new QListWidget(PluginManageDialog);
        selectedList->setObjectName(QString::fromUtf8("selectedList"));

        verticalLayout_3->addWidget(selectedList);


        horizontalLayout->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(PluginManageDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        customLayout = new QHBoxLayout();
        customLayout->setSpacing(0);
        customLayout->setObjectName(QString::fromUtf8("customLayout"));

        gridLayout->addLayout(customLayout, 1, 0, 1, 1);


        retranslateUi(PluginManageDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PluginManageDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PluginManageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PluginManageDialog);
    } // setupUi

    void retranslateUi(QDialog *PluginManageDialog)
    {
        PluginManageDialog->setWindowTitle(QCoreApplication::translate("PluginManageDialog", "Plugin Manager", nullptr));
        label->setText(QCoreApplication::translate("PluginManageDialog", "Available:", nullptr));
        addButton->setText(QCoreApplication::translate("PluginManageDialog", ">>", nullptr));
        removeButton->setText(QCoreApplication::translate("PluginManageDialog", "<<", nullptr));
        label_2->setText(QCoreApplication::translate("PluginManageDialog", "Installed:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginManageDialog: public Ui_PluginManageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINMANAGEDIALOG_H
