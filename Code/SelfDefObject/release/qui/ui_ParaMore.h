/********************************************************************************
** Form generated from reading UI file 'ParaMore.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMORE_H
#define UI_PARAMORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParaMore
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *moreButton;

    void setupUi(QWidget *ParaMore)
    {
        if (ParaMore->objectName().isEmpty())
            ParaMore->setObjectName(QString::fromUtf8("ParaMore"));
        ParaMore->resize(400, 23);
        gridLayout = new QGridLayout(ParaMore);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(ParaMore);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        moreButton = new QPushButton(ParaMore);
        moreButton->setObjectName(QString::fromUtf8("moreButton"));
        moreButton->setMaximumSize(QSize(25, 16777215));
        moreButton->setToolTipDuration(-5);

        gridLayout->addWidget(moreButton, 0, 1, 1, 1);


        retranslateUi(ParaMore);

        QMetaObject::connectSlotsByName(ParaMore);
    } // setupUi

    void retranslateUi(QWidget *ParaMore)
    {
        ParaMore->setWindowTitle(QCoreApplication::translate("ParaMore", "Form", nullptr));
        moreButton->setText(QCoreApplication::translate("ParaMore", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParaMore: public Ui_ParaMore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMORE_H
