/********************************************************************************
** Form generated from reading UI file 'EditorCurveModel.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORCURVEMODEL_H
#define UI_EDITORCURVEMODEL_H

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

class Ui_EditorCurveModel
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *NameLE;
    QComboBox *comboBox;
    QPushButton *InsertPBtn;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *ErrorText;
    QSpacerItem *horizontalSpacer;
    QPushButton *OKPBtn;
    QPushButton *CancelPBtn;

    void setupUi(QDialog *EditorCurveModel)
    {
        if (EditorCurveModel->objectName().isEmpty())
            EditorCurveModel->setObjectName(QString::fromUtf8("EditorCurveModel"));
        EditorCurveModel->resize(698, 500);
        gridLayout = new QGridLayout(EditorCurveModel);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(15);
        gridLayout->setContentsMargins(12, 12, 12, 12);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(EditorCurveModel);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        NameLE = new QLineEdit(EditorCurveModel);
        NameLE->setObjectName(QString::fromUtf8("NameLE"));

        horizontalLayout->addWidget(NameLE);

        comboBox = new QComboBox(EditorCurveModel);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        InsertPBtn = new QPushButton(EditorCurveModel);
        InsertPBtn->setObjectName(QString::fromUtf8("InsertPBtn"));

        horizontalLayout->addWidget(InsertPBtn);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        tableWidget = new QTableWidget(EditorCurveModel);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(6, 6, 6, 6);
        ErrorText = new QLabel(EditorCurveModel);
        ErrorText->setObjectName(QString::fromUtf8("ErrorText"));
        ErrorText->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_2->addWidget(ErrorText);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        OKPBtn = new QPushButton(EditorCurveModel);
        OKPBtn->setObjectName(QString::fromUtf8("OKPBtn"));

        horizontalLayout_2->addWidget(OKPBtn);

        CancelPBtn = new QPushButton(EditorCurveModel);
        CancelPBtn->setObjectName(QString::fromUtf8("CancelPBtn"));

        horizontalLayout_2->addWidget(CancelPBtn);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        retranslateUi(EditorCurveModel);

        QMetaObject::connectSlotsByName(EditorCurveModel);
    } // setupUi

    void retranslateUi(QDialog *EditorCurveModel)
    {
        EditorCurveModel->setWindowTitle(QCoreApplication::translate("EditorCurveModel", "Parameter", nullptr));
        label->setText(QCoreApplication::translate("EditorCurveModel", "File Name:", nullptr));
        InsertPBtn->setText(QCoreApplication::translate("EditorCurveModel", "Insert", nullptr));
        ErrorText->setText(QString());
        OKPBtn->setText(QCoreApplication::translate("EditorCurveModel", "Ok", nullptr));
        CancelPBtn->setText(QCoreApplication::translate("EditorCurveModel", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorCurveModel: public Ui_EditorCurveModel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORCURVEMODEL_H
