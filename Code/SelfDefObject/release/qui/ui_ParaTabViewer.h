/********************************************************************************
** Form generated from reading UI file 'ParaTabViewer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARATABVIEWER_H
#define UI_PARATABVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ParaTabViewer
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *out_exportButton;
    QPushButton *out_importButton;
    QPushButton *out_OKButton;
    QPushButton *out_applyButton;
    QPushButton *out_cancelButton;
    QGridLayout *tabLayout;

    void setupUi(QDialog *ParaTabViewer)
    {
        if (ParaTabViewer->objectName().isEmpty())
            ParaTabViewer->setObjectName(QString::fromUtf8("ParaTabViewer"));
        ParaTabViewer->resize(425, 300);
        gridLayout = new QGridLayout(ParaTabViewer);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        out_exportButton = new QPushButton(ParaTabViewer);
        out_exportButton->setObjectName(QString::fromUtf8("out_exportButton"));

        horizontalLayout->addWidget(out_exportButton);

        out_importButton = new QPushButton(ParaTabViewer);
        out_importButton->setObjectName(QString::fromUtf8("out_importButton"));

        horizontalLayout->addWidget(out_importButton);

        out_OKButton = new QPushButton(ParaTabViewer);
        out_OKButton->setObjectName(QString::fromUtf8("out_OKButton"));

        horizontalLayout->addWidget(out_OKButton);

        out_applyButton = new QPushButton(ParaTabViewer);
        out_applyButton->setObjectName(QString::fromUtf8("out_applyButton"));

        horizontalLayout->addWidget(out_applyButton);

        out_cancelButton = new QPushButton(ParaTabViewer);
        out_cancelButton->setObjectName(QString::fromUtf8("out_cancelButton"));

        horizontalLayout->addWidget(out_cancelButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        tabLayout = new QGridLayout();
        tabLayout->setObjectName(QString::fromUtf8("tabLayout"));

        gridLayout->addLayout(tabLayout, 0, 0, 1, 1);


        retranslateUi(ParaTabViewer);

        QMetaObject::connectSlotsByName(ParaTabViewer);
    } // setupUi

    void retranslateUi(QDialog *ParaTabViewer)
    {
        ParaTabViewer->setWindowTitle(QCoreApplication::translate("ParaTabViewer", "Table Viewer", nullptr));
        out_exportButton->setText(QCoreApplication::translate("ParaTabViewer", "Export", nullptr));
        out_importButton->setText(QCoreApplication::translate("ParaTabViewer", "Import", nullptr));
        out_OKButton->setText(QCoreApplication::translate("ParaTabViewer", "OK", nullptr));
        out_applyButton->setText(QCoreApplication::translate("ParaTabViewer", "Apply", nullptr));
        out_cancelButton->setText(QCoreApplication::translate("ParaTabViewer", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParaTabViewer: public Ui_ParaTabViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARATABVIEWER_H
