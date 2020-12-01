/********************************************************************************
** Form generated from reading UI file 'EditorTableValue.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORTABLEVALUE_H
#define UI_EDITORTABLEVALUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorTableValue
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *NameLE;
    QLabel *label_2;
    QLineEdit *RowsLE;
    QLineEdit *ColumnsLE;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *RefreshPBtn;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *ErrorText;
    QSpacerItem *horizontalSpacer;
    QPushButton *OkPBtn;
    QPushButton *CancelPBtn;

    void setupUi(QDialog *EditorTableValue)
    {
        if (EditorTableValue->objectName().isEmpty())
            EditorTableValue->setObjectName(QString::fromUtf8("EditorTableValue"));
        EditorTableValue->resize(416, 392);
        gridLayout = new QGridLayout(EditorTableValue);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(EditorTableValue);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        NameLE = new QLineEdit(EditorTableValue);
        NameLE->setObjectName(QString::fromUtf8("NameLE"));

        formLayout->setWidget(0, QFormLayout::FieldRole, NameLE);

        label_2 = new QLabel(EditorTableValue);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        RowsLE = new QLineEdit(EditorTableValue);
        RowsLE->setObjectName(QString::fromUtf8("RowsLE"));

        formLayout->setWidget(1, QFormLayout::FieldRole, RowsLE);

        ColumnsLE = new QLineEdit(EditorTableValue);
        ColumnsLE->setObjectName(QString::fromUtf8("ColumnsLE"));

        formLayout->setWidget(3, QFormLayout::FieldRole, ColumnsLE);

        label_3 = new QLabel(EditorTableValue);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(EditorTableValue);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        RefreshPBtn = new QPushButton(EditorTableValue);
        RefreshPBtn->setObjectName(QString::fromUtf8("RefreshPBtn"));

        horizontalLayout_5->addWidget(RefreshPBtn);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        tableWidget = new QTableWidget(EditorTableValue);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ErrorText = new QLabel(EditorTableValue);
        ErrorText->setObjectName(QString::fromUtf8("ErrorText"));
        ErrorText->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(ErrorText);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        OkPBtn = new QPushButton(EditorTableValue);
        OkPBtn->setObjectName(QString::fromUtf8("OkPBtn"));

        horizontalLayout->addWidget(OkPBtn);

        CancelPBtn = new QPushButton(EditorTableValue);
        CancelPBtn->setObjectName(QString::fromUtf8("CancelPBtn"));

        horizontalLayout->addWidget(CancelPBtn);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);


        retranslateUi(EditorTableValue);

        QMetaObject::connectSlotsByName(EditorTableValue);
    } // setupUi

    void retranslateUi(QDialog *EditorTableValue)
    {
        EditorTableValue->setWindowTitle(QCoreApplication::translate("EditorTableValue", "Table Parameter", nullptr));
        label->setText(QCoreApplication::translate("EditorTableValue", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("EditorTableValue", "Rows", nullptr));
        label_3->setText(QCoreApplication::translate("EditorTableValue", "Columns", nullptr));
        label_4->setText(QCoreApplication::translate("EditorTableValue", "Value", nullptr));
        RefreshPBtn->setText(QCoreApplication::translate("EditorTableValue", "Refresh", nullptr));
        ErrorText->setText(QString());
        OkPBtn->setText(QCoreApplication::translate("EditorTableValue", "Ok", nullptr));
        CancelPBtn->setText(QCoreApplication::translate("EditorTableValue", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorTableValue: public Ui_EditorTableValue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORTABLEVALUE_H
