/********************************************************************************
** Form generated from reading UI file 'dialogCreateSphere.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCREATESPHERE_H
#define UI_DIALOGCREATESPHERE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateSphere
{
public:
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *namelineEdit;
    QGroupBox *CornergroupBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBoxR;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateSphere)
    {
        if (CreateSphere->objectName().isEmpty())
            CreateSphere->setObjectName(QString::fromUtf8("CreateSphere"));
        CreateSphere->resize(368, 184);
        gridLayout_3 = new QGridLayout(CreateSphere);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(CreateSphere);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        namelineEdit = new QLineEdit(CreateSphere);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));

        horizontalLayout->addWidget(namelineEdit);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        CornergroupBox = new QGroupBox(CreateSphere);
        CornergroupBox->setObjectName(QString::fromUtf8("CornergroupBox"));
        gridLayout_2 = new QGridLayout(CornergroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(CornergroupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(CreateSphere);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        doubleSpinBoxR = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxR->setObjectName(QString::fromUtf8("doubleSpinBoxR"));
        doubleSpinBoxR->setMaximum(100000000000.000000000000000);
        doubleSpinBoxR->setValue(5.000000000000000);

        gridLayout->addWidget(doubleSpinBoxR, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(CreateSphere);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(CreateSphere);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateSphere, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateSphere, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateSphere);
    } // setupUi

    void retranslateUi(QDialog *CreateSphere)
    {
        CreateSphere->setWindowTitle(QCoreApplication::translate("CreateSphere", "Create Sphere", nullptr));
        label->setText(QCoreApplication::translate("CreateSphere", "Name:", nullptr));
        CornergroupBox->setTitle(QCoreApplication::translate("CreateSphere", "Location", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("CreateSphere", "Geometry", nullptr));
        label_3->setText(QCoreApplication::translate("CreateSphere", "Radius:", nullptr));
        doubleSpinBoxR->setSuffix(QCoreApplication::translate("CreateSphere", "mm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateSphere: public Ui_CreateSphere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCREATESPHERE_H
