/********************************************************************************
** Form generated from reading UI file 'curve_aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURVE_ABOUTDIALOG_H
#define UI_CURVE_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_curve_aboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;

    void setupUi(QDialog *curve_aboutDialog)
    {
        if (curve_aboutDialog->objectName().isEmpty())
            curve_aboutDialog->setObjectName(QString::fromUtf8("curve_aboutDialog"));
        curve_aboutDialog->resize(315, 207);
        verticalLayout = new QVBoxLayout(curve_aboutDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(curve_aboutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextFormat(Qt::AutoText);
        label->setPixmap(QPixmap(QString::fromUtf8("images/curve.png")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(curve_aboutDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_3 = new QLabel(curve_aboutDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(curve_aboutDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(curve_aboutDialog);

        QMetaObject::connectSlotsByName(curve_aboutDialog);
    } // setupUi

    void retranslateUi(QDialog *curve_aboutDialog)
    {
        curve_aboutDialog->setWindowTitle(QCoreApplication::translate("curve_aboutDialog", "About", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("curve_aboutDialog", "Numeric Tank 2D Curve Module", nullptr));
        label_3->setText(QCoreApplication::translate("curve_aboutDialog", "version  2.0", nullptr));
        pushButton->setText(QCoreApplication::translate("curve_aboutDialog", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class curve_aboutDialog: public Ui_curve_aboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURVE_ABOUTDIALOG_H
