/********************************************************************************
** Form generated from reading UI file 'loadfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADFILEDIALOG_H
#define UI_LOADFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_LoadFileDialog
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *LoadFileDialog)
    {
        if (LoadFileDialog->objectName().isEmpty())
            LoadFileDialog->setObjectName(QString::fromUtf8("LoadFileDialog"));
        LoadFileDialog->resize(350, 159);
        LoadFileDialog->setMinimumSize(QSize(350, 159));
        LoadFileDialog->setMaximumSize(QSize(350, 159));
        label = new QLabel(LoadFileDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 0, 64, 64));
        label->setMinimumSize(QSize(64, 64));
        label->setMaximumSize(QSize(64, 64));
        label_2 = new QLabel(LoadFileDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 80, 251, 16));

        retranslateUi(LoadFileDialog);

        QMetaObject::connectSlotsByName(LoadFileDialog);
    } // setupUi

    void retranslateUi(QDialog *LoadFileDialog)
    {
        LoadFileDialog->setWindowTitle(QCoreApplication::translate("LoadFileDialog", "File Load", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("LoadFileDialog", "File loading......", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadFileDialog: public Ui_LoadFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADFILEDIALOG_H
