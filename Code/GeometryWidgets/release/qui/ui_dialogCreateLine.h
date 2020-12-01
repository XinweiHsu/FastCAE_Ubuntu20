/********************************************************************************
** Form generated from reading UI file 'dialogCreateLine.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCREATELINE_H
#define UI_DIALOGCREATELINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateLineDialog
{
public:
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *namelineEdit;
    QGroupBox *CornergroupBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBoxOption;
    QTabWidget *tabWidget;
    QWidget *pointTab;
    QGridLayout *gridLayout_5;
    QVBoxLayout *ptlayout;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditLength;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *doubleSpinBoxX;
    QDoubleSpinBox *doubleSpinBoxY;
    QDoubleSpinBox *doubleSpinBoxZ;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonX;
    QRadioButton *radioButtonY;
    QRadioButton *radioButtonZ;
    QRadioButton *radioButtonUser;
    QCheckBox *checkBoxReverse;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateLineDialog)
    {
        if (CreateLineDialog->objectName().isEmpty())
            CreateLineDialog->setObjectName(QString::fromUtf8("CreateLineDialog"));
        CreateLineDialog->resize(400, 358);
        gridLayout_6 = new QGridLayout(CreateLineDialog);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(CreateLineDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        namelineEdit = new QLineEdit(CreateLineDialog);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));

        horizontalLayout->addWidget(namelineEdit);


        gridLayout_6->addLayout(horizontalLayout, 0, 0, 1, 1);

        CornergroupBox = new QGroupBox(CreateLineDialog);
        CornergroupBox->setObjectName(QString::fromUtf8("CornergroupBox"));
        gridLayout_2 = new QGridLayout(CornergroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_6->addWidget(CornergroupBox, 1, 0, 1, 1);

        groupBox = new QGroupBox(CreateLineDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBoxOption = new QComboBox(groupBox);
        comboBoxOption->addItem(QString());
        comboBoxOption->addItem(QString());
        comboBoxOption->setObjectName(QString::fromUtf8("comboBoxOption"));

        horizontalLayout_2->addWidget(comboBoxOption);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        pointTab = new QWidget();
        pointTab->setObjectName(QString::fromUtf8("pointTab"));
        gridLayout_5 = new QGridLayout(pointTab);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, -1, 0, -1);
        ptlayout = new QVBoxLayout();
        ptlayout->setSpacing(6);
        ptlayout->setObjectName(QString::fromUtf8("ptlayout"));

        gridLayout_5->addLayout(ptlayout, 0, 0, 1, 1);

        tabWidget->addTab(pointTab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditLength = new QLineEdit(tab_2);
        lineEditLength->setObjectName(QString::fromUtf8("lineEditLength"));

        horizontalLayout_3->addWidget(lineEditLength);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        doubleSpinBoxX = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxX->setObjectName(QString::fromUtf8("doubleSpinBoxX"));
        doubleSpinBoxX->setMinimum(-1000.000000000000000);
        doubleSpinBoxX->setMaximum(1000.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxX);

        doubleSpinBoxY = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxY->setObjectName(QString::fromUtf8("doubleSpinBoxY"));
        doubleSpinBoxY->setMinimum(-1000.000000000000000);
        doubleSpinBoxY->setMaximum(1000.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxY);

        doubleSpinBoxZ = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxZ->setObjectName(QString::fromUtf8("doubleSpinBoxZ"));
        doubleSpinBoxZ->setMinimum(-1000.000000000000000);
        doubleSpinBoxZ->setMaximum(1000.000000000000000);
        doubleSpinBoxZ->setValue(1.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxZ);


        gridLayout_3->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButtonX = new QRadioButton(groupBox_2);
        radioButtonX->setObjectName(QString::fromUtf8("radioButtonX"));

        horizontalLayout_4->addWidget(radioButtonX);

        radioButtonY = new QRadioButton(groupBox_2);
        radioButtonY->setObjectName(QString::fromUtf8("radioButtonY"));

        horizontalLayout_4->addWidget(radioButtonY);

        radioButtonZ = new QRadioButton(groupBox_2);
        radioButtonZ->setObjectName(QString::fromUtf8("radioButtonZ"));
        radioButtonZ->setChecked(true);

        horizontalLayout_4->addWidget(radioButtonZ);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        radioButtonUser = new QRadioButton(groupBox_2);
        radioButtonUser->setObjectName(QString::fromUtf8("radioButtonUser"));

        gridLayout_3->addWidget(radioButtonUser, 1, 0, 1, 1);

        checkBoxReverse = new QCheckBox(groupBox_2);
        checkBoxReverse->setObjectName(QString::fromUtf8("checkBoxReverse"));

        gridLayout_3->addWidget(checkBoxReverse, 3, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);


        gridLayout_6->addWidget(groupBox, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(CreateLineDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_6->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(CreateLineDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateLineDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateLineDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CreateLineDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateLineDialog)
    {
        CreateLineDialog->setWindowTitle(QCoreApplication::translate("CreateLineDialog", "Create Edge", nullptr));
        label->setText(QCoreApplication::translate("CreateLineDialog", "Name:", nullptr));
        CornergroupBox->setTitle(QCoreApplication::translate("CreateLineDialog", "Start Point", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CreateLineDialog", "End Point", nullptr));
        label_2->setText(QCoreApplication::translate("CreateLineDialog", "Option\357\274\232", nullptr));
        comboBoxOption->setItemText(0, QCoreApplication::translate("CreateLineDialog", "Point", nullptr));
        comboBoxOption->setItemText(1, QCoreApplication::translate("CreateLineDialog", "Direction", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(pointTab), QCoreApplication::translate("CreateLineDialog", "Tab 1", nullptr));
        label_3->setText(QCoreApplication::translate("CreateLineDialog", "Length:", nullptr));
        lineEditLength->setText(QCoreApplication::translate("CreateLineDialog", "10.00", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("CreateLineDialog", "Direction", nullptr));
        radioButtonX->setText(QCoreApplication::translate("CreateLineDialog", "X axis", nullptr));
        radioButtonY->setText(QCoreApplication::translate("CreateLineDialog", "Y axis", nullptr));
        radioButtonZ->setText(QCoreApplication::translate("CreateLineDialog", "Z axis", nullptr));
        radioButtonUser->setText(QCoreApplication::translate("CreateLineDialog", "User define", nullptr));
        checkBoxReverse->setText(QCoreApplication::translate("CreateLineDialog", "Reverse", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("CreateLineDialog", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateLineDialog: public Ui_CreateLineDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCREATELINE_H
