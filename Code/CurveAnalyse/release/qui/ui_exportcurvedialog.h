/********************************************************************************
** Form generated from reading UI file 'exportcurvedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTCURVEDIALOG_H
#define UI_EXPORTCURVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportCurveDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_gif;
    QLabel *label_text;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ExportCurveDialog)
    {
        if (ExportCurveDialog->objectName().isEmpty())
            ExportCurveDialog->setObjectName(QString::fromUtf8("ExportCurveDialog"));
        ExportCurveDialog->resize(350, 159);
        ExportCurveDialog->setMinimumSize(QSize(0, 0));
        ExportCurveDialog->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(ExportCurveDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(96, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_gif = new QLabel(ExportCurveDialog);
        label_gif->setObjectName(QString::fromUtf8("label_gif"));
        label_gif->setMinimumSize(QSize(0, 0));
        label_gif->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(label_gif);

        label_text = new QLabel(ExportCurveDialog);
        label_text->setObjectName(QString::fromUtf8("label_text"));

        verticalLayout->addWidget(label_text);

        pushButton = new QPushButton(ExportCurveDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalLayout->setStretch(0, 6);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 2);

        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(96, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(ExportCurveDialog);

        QMetaObject::connectSlotsByName(ExportCurveDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportCurveDialog)
    {
        ExportCurveDialog->setWindowTitle(QCoreApplication::translate("ExportCurveDialog", "Export File", nullptr));
        label_gif->setText(QString());
        label_text->setText(QCoreApplication::translate("ExportCurveDialog", "file exporting......", nullptr));
        pushButton->setText(QCoreApplication::translate("ExportCurveDialog", "Cancle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExportCurveDialog: public Ui_ExportCurveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTCURVEDIALOG_H
