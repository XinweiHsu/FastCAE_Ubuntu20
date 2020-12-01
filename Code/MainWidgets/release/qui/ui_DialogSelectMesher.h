/********************************************************************************
** Form generated from reading UI file 'DialogSelectMesher.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSELECTMESHER_H
#define UI_DIALOGSELECTMESHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_MesherDialog
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *mesherBox;

    void setupUi(QDialog *MesherDialog)
    {
        if (MesherDialog->objectName().isEmpty())
            MesherDialog->setObjectName(QString::fromUtf8("MesherDialog"));
        MesherDialog->resize(207, 101);
        gridLayout_2 = new QGridLayout(MesherDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonBox = new QDialogButtonBox(MesherDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);

        groupBox = new QGroupBox(MesherDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mesherBox = new QComboBox(groupBox);
        mesherBox->setObjectName(QString::fromUtf8("mesherBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mesherBox->sizePolicy().hasHeightForWidth());
        mesherBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, mesherBox);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(MesherDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MesherDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MesherDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MesherDialog);
    } // setupUi

    void retranslateUi(QDialog *MesherDialog)
    {
        MesherDialog->setWindowTitle(QCoreApplication::translate("MesherDialog", "MesherSelectDialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MesherDialog", "Mesher", nullptr));
        label->setText(QCoreApplication::translate("MesherDialog", "Mesher\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MesherDialog: public Ui_MesherDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSELECTMESHER_H
