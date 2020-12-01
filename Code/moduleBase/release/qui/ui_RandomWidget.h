/********************************************************************************
** Form generated from reading UI file 'RandomWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANDOMWIDGET_H
#define UI_RANDOMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_Multi;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radio_Fixed;
    QRadioButton *radio_Normal;
    QRadioButton *radio_Linearity;
    QRadioButton *radio_Gauss;
    QRadioButton *radio_Possion;
    QRadioButton *radio_Exponential;
    QGroupBox *group_randomPara;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Para1;
    QLineEdit *line_Para1;
    QLabel *label_Para2;
    QLineEdit *line_Para2;
    QGroupBox *groupBox_ParaSet;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_Value;
    QLineEdit *line_Value;
    QLabel *label_ParaFrom;
    QLineEdit *line_paraFrom;
    QLabel *label_ParaTo;
    QLineEdit *line_paraTo;
    QLabel *label_ParaNumber;
    QSpinBox *spin_paraNum;
    QPushButton *btn_Random;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *out_OkButton;
    QPushButton *out_CancelButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(566, 506);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        groupBox_Multi = new QGroupBox(Dialog);
        groupBox_Multi->setObjectName(QString::fromUtf8("groupBox_Multi"));
        horizontalLayout = new QHBoxLayout(groupBox_Multi);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radio_Fixed = new QRadioButton(groupBox_Multi);
        radio_Fixed->setObjectName(QString::fromUtf8("radio_Fixed"));

        horizontalLayout->addWidget(radio_Fixed);

        radio_Normal = new QRadioButton(groupBox_Multi);
        radio_Normal->setObjectName(QString::fromUtf8("radio_Normal"));

        horizontalLayout->addWidget(radio_Normal);

        radio_Linearity = new QRadioButton(groupBox_Multi);
        radio_Linearity->setObjectName(QString::fromUtf8("radio_Linearity"));

        horizontalLayout->addWidget(radio_Linearity);

        radio_Gauss = new QRadioButton(groupBox_Multi);
        radio_Gauss->setObjectName(QString::fromUtf8("radio_Gauss"));

        horizontalLayout->addWidget(radio_Gauss);

        radio_Possion = new QRadioButton(groupBox_Multi);
        radio_Possion->setObjectName(QString::fromUtf8("radio_Possion"));

        horizontalLayout->addWidget(radio_Possion);

        radio_Exponential = new QRadioButton(groupBox_Multi);
        radio_Exponential->setObjectName(QString::fromUtf8("radio_Exponential"));

        horizontalLayout->addWidget(radio_Exponential);


        horizontalLayout_5->addWidget(groupBox_Multi);


        verticalLayout->addLayout(horizontalLayout_5);

        group_randomPara = new QGroupBox(Dialog);
        group_randomPara->setObjectName(QString::fromUtf8("group_randomPara"));
        horizontalLayout_4 = new QHBoxLayout(group_randomPara);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_Para1 = new QLabel(group_randomPara);
        label_Para1->setObjectName(QString::fromUtf8("label_Para1"));

        horizontalLayout_4->addWidget(label_Para1);

        line_Para1 = new QLineEdit(group_randomPara);
        line_Para1->setObjectName(QString::fromUtf8("line_Para1"));

        horizontalLayout_4->addWidget(line_Para1);

        label_Para2 = new QLabel(group_randomPara);
        label_Para2->setObjectName(QString::fromUtf8("label_Para2"));

        horizontalLayout_4->addWidget(label_Para2);

        line_Para2 = new QLineEdit(group_randomPara);
        line_Para2->setObjectName(QString::fromUtf8("line_Para2"));

        horizontalLayout_4->addWidget(line_Para2);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);
        horizontalLayout_4->setStretch(2, 1);
        horizontalLayout_4->setStretch(3, 2);

        verticalLayout->addWidget(group_randomPara);

        groupBox_ParaSet = new QGroupBox(Dialog);
        groupBox_ParaSet->setObjectName(QString::fromUtf8("groupBox_ParaSet"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_ParaSet);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_Value = new QLabel(groupBox_ParaSet);
        label_Value->setObjectName(QString::fromUtf8("label_Value"));

        horizontalLayout_2->addWidget(label_Value);

        line_Value = new QLineEdit(groupBox_ParaSet);
        line_Value->setObjectName(QString::fromUtf8("line_Value"));

        horizontalLayout_2->addWidget(line_Value);

        label_ParaFrom = new QLabel(groupBox_ParaSet);
        label_ParaFrom->setObjectName(QString::fromUtf8("label_ParaFrom"));

        horizontalLayout_2->addWidget(label_ParaFrom);

        line_paraFrom = new QLineEdit(groupBox_ParaSet);
        line_paraFrom->setObjectName(QString::fromUtf8("line_paraFrom"));

        horizontalLayout_2->addWidget(line_paraFrom);

        label_ParaTo = new QLabel(groupBox_ParaSet);
        label_ParaTo->setObjectName(QString::fromUtf8("label_ParaTo"));

        horizontalLayout_2->addWidget(label_ParaTo);

        line_paraTo = new QLineEdit(groupBox_ParaSet);
        line_paraTo->setObjectName(QString::fromUtf8("line_paraTo"));

        horizontalLayout_2->addWidget(line_paraTo);

        label_ParaNumber = new QLabel(groupBox_ParaSet);
        label_ParaNumber->setObjectName(QString::fromUtf8("label_ParaNumber"));

        horizontalLayout_2->addWidget(label_ParaNumber);

        spin_paraNum = new QSpinBox(groupBox_ParaSet);
        spin_paraNum->setObjectName(QString::fromUtf8("spin_paraNum"));
        spin_paraNum->setMinimum(1);

        horizontalLayout_2->addWidget(spin_paraNum);

        btn_Random = new QPushButton(groupBox_ParaSet);
        btn_Random->setObjectName(QString::fromUtf8("btn_Random"));

        horizontalLayout_2->addWidget(btn_Random);


        verticalLayout->addWidget(groupBox_ParaSet);

        listWidget = new QListWidget(Dialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setAlternatingRowColors(true);

        verticalLayout->addWidget(listWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        out_OkButton = new QPushButton(Dialog);
        out_OkButton->setObjectName(QString::fromUtf8("out_OkButton"));

        horizontalLayout_3->addWidget(out_OkButton);

        out_CancelButton = new QPushButton(Dialog);
        out_CancelButton->setObjectName(QString::fromUtf8("out_CancelButton"));

        horizontalLayout_3->addWidget(out_CancelButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Dialog);
        QObject::connect(out_OkButton, SIGNAL(clicked()), Dialog, SLOT(accept()));
        QObject::connect(out_CancelButton, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox_Multi->setTitle(QCoreApplication::translate("Dialog", "Value", nullptr));
        radio_Fixed->setText(QCoreApplication::translate("Dialog", "Single", nullptr));
        radio_Normal->setText(QCoreApplication::translate("Dialog", "Normal", nullptr));
        radio_Linearity->setText(QCoreApplication::translate("Dialog", "Linearity", nullptr));
        radio_Gauss->setText(QCoreApplication::translate("Dialog", "Gauss", nullptr));
        radio_Possion->setText(QCoreApplication::translate("Dialog", "Possion", nullptr));
        radio_Exponential->setText(QCoreApplication::translate("Dialog", "Exponential", nullptr));
        group_randomPara->setTitle(QCoreApplication::translate("Dialog", "Random Para", nullptr));
        label_Para1->setText(QCoreApplication::translate("Dialog", "Para1", nullptr));
        label_Para2->setText(QCoreApplication::translate("Dialog", "Para2", nullptr));
        groupBox_ParaSet->setTitle(QCoreApplication::translate("Dialog", "Para Set", nullptr));
        label_Value->setText(QCoreApplication::translate("Dialog", "Value", nullptr));
        label_ParaFrom->setText(QCoreApplication::translate("Dialog", "Para From:", nullptr));
        label_ParaTo->setText(QCoreApplication::translate("Dialog", "Para To:", nullptr));
        label_ParaNumber->setText(QCoreApplication::translate("Dialog", "Para Number:", nullptr));
        btn_Random->setText(QCoreApplication::translate("Dialog", "Apply", nullptr));
        out_OkButton->setText(QCoreApplication::translate("Dialog", "Ok", nullptr));
        out_CancelButton->setText(QCoreApplication::translate("Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDOMWIDGET_H
