/********************************************************************************
** Form generated from reading UI file 'EditorCurveInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORCURVEINFO_H
#define UI_EDITORCURVEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_EditorCurveInfo
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *CurveNameLE;
    QLabel *label_2;
    QLineEdit *XVariableLE;
    QLabel *label_3;
    QLineEdit *YVariableLE;
    QHBoxLayout *horizontalLayout_4;
    QLabel *ErrorText;
    QSpacerItem *horizontalSpacer;
    QPushButton *OkPB;
    QPushButton *CancelPB;

    void setupUi(QDialog *EditorCurveInfo)
    {
        if (EditorCurveInfo->objectName().isEmpty())
            EditorCurveInfo->setObjectName(QString::fromUtf8("EditorCurveInfo"));
        EditorCurveInfo->resize(415, 135);
        gridLayout = new QGridLayout(EditorCurveInfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(EditorCurveInfo);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        CurveNameLE = new QLineEdit(EditorCurveInfo);
        CurveNameLE->setObjectName(QString::fromUtf8("CurveNameLE"));

        formLayout->setWidget(0, QFormLayout::FieldRole, CurveNameLE);

        label_2 = new QLabel(EditorCurveInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        XVariableLE = new QLineEdit(EditorCurveInfo);
        XVariableLE->setObjectName(QString::fromUtf8("XVariableLE"));

        formLayout->setWidget(1, QFormLayout::FieldRole, XVariableLE);

        label_3 = new QLabel(EditorCurveInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        YVariableLE = new QLineEdit(EditorCurveInfo);
        YVariableLE->setObjectName(QString::fromUtf8("YVariableLE"));

        formLayout->setWidget(2, QFormLayout::FieldRole, YVariableLE);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        ErrorText = new QLabel(EditorCurveInfo);
        ErrorText->setObjectName(QString::fromUtf8("ErrorText"));
        ErrorText->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_4->addWidget(ErrorText);

        horizontalSpacer = new QSpacerItem(13, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        OkPB = new QPushButton(EditorCurveInfo);
        OkPB->setObjectName(QString::fromUtf8("OkPB"));

        horizontalLayout_4->addWidget(OkPB);

        CancelPB = new QPushButton(EditorCurveInfo);
        CancelPB->setObjectName(QString::fromUtf8("CancelPB"));

        horizontalLayout_4->addWidget(CancelPB);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        retranslateUi(EditorCurveInfo);

        QMetaObject::connectSlotsByName(EditorCurveInfo);
    } // setupUi

    void retranslateUi(QDialog *EditorCurveInfo)
    {
        EditorCurveInfo->setWindowTitle(QCoreApplication::translate("EditorCurveInfo", "Curve Information", nullptr));
        label->setText(QCoreApplication::translate("EditorCurveInfo", "Curve Name", nullptr));
        label_2->setText(QCoreApplication::translate("EditorCurveInfo", "X Variable", nullptr));
        label_3->setText(QCoreApplication::translate("EditorCurveInfo", "Y Variable", nullptr));
        ErrorText->setText(QString());
        OkPB->setText(QCoreApplication::translate("EditorCurveInfo", "OK", nullptr));
        CancelPB->setText(QCoreApplication::translate("EditorCurveInfo", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorCurveInfo: public Ui_EditorCurveInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORCURVEINFO_H
