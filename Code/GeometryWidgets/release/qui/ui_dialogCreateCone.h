/********************************************************************************
** Form generated from reading UI file 'dialogCreateCone.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCREATECONE_H
#define UI_DIALOGCREATECONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateCone
{
public:
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *namelineEdit;
    QGroupBox *CornergroupBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBoxR2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBoxL;
    QDoubleSpinBox *doubleSpinBoxR;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonX;
    QRadioButton *radioButtonY;
    QRadioButton *radioButtonZ;
    QRadioButton *radioButtonUser;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *doubleSpinBoxX;
    QDoubleSpinBox *doubleSpinBoxY;
    QDoubleSpinBox *doubleSpinBoxZ;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateCone)
    {
        if (CreateCone->objectName().isEmpty())
            CreateCone->setObjectName(QString::fromUtf8("CreateCone"));
        CreateCone->resize(400, 307);
        gridLayout_4 = new QGridLayout(CreateCone);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(CreateCone);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        namelineEdit = new QLineEdit(CreateCone);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));

        horizontalLayout->addWidget(namelineEdit);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);

        CornergroupBox = new QGroupBox(CreateCone);
        CornergroupBox->setObjectName(QString::fromUtf8("CornergroupBox"));
        gridLayout_2 = new QGridLayout(CornergroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_4->addWidget(CornergroupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(CreateCone);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        doubleSpinBoxR2 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxR2->setObjectName(QString::fromUtf8("doubleSpinBoxR2"));
        doubleSpinBoxR2->setMaximum(100000000000000004384584304507619735463404765184.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBoxR2);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        doubleSpinBoxL = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxL->setObjectName(QString::fromUtf8("doubleSpinBoxL"));
        doubleSpinBoxL->setMaximum(10000000000.000000000000000);
        doubleSpinBoxL->setValue(10.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, doubleSpinBoxL);

        doubleSpinBoxR = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxR->setObjectName(QString::fromUtf8("doubleSpinBoxR"));
        doubleSpinBoxR->setMaximum(9999999999999999932209486743616279764617084419440640.000000000000000);
        doubleSpinBoxR->setValue(5.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, doubleSpinBoxR);


        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox = new QGroupBox(CreateCone);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButtonX = new QRadioButton(groupBox);
        radioButtonX->setObjectName(QString::fromUtf8("radioButtonX"));

        horizontalLayout_4->addWidget(radioButtonX);

        radioButtonY = new QRadioButton(groupBox);
        radioButtonY->setObjectName(QString::fromUtf8("radioButtonY"));

        horizontalLayout_4->addWidget(radioButtonY);

        radioButtonZ = new QRadioButton(groupBox);
        radioButtonZ->setObjectName(QString::fromUtf8("radioButtonZ"));
        radioButtonZ->setChecked(true);

        horizontalLayout_4->addWidget(radioButtonZ);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        radioButtonUser = new QRadioButton(groupBox);
        radioButtonUser->setObjectName(QString::fromUtf8("radioButtonUser"));

        gridLayout_3->addWidget(radioButtonUser, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        doubleSpinBoxX = new QDoubleSpinBox(groupBox);
        doubleSpinBoxX->setObjectName(QString::fromUtf8("doubleSpinBoxX"));
        doubleSpinBoxX->setMinimum(-1000.000000000000000);
        doubleSpinBoxX->setMaximum(1000.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxX);

        doubleSpinBoxY = new QDoubleSpinBox(groupBox);
        doubleSpinBoxY->setObjectName(QString::fromUtf8("doubleSpinBoxY"));
        doubleSpinBoxY->setMinimum(-1000.000000000000000);
        doubleSpinBoxY->setMaximum(1000.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxY);

        doubleSpinBoxZ = new QDoubleSpinBox(groupBox);
        doubleSpinBoxZ->setObjectName(QString::fromUtf8("doubleSpinBoxZ"));
        doubleSpinBoxZ->setMinimum(-1000.000000000000000);
        doubleSpinBoxZ->setMaximum(1000.000000000000000);
        doubleSpinBoxZ->setValue(1.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxZ);


        gridLayout_3->addLayout(horizontalLayout_5, 2, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(CreateCone);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 4, 0, 1, 1);


        retranslateUi(CreateCone);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateCone, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateCone, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateCone);
    } // setupUi

    void retranslateUi(QDialog *CreateCone)
    {
        CreateCone->setWindowTitle(QCoreApplication::translate("CreateCone", "Create Cone", nullptr));
        label->setText(QCoreApplication::translate("CreateCone", "Name:", nullptr));
        CornergroupBox->setTitle(QCoreApplication::translate("CreateCone", "Location", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("CreateCone", "Geometry", nullptr));
        label_3->setText(QCoreApplication::translate("CreateCone", "Radius 1:", nullptr));
        label_4->setText(QCoreApplication::translate("CreateCone", "Radius 2:", nullptr));
        doubleSpinBoxR2->setSuffix(QCoreApplication::translate("CreateCone", "mm", nullptr));
        label_2->setText(QCoreApplication::translate("CreateCone", "Length:", nullptr));
        doubleSpinBoxL->setSuffix(QCoreApplication::translate("CreateCone", "mm", nullptr));
        doubleSpinBoxR->setSuffix(QCoreApplication::translate("CreateCone", "mm", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CreateCone", "Axis", nullptr));
        radioButtonX->setText(QCoreApplication::translate("CreateCone", "X axis", nullptr));
        radioButtonY->setText(QCoreApplication::translate("CreateCone", "Y axis", nullptr));
        radioButtonZ->setText(QCoreApplication::translate("CreateCone", "Z axis", nullptr));
        radioButtonUser->setText(QCoreApplication::translate("CreateCone", "User define", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateCone: public Ui_CreateCone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCREATECONE_H