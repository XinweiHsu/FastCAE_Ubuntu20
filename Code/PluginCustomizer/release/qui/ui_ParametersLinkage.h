/********************************************************************************
** Form generated from reading UI file 'ParametersLinkage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETERSLINKAGE_H
#define UI_PARAMETERSLINKAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ParametersLinkage
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *paraLinkageName;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *associationTree;
    QComboBox *treeQCB;
    QHBoxLayout *horizontalLayout_4;
    QLabel *parameterType;
    QSpacerItem *horizontalSpacer;
    QTableWidget *parameterTableWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *errorText;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *lastStepQPB;
    QPushButton *nextStepQPB;

    void setupUi(QDialog *ParametersLinkage)
    {
        if (ParametersLinkage->objectName().isEmpty())
            ParametersLinkage->setObjectName(QString::fromUtf8("ParametersLinkage"));
        ParametersLinkage->resize(920, 659);
        gridLayout = new QGridLayout(ParametersLinkage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        paraLinkageName = new QLabel(ParametersLinkage);
        paraLinkageName->setObjectName(QString::fromUtf8("paraLinkageName"));

        horizontalLayout->addWidget(paraLinkageName);

        nameLineEdit = new QLineEdit(ParametersLinkage);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        horizontalLayout->addWidget(nameLineEdit);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        associationTree = new QLabel(ParametersLinkage);
        associationTree->setObjectName(QString::fromUtf8("associationTree"));

        horizontalLayout_2->addWidget(associationTree);

        treeQCB = new QComboBox(ParametersLinkage);
        treeQCB->setObjectName(QString::fromUtf8("treeQCB"));

        horizontalLayout_2->addWidget(treeQCB);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        parameterType = new QLabel(ParametersLinkage);
        parameterType->setObjectName(QString::fromUtf8("parameterType"));

        horizontalLayout_4->addWidget(parameterType);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        parameterTableWidget = new QTableWidget(ParametersLinkage);
        parameterTableWidget->setObjectName(QString::fromUtf8("parameterTableWidget"));

        gridLayout->addWidget(parameterTableWidget, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        errorText = new QLabel(ParametersLinkage);
        errorText->setObjectName(QString::fromUtf8("errorText"));
        errorText->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_5->addWidget(errorText);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        lastStepQPB = new QPushButton(ParametersLinkage);
        lastStepQPB->setObjectName(QString::fromUtf8("lastStepQPB"));

        horizontalLayout_5->addWidget(lastStepQPB);

        nextStepQPB = new QPushButton(ParametersLinkage);
        nextStepQPB->setObjectName(QString::fromUtf8("nextStepQPB"));

        horizontalLayout_5->addWidget(nextStepQPB);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);


        retranslateUi(ParametersLinkage);

        QMetaObject::connectSlotsByName(ParametersLinkage);
    } // setupUi

    void retranslateUi(QDialog *ParametersLinkage)
    {
        ParametersLinkage->setWindowTitle(QCoreApplication::translate("ParametersLinkage", "ParametersLinkage", nullptr));
        paraLinkageName->setText(QCoreApplication::translate("ParametersLinkage", "Name", nullptr));
        associationTree->setText(QCoreApplication::translate("ParametersLinkage", "Association", nullptr));
        parameterType->setText(QString());
        errorText->setText(QString());
        lastStepQPB->setText(QString());
        nextStepQPB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ParametersLinkage: public Ui_ParametersLinkage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETERSLINKAGE_H
