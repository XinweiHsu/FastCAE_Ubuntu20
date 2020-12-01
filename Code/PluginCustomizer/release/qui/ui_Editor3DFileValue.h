/********************************************************************************
** Form generated from reading UI file 'Editor3DFileValue.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOR3DFILEVALUE_H
#define UI_EDITOR3DFILEVALUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Editor3DFileValue
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *NameLE;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *ScalarRB;
    QRadioButton *VectorRB;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *NodeRB;
    QRadioButton *CellRB;
    QHBoxLayout *horizontalLayout;
    QLabel *ErrorText;
    QSpacerItem *horizontalSpacer;
    QPushButton *OkPBtn;
    QPushButton *CancelPBtn;

    void setupUi(QDialog *Editor3DFileValue)
    {
        if (Editor3DFileValue->objectName().isEmpty())
            Editor3DFileValue->setObjectName(QString::fromUtf8("Editor3DFileValue"));
        Editor3DFileValue->resize(431, 252);
        gridLayout = new QGridLayout(Editor3DFileValue);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(Editor3DFileValue);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        NameLE = new QLineEdit(Editor3DFileValue);
        NameLE->setObjectName(QString::fromUtf8("NameLE"));

        horizontalLayout_2->addWidget(NameLE);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 10);

        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(Editor3DFileValue);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        ScalarRB = new QRadioButton(Editor3DFileValue);
        ScalarRB->setObjectName(QString::fromUtf8("ScalarRB"));

        horizontalLayout_4->addWidget(ScalarRB);

        VectorRB = new QRadioButton(Editor3DFileValue);
        VectorRB->setObjectName(QString::fromUtf8("VectorRB"));

        horizontalLayout_4->addWidget(VectorRB);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(Editor3DFileValue);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        NodeRB = new QRadioButton(Editor3DFileValue);
        NodeRB->setObjectName(QString::fromUtf8("NodeRB"));

        horizontalLayout_3->addWidget(NodeRB);

        CellRB = new QRadioButton(Editor3DFileValue);
        CellRB->setObjectName(QString::fromUtf8("CellRB"));

        horizontalLayout_3->addWidget(CellRB);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ErrorText = new QLabel(Editor3DFileValue);
        ErrorText->setObjectName(QString::fromUtf8("ErrorText"));
        ErrorText->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(ErrorText);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        OkPBtn = new QPushButton(Editor3DFileValue);
        OkPBtn->setObjectName(QString::fromUtf8("OkPBtn"));
        OkPBtn->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(OkPBtn);

        CancelPBtn = new QPushButton(Editor3DFileValue);
        CancelPBtn->setObjectName(QString::fromUtf8("CancelPBtn"));
        CancelPBtn->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(CancelPBtn);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);


        retranslateUi(Editor3DFileValue);

        QMetaObject::connectSlotsByName(Editor3DFileValue);
    } // setupUi

    void retranslateUi(QDialog *Editor3DFileValue)
    {
        Editor3DFileValue->setWindowTitle(QCoreApplication::translate("Editor3DFileValue", "3D Graph Parameter", nullptr));
        label->setText(QCoreApplication::translate("Editor3DFileValue", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("Editor3DFileValue", "Type", nullptr));
        ScalarRB->setText(QCoreApplication::translate("Editor3DFileValue", "Scalar", nullptr));
        VectorRB->setText(QCoreApplication::translate("Editor3DFileValue", "Vector", nullptr));
        label_3->setText(QCoreApplication::translate("Editor3DFileValue", "DataType", nullptr));
        NodeRB->setText(QCoreApplication::translate("Editor3DFileValue", "Node", nullptr));
        CellRB->setText(QCoreApplication::translate("Editor3DFileValue", "Cell", nullptr));
        ErrorText->setText(QString());
        OkPBtn->setText(QCoreApplication::translate("Editor3DFileValue", "Ok", nullptr));
        CancelPBtn->setText(QCoreApplication::translate("Editor3DFileValue", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Editor3DFileValue: public Ui_Editor3DFileValue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOR3DFILEVALUE_H
