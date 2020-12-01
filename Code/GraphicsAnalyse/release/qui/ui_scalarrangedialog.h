/********************************************************************************
** Form generated from reading UI file 'scalarrangedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCALARRANGEDIALOG_H
#define UI_SCALARRANGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_scalarRangeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *mini_lineEdit;
    QLabel *label_2;
    QLineEdit *maxi_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *rescale_pushButton;
    QPushButton *close_pushButton;

    void setupUi(QDialog *scalarRangeDialog)
    {
        if (scalarRangeDialog->objectName().isEmpty())
            scalarRangeDialog->setObjectName(QString::fromUtf8("scalarRangeDialog"));
        scalarRangeDialog->resize(378, 130);
        verticalLayout = new QVBoxLayout(scalarRangeDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(scalarRangeDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mini_lineEdit = new QLineEdit(scalarRangeDialog);
        mini_lineEdit->setObjectName(QString::fromUtf8("mini_lineEdit"));

        horizontalLayout->addWidget(mini_lineEdit);

        label_2 = new QLabel(scalarRangeDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        maxi_lineEdit = new QLineEdit(scalarRangeDialog);
        maxi_lineEdit->setObjectName(QString::fromUtf8("maxi_lineEdit"));

        horizontalLayout->addWidget(maxi_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        rescale_pushButton = new QPushButton(scalarRangeDialog);
        rescale_pushButton->setObjectName(QString::fromUtf8("rescale_pushButton"));

        horizontalLayout_2->addWidget(rescale_pushButton);

        close_pushButton = new QPushButton(scalarRangeDialog);
        close_pushButton->setObjectName(QString::fromUtf8("close_pushButton"));

        horizontalLayout_2->addWidget(close_pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(scalarRangeDialog);

        QMetaObject::connectSlotsByName(scalarRangeDialog);
    } // setupUi

    void retranslateUi(QDialog *scalarRangeDialog)
    {
        scalarRangeDialog->setWindowTitle(QCoreApplication::translate("scalarRangeDialog", "Scalar Range", nullptr));
        label->setText(QCoreApplication::translate("scalarRangeDialog", "Minimum", nullptr));
        label_2->setText(QCoreApplication::translate("scalarRangeDialog", "Maximum", nullptr));
        rescale_pushButton->setText(QCoreApplication::translate("scalarRangeDialog", "Rescale", nullptr));
        close_pushButton->setText(QCoreApplication::translate("scalarRangeDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class scalarRangeDialog: public Ui_scalarRangeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCALARRANGEDIALOG_H
