/********************************************************************************
** Form generated from reading UI file 'DialogRemoveReport.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGREMOVEREPORT_H
#define UI_DIALOGREMOVEREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_RemoveReportDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QCheckBox *deleteFileCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RemoveReportDialog)
    {
        if (RemoveReportDialog->objectName().isEmpty())
            RemoveReportDialog->setObjectName(QString::fromUtf8("RemoveReportDialog"));
        RemoveReportDialog->resize(400, 155);
        gridLayout = new QGridLayout(RemoveReportDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(RemoveReportDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        deleteFileCheckBox = new QCheckBox(RemoveReportDialog);
        deleteFileCheckBox->setObjectName(QString::fromUtf8("deleteFileCheckBox"));

        gridLayout->addWidget(deleteFileCheckBox, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(RemoveReportDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(RemoveReportDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RemoveReportDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RemoveReportDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RemoveReportDialog);
    } // setupUi

    void retranslateUi(QDialog *RemoveReportDialog)
    {
        RemoveReportDialog->setWindowTitle(QCoreApplication::translate("RemoveReportDialog", "Delete", nullptr));
        label->setText(QCoreApplication::translate("RemoveReportDialog", "Do you decide to remove the report\357\274\237", nullptr));
        deleteFileCheckBox->setText(QCoreApplication::translate("RemoveReportDialog", "Delete file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveReportDialog: public Ui_RemoveReportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGREMOVEREPORT_H
