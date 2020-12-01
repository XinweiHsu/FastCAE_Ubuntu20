/********************************************************************************
** Form generated from reading UI file 'LineEditDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEEDITDIALOG_H
#define UI_LINEEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_LineEditDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LineEditDialog)
    {
        if (LineEditDialog->objectName().isEmpty())
            LineEditDialog->setObjectName(QString::fromUtf8("LineEditDialog"));
        LineEditDialog->resize(263, 69);
        gridLayout = new QGridLayout(LineEditDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(LineEditDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(LineEditDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(LineEditDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(LineEditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LineEditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LineEditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LineEditDialog);
    } // setupUi

    void retranslateUi(QDialog *LineEditDialog)
    {
        LineEditDialog->setWindowTitle(QCoreApplication::translate("LineEditDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LineEditDialog", "Des", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LineEditDialog: public Ui_LineEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEEDITDIALOG_H
