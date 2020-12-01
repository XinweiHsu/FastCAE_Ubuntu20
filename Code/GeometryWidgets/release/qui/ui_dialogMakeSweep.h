/********************************************************************************
** Form generated from reading UI file 'dialogMakeSweep.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMAKESWEEP_H
#define UI_DIALOGMAKESWEEP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SweepDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QLabel *edglabel;
    QPushButton *geoSelectCurve;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *pathlabel;
    QPushButton *geoSelectCurve_1;
    QCheckBox *solidCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SweepDialog)
    {
        if (SweepDialog->objectName().isEmpty())
            SweepDialog->setObjectName(QString::fromUtf8("SweepDialog"));
        SweepDialog->resize(342, 203);
        gridLayout = new QGridLayout(SweepDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_3 = new QGroupBox(SweepDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        edglabel = new QLabel(groupBox_3);
        edglabel->setObjectName(QString::fromUtf8("edglabel"));

        horizontalLayout->addWidget(edglabel);

        geoSelectCurve = new QPushButton(groupBox_3);
        geoSelectCurve->setObjectName(QString::fromUtf8("geoSelectCurve"));
        geoSelectCurve->setMinimumSize(QSize(32, 32));
        geoSelectCurve->setMaximumSize(QSize(32, 32));
        geoSelectCurve->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectwire.png);"));

        horizontalLayout->addWidget(geoSelectCurve);


        gridLayout->addWidget(groupBox_3, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(SweepDialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pathlabel = new QLabel(groupBox_4);
        pathlabel->setObjectName(QString::fromUtf8("pathlabel"));

        horizontalLayout_2->addWidget(pathlabel);

        geoSelectCurve_1 = new QPushButton(groupBox_4);
        geoSelectCurve_1->setObjectName(QString::fromUtf8("geoSelectCurve_1"));
        geoSelectCurve_1->setMinimumSize(QSize(32, 32));
        geoSelectCurve_1->setMaximumSize(QSize(32, 32));
        geoSelectCurve_1->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectwire.png);"));

        horizontalLayout_2->addWidget(geoSelectCurve_1);


        gridLayout->addWidget(groupBox_4, 1, 0, 1, 1);

        solidCheckBox = new QCheckBox(SweepDialog);
        solidCheckBox->setObjectName(QString::fromUtf8("solidCheckBox"));
        solidCheckBox->setLayoutDirection(Qt::LeftToRight);
        solidCheckBox->setChecked(true);

        gridLayout->addWidget(solidCheckBox, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(SweepDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(SweepDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SweepDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SweepDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SweepDialog);
    } // setupUi

    void retranslateUi(QDialog *SweepDialog)
    {
        SweepDialog->setWindowTitle(QCoreApplication::translate("SweepDialog", "Sweep", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("SweepDialog", "Section", nullptr));
        edglabel->setText(QCoreApplication::translate("SweepDialog", "Selected edge(0)", nullptr));
        geoSelectCurve->setText(QString());
        groupBox_4->setTitle(QCoreApplication::translate("SweepDialog", "Path", nullptr));
        pathlabel->setText(QCoreApplication::translate("SweepDialog", "Selected edge(0)", nullptr));
        geoSelectCurve_1->setText(QString());
#if QT_CONFIG(tooltip)
        solidCheckBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        solidCheckBox->setText(QCoreApplication::translate("SweepDialog", "Generate Solid", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SweepDialog: public Ui_SweepDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMAKESWEEP_H
