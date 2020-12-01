/********************************************************************************
** Form generated from reading UI file 'DialogCreateMaterial.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCREATEMATERIAL_H
#define UI_DIALOGCREATEMATERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogCreateMaterial
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *nameLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *controlLayout;
    QLineEdit *materialName;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogCreateMaterial)
    {
        if (DialogCreateMaterial->objectName().isEmpty())
            DialogCreateMaterial->setObjectName(QString::fromUtf8("DialogCreateMaterial"));
        DialogCreateMaterial->resize(317, 112);
        verticalLayout = new QVBoxLayout(DialogCreateMaterial);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nameLayout = new QVBoxLayout();
        nameLayout->setObjectName(QString::fromUtf8("nameLayout"));
        label = new QLabel(DialogCreateMaterial);
        label->setObjectName(QString::fromUtf8("label"));

        nameLayout->addWidget(label);

        label_2 = new QLabel(DialogCreateMaterial);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        nameLayout->addWidget(label_2);


        gridLayout->addLayout(nameLayout, 0, 0, 1, 1);

        controlLayout = new QVBoxLayout();
        controlLayout->setObjectName(QString::fromUtf8("controlLayout"));
        materialName = new QLineEdit(DialogCreateMaterial);
        materialName->setObjectName(QString::fromUtf8("materialName"));

        controlLayout->addWidget(materialName);

        comboBox = new QComboBox(DialogCreateMaterial);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        controlLayout->addWidget(comboBox);


        gridLayout->addLayout(controlLayout, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(DialogCreateMaterial);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(DialogCreateMaterial);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogCreateMaterial, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogCreateMaterial, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogCreateMaterial);
    } // setupUi

    void retranslateUi(QDialog *DialogCreateMaterial)
    {
        DialogCreateMaterial->setWindowTitle(QCoreApplication::translate("DialogCreateMaterial", "Create Material", nullptr));
        label->setText(QCoreApplication::translate("DialogCreateMaterial", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("DialogCreateMaterial", "Type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogCreateMaterial: public Ui_DialogCreateMaterial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCREATEMATERIAL_H
