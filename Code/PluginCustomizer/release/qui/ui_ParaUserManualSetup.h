/********************************************************************************
** Form generated from reading UI file 'ParaUserManualSetup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAUSERMANUALSETUP_H
#define UI_PARAUSERMANUALSETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParaUserManualSetup
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *widgetLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtFileName;
    QPushButton *btnLoadDoc;
    QPushButton *btnPreview;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_info;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *ParaUserManualSetup)
    {
        if (ParaUserManualSetup->objectName().isEmpty())
            ParaUserManualSetup->setObjectName(QString::fromUtf8("ParaUserManualSetup"));
        ParaUserManualSetup->resize(658, 552);
        gridLayout_2 = new QGridLayout(ParaUserManualSetup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widgetLayout = new QGridLayout();
        widgetLayout->setObjectName(QString::fromUtf8("widgetLayout"));
        widget = new QWidget(ParaUserManualSetup);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);

        widgetLayout->addWidget(widget, 0, 0, 1, 1);


        gridLayout_2->addLayout(widgetLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 6, -1, 6);
        txtFileName = new QLineEdit(ParaUserManualSetup);
        txtFileName->setObjectName(QString::fromUtf8("txtFileName"));

        horizontalLayout->addWidget(txtFileName);

        btnLoadDoc = new QPushButton(ParaUserManualSetup);
        btnLoadDoc->setObjectName(QString::fromUtf8("btnLoadDoc"));

        horizontalLayout->addWidget(btnLoadDoc);

        btnPreview = new QPushButton(ParaUserManualSetup);
        btnPreview->setObjectName(QString::fromUtf8("btnPreview"));

        horizontalLayout->addWidget(btnPreview);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 6, -1, 6);
        lbl_info = new QLabel(ParaUserManualSetup);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));
        lbl_info->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_3->addWidget(lbl_info);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnOk = new QPushButton(ParaUserManualSetup);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        btnOk->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_3->addWidget(btnOk);

        btnCancel = new QPushButton(ParaUserManualSetup);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_3->addWidget(btnCancel);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(ParaUserManualSetup);

        QMetaObject::connectSlotsByName(ParaUserManualSetup);
    } // setupUi

    void retranslateUi(QDialog *ParaUserManualSetup)
    {
        ParaUserManualSetup->setWindowTitle(QCoreApplication::translate("ParaUserManualSetup", "Setup user manual", nullptr));
        btnLoadDoc->setText(QCoreApplication::translate("ParaUserManualSetup", "Load doc", nullptr));
        btnPreview->setText(QCoreApplication::translate("ParaUserManualSetup", "Preview", nullptr));
        lbl_info->setText(QString());
        btnOk->setText(QCoreApplication::translate("ParaUserManualSetup", "Ok", nullptr));
        btnCancel->setText(QCoreApplication::translate("ParaUserManualSetup", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParaUserManualSetup: public Ui_ParaUserManualSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAUSERMANUALSETUP_H
