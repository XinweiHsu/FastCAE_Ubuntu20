/********************************************************************************
** Form generated from reading UI file 'dialogCreateBox.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCREATEBOX_H
#define UI_DIALOGCREATEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateBox
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *namelineEdit;
    QGroupBox *CornergroupBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditW;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditL;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEditH;
    QLabel *label_6;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateBox)
    {
        if (CreateBox->objectName().isEmpty())
            CreateBox->setObjectName(QString::fromUtf8("CreateBox"));
        CreateBox->resize(400, 282);
        gridLayout = new QGridLayout(CreateBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(CreateBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        namelineEdit = new QLineEdit(CreateBox);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));

        horizontalLayout->addWidget(namelineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        CornergroupBox = new QGroupBox(CreateBox);
        CornergroupBox->setObjectName(QString::fromUtf8("CornergroupBox"));
        gridLayout_2 = new QGridLayout(CornergroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout->addWidget(CornergroupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(CreateBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEditW = new QLineEdit(groupBox_2);
        lineEditW->setObjectName(QString::fromUtf8("lineEditW"));

        horizontalLayout_3->addWidget(lineEditW);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEditL = new QLineEdit(groupBox_2);
        lineEditL->setObjectName(QString::fromUtf8("lineEditL"));

        horizontalLayout_2->addWidget(lineEditL);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEditH = new QLineEdit(groupBox_2);
        lineEditH->setObjectName(QString::fromUtf8("lineEditH"));

        horizontalLayout_4->addWidget(lineEditH);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_4);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);


        gridLayout->addWidget(groupBox_2, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(CreateBox);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(CreateBox);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateBox, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateBox, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateBox);
    } // setupUi

    void retranslateUi(QDialog *CreateBox)
    {
        CreateBox->setWindowTitle(QCoreApplication::translate("CreateBox", "Create Box", nullptr));
        label->setText(QCoreApplication::translate("CreateBox", "Name:", nullptr));
        CornergroupBox->setTitle(QCoreApplication::translate("CreateBox", "Location", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("CreateBox", "Geometry", nullptr));
        label_2->setText(QCoreApplication::translate("CreateBox", "Length:", nullptr));
        label_3->setText(QCoreApplication::translate("CreateBox", "Width:", nullptr));
        lineEditW->setText(QCoreApplication::translate("CreateBox", "10.00", nullptr));
        label_7->setText(QCoreApplication::translate("CreateBox", "mm", nullptr));
        lineEditL->setText(QCoreApplication::translate("CreateBox", "10.00", nullptr));
        label_5->setText(QCoreApplication::translate("CreateBox", "mm", nullptr));
        lineEditH->setText(QCoreApplication::translate("CreateBox", "10.00", nullptr));
        label_6->setText(QCoreApplication::translate("CreateBox", "mm", nullptr));
        label_4->setText(QCoreApplication::translate("CreateBox", "Height:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateBox: public Ui_CreateBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCREATEBOX_H
