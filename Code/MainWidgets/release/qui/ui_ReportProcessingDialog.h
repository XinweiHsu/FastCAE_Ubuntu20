/********************************************************************************
** Form generated from reading UI file 'ReportProcessingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTPROCESSINGDIALOG_H
#define UI_REPORTPROCESSINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReportProcessingDialog
{
public:
    QLabel *movieLable;
    QLabel *hintMsgLabel;
    QPushButton *cancelButton;

    void setupUi(QWidget *ReportProcessingDialog)
    {
        if (ReportProcessingDialog->objectName().isEmpty())
            ReportProcessingDialog->setObjectName(QString::fromUtf8("ReportProcessingDialog"));
        ReportProcessingDialog->setWindowModality(Qt::ApplicationModal);
        ReportProcessingDialog->resize(441, 263);
        ReportProcessingDialog->setSizeIncrement(QSize(359, 159));
        movieLable = new QLabel(ReportProcessingDialog);
        movieLable->setObjectName(QString::fromUtf8("movieLable"));
        movieLable->setGeometry(QRect(10, 0, 441, 263));
        hintMsgLabel = new QLabel(ReportProcessingDialog);
        hintMsgLabel->setObjectName(QString::fromUtf8("hintMsgLabel"));
        hintMsgLabel->setGeometry(QRect(20, 210, 271, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        hintMsgLabel->setFont(font);
        hintMsgLabel->setFrameShadow(QFrame::Plain);
        cancelButton = new QPushButton(ReportProcessingDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(310, 210, 93, 28));

        retranslateUi(ReportProcessingDialog);

        QMetaObject::connectSlotsByName(ReportProcessingDialog);
    } // setupUi

    void retranslateUi(QWidget *ReportProcessingDialog)
    {
        ReportProcessingDialog->setWindowTitle(QCoreApplication::translate("ReportProcessingDialog", "Form", nullptr));
        movieLable->setText(QString());
        hintMsgLabel->setText(QCoreApplication::translate("ReportProcessingDialog", "Generateing Mesh,please wait!", nullptr));
        cancelButton->setText(QCoreApplication::translate("ReportProcessingDialog", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReportProcessingDialog: public Ui_ReportProcessingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTPROCESSINGDIALOG_H
