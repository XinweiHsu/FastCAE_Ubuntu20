/********************************************************************************
** Form generated from reading UI file 'ParaExportMeshSetup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAEXPORTMESHSETUP_H
#define UI_PARAEXPORTMESHSETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ParaExportMeshSetup
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *chk_selectall;
    QSpacerItem *horizontalSpacer_13;
    QCheckBox *BinaryExport;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *chk_nastran;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *chk_gambit;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *chk_flunet;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *chk_tecplot;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QCheckBox *chk_vtk;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *btnOk_2;
    QSpacerItem *horizontalSpacer_24;
    QPushButton *btnCancel_2;

    void setupUi(QDialog *ParaExportMeshSetup)
    {
        if (ParaExportMeshSetup->objectName().isEmpty())
            ParaExportMeshSetup->setObjectName(QString::fromUtf8("ParaExportMeshSetup"));
        ParaExportMeshSetup->resize(276, 329);
        gridLayout = new QGridLayout(ParaExportMeshSetup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        chk_selectall = new QCheckBox(ParaExportMeshSetup);
        chk_selectall->setObjectName(QString::fromUtf8("chk_selectall"));

        horizontalLayout_8->addWidget(chk_selectall);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);

        BinaryExport = new QCheckBox(ParaExportMeshSetup);
        BinaryExport->setObjectName(QString::fromUtf8("BinaryExport"));

        horizontalLayout_8->addWidget(BinaryExport);


        gridLayout->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        chk_nastran = new QCheckBox(ParaExportMeshSetup);
        chk_nastran->setObjectName(QString::fromUtf8("chk_nastran"));
        chk_nastran->setMinimumSize(QSize(110, 0));

        horizontalLayout->addWidget(chk_nastran);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        chk_gambit = new QCheckBox(ParaExportMeshSetup);
        chk_gambit->setObjectName(QString::fromUtf8("chk_gambit"));
        chk_gambit->setMinimumSize(QSize(110, 0));

        horizontalLayout_2->addWidget(chk_gambit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        chk_flunet = new QCheckBox(ParaExportMeshSetup);
        chk_flunet->setObjectName(QString::fromUtf8("chk_flunet"));
        chk_flunet->setMinimumSize(QSize(110, 0));

        horizontalLayout_3->addWidget(chk_flunet);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        chk_tecplot = new QCheckBox(ParaExportMeshSetup);
        chk_tecplot->setObjectName(QString::fromUtf8("chk_tecplot"));
        chk_tecplot->setMinimumSize(QSize(110, 0));

        horizontalLayout_4->addWidget(chk_tecplot);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        chk_vtk = new QCheckBox(ParaExportMeshSetup);
        chk_vtk->setObjectName(QString::fromUtf8("chk_vtk"));
        chk_vtk->setMinimumSize(QSize(110, 0));

        horizontalLayout_5->addWidget(chk_vtk);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        btnOk_2 = new QPushButton(ParaExportMeshSetup);
        btnOk_2->setObjectName(QString::fromUtf8("btnOk_2"));

        horizontalLayout_14->addWidget(btnOk_2);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_24);

        btnCancel_2 = new QPushButton(ParaExportMeshSetup);
        btnCancel_2->setObjectName(QString::fromUtf8("btnCancel_2"));

        horizontalLayout_14->addWidget(btnCancel_2);


        gridLayout->addLayout(horizontalLayout_14, 6, 0, 1, 1);


        retranslateUi(ParaExportMeshSetup);

        QMetaObject::connectSlotsByName(ParaExportMeshSetup);
    } // setupUi

    void retranslateUi(QDialog *ParaExportMeshSetup)
    {
        ParaExportMeshSetup->setWindowTitle(QCoreApplication::translate("ParaExportMeshSetup", "Export mesh setup", nullptr));
        chk_selectall->setText(QCoreApplication::translate("ParaExportMeshSetup", "Select all", nullptr));
        BinaryExport->setText(QCoreApplication::translate("ParaExportMeshSetup", "Binary Export", nullptr));
        chk_nastran->setText(QCoreApplication::translate("ParaExportMeshSetup", "CGNS(*.cgns)", nullptr));
        chk_gambit->setText(QCoreApplication::translate("ParaExportMeshSetup", "Gambit(*.neu)", nullptr));
        chk_flunet->setText(QCoreApplication::translate("ParaExportMeshSetup", "STL(*.stl)", nullptr));
        chk_tecplot->setText(QCoreApplication::translate("ParaExportMeshSetup", "Tecplot(*.dat)", nullptr));
        chk_vtk->setText(QCoreApplication::translate("ParaExportMeshSetup", "VTK(*.vtk)", nullptr));
        btnOk_2->setText(QCoreApplication::translate("ParaExportMeshSetup", "Ok", nullptr));
        btnCancel_2->setText(QCoreApplication::translate("ParaExportMeshSetup", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParaExportMeshSetup: public Ui_ParaExportMeshSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAEXPORTMESHSETUP_H
