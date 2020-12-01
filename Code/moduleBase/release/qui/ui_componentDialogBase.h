/********************************************************************************
** Form generated from reading UI file 'componentDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENTDIALOGBASE_H
#define UI_COMPONENTDIALOGBASE_H

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

class Ui_ComponentDialogBase
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

    void setupUi(QDialog *ComponentDialogBase)
    {
        if (ComponentDialogBase->objectName().isEmpty())
            ComponentDialogBase->setObjectName(QString::fromUtf8("ComponentDialogBase"));
        ComponentDialogBase->resize(376, 300);
        gridLayout = new QGridLayout(ComponentDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(ComponentDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        availableList = new QListWidget(ComponentDialogBase);
        availableList->setObjectName(QString::fromUtf8("availableList"));

        verticalLayout_2->addWidget(availableList);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addButton = new QPushButton(ComponentDialogBase);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout->addWidget(addButton);

        removeButton = new QPushButton(ComponentDialogBase);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        verticalLayout->addWidget(removeButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(ComponentDialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        selectedList = new QListWidget(ComponentDialogBase);
        selectedList->setObjectName(QString::fromUtf8("selectedList"));

        verticalLayout_3->addWidget(selectedList);


        horizontalLayout->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ComponentDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        customLayout = new QHBoxLayout();
        customLayout->setSpacing(0);
        customLayout->setObjectName(QString::fromUtf8("customLayout"));

        gridLayout->addLayout(customLayout, 1, 0, 1, 1);


        retranslateUi(ComponentDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), ComponentDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ComponentDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(ComponentDialogBase);
    } // setupUi

    void retranslateUi(QDialog *ComponentDialogBase)
    {
        ComponentDialogBase->setWindowTitle(QCoreApplication::translate("ComponentDialogBase", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ComponentDialogBase", "Available:", nullptr));
        addButton->setText(QCoreApplication::translate("ComponentDialogBase", ">>", nullptr));
        removeButton->setText(QCoreApplication::translate("ComponentDialogBase", "<<", nullptr));
        label_2->setText(QCoreApplication::translate("ComponentDialogBase", "Selected:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComponentDialogBase: public Ui_ComponentDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENTDIALOGBASE_H
