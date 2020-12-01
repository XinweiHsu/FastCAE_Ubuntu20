/********************************************************************************
** Form generated from reading UI file 'processBar.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSBAR_H
#define UI_PROCESSBAR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessBar
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *name;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *progressBar;
    QPushButton *closeButton;
    QCheckBox *autoCloseQCB;

    void setupUi(QWidget *ProcessBar)
    {
        if (ProcessBar->objectName().isEmpty())
            ProcessBar->setObjectName(QString::fromUtf8("ProcessBar"));
        ProcessBar->resize(400, 106);
        gridLayout = new QGridLayout(ProcessBar);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        name = new QLabel(ProcessBar);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout->addWidget(name);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        progressBar = new QProgressBar(ProcessBar);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_2->addWidget(progressBar);

        closeButton = new QPushButton(ProcessBar);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/QUI/icon/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);

        horizontalLayout_2->addWidget(closeButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        autoCloseQCB = new QCheckBox(ProcessBar);
        autoCloseQCB->setObjectName(QString::fromUtf8("autoCloseQCB"));

        gridLayout->addWidget(autoCloseQCB, 2, 0, 1, 1);


        retranslateUi(ProcessBar);

        QMetaObject::connectSlotsByName(ProcessBar);
    } // setupUi

    void retranslateUi(QWidget *ProcessBar)
    {
        ProcessBar->setWindowTitle(QCoreApplication::translate("ProcessBar", "ProcessBar", nullptr));
        name->setText(QCoreApplication::translate("ProcessBar", "name", nullptr));
        closeButton->setText(QString());
        autoCloseQCB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProcessBar: public Ui_ProcessBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSBAR_H
