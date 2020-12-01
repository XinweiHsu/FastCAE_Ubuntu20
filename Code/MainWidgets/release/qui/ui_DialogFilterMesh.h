/********************************************************************************
** Form generated from reading UI file 'DialogFilterMesh.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFILTERMESH_H
#define UI_DIALOGFILTERMESH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_FilterMeshDialog
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_0d;
    QCheckBox *checkBox_1d;
    QCheckBox *checkBox_2d;
    QCheckBox *checkBox_3d;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FilterMeshDialog)
    {
        if (FilterMeshDialog->objectName().isEmpty())
            FilterMeshDialog->setObjectName(QString::fromUtf8("FilterMeshDialog"));
        FilterMeshDialog->resize(356, 469);
#if QT_CONFIG(whatsthis)
        FilterMeshDialog->setWhatsThis(QString::fromUtf8(""));
#endif // QT_CONFIG(whatsthis)
        gridLayout_3 = new QGridLayout(FilterMeshDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(FilterMeshDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox_0d = new QCheckBox(groupBox);
        checkBox_0d->setObjectName(QString::fromUtf8("checkBox_0d"));

        horizontalLayout->addWidget(checkBox_0d);

        checkBox_1d = new QCheckBox(groupBox);
        checkBox_1d->setObjectName(QString::fromUtf8("checkBox_1d"));

        horizontalLayout->addWidget(checkBox_1d);

        checkBox_2d = new QCheckBox(groupBox);
        checkBox_2d->setObjectName(QString::fromUtf8("checkBox_2d"));

        horizontalLayout->addWidget(checkBox_2d);

        checkBox_3d = new QCheckBox(groupBox);
        checkBox_3d->setObjectName(QString::fromUtf8("checkBox_3d"));

        horizontalLayout->addWidget(checkBox_3d);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(FilterMeshDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        listWidget = new QListWidget(groupBox_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(FilterMeshDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(FilterMeshDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FilterMeshDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FilterMeshDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FilterMeshDialog);
    } // setupUi

    void retranslateUi(QDialog *FilterMeshDialog)
    {
        FilterMeshDialog->setWindowTitle(QCoreApplication::translate("FilterMeshDialog", "FilterMesh", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FilterMeshDialog", "Remove Dimesion", nullptr));
        checkBox_0d->setText(QCoreApplication::translate("FilterMeshDialog", "0 D", nullptr));
        checkBox_1d->setText(QCoreApplication::translate("FilterMeshDialog", "1 D", nullptr));
        checkBox_2d->setText(QCoreApplication::translate("FilterMeshDialog", "2 D", nullptr));
        checkBox_3d->setText(QCoreApplication::translate("FilterMeshDialog", "3 D", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("FilterMeshDialog", "Mesh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilterMeshDialog: public Ui_FilterMeshDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFILTERMESH_H
