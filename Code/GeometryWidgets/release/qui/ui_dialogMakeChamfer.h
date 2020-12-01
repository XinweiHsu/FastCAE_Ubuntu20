/********************************************************************************
** Form generated from reading UI file 'dialogMakeChamfer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMAKECHAMFER_H
#define UI_DIALOGMAKECHAMFER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreateChamferDialog
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *edgelabel;
    QPushButton *geoSelectCurve;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *comboBoxSection;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditDistance;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditDistance_2;
    QLabel *label_7;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateChamferDialog)
    {
        if (CreateChamferDialog->objectName().isEmpty())
            CreateChamferDialog->setObjectName(QString::fromUtf8("CreateChamferDialog"));
        CreateChamferDialog->resize(400, 225);
        gridLayout_3 = new QGridLayout(CreateChamferDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(CreateChamferDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        edgelabel = new QLabel(groupBox);
        edgelabel->setObjectName(QString::fromUtf8("edgelabel"));

        gridLayout->addWidget(edgelabel, 0, 0, 1, 1);

        geoSelectCurve = new QPushButton(groupBox);
        geoSelectCurve->setObjectName(QString::fromUtf8("geoSelectCurve"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(geoSelectCurve->sizePolicy().hasHeightForWidth());
        geoSelectCurve->setSizePolicy(sizePolicy);
        geoSelectCurve->setMinimumSize(QSize(32, 32));
        geoSelectCurve->setMaximumSize(QSize(32, 32));
        geoSelectCurve->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectwire.png);"));
        geoSelectCurve->setCheckable(true);
        geoSelectCurve->setChecked(false);

        gridLayout->addWidget(geoSelectCurve, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(CreateChamferDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        comboBoxSection = new QComboBox(groupBox_2);
        comboBoxSection->addItem(QString());
        comboBoxSection->addItem(QString());
        comboBoxSection->setObjectName(QString::fromUtf8("comboBoxSection"));

        gridLayout_2->addWidget(comboBoxSection, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditDistance = new QLineEdit(groupBox_2);
        lineEditDistance->setObjectName(QString::fromUtf8("lineEditDistance"));

        horizontalLayout_3->addWidget(lineEditDistance);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEditDistance_2 = new QLineEdit(groupBox_2);
        lineEditDistance_2->setObjectName(QString::fromUtf8("lineEditDistance_2"));

        horizontalLayout_4->addWidget(lineEditDistance_2);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 0, 1, 2);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(CreateChamferDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(CreateChamferDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateChamferDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateChamferDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateChamferDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateChamferDialog)
    {
        CreateChamferDialog->setWindowTitle(QCoreApplication::translate("CreateChamferDialog", "Create Chamfer", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CreateChamferDialog", "Edge", nullptr));
        edgelabel->setText(QCoreApplication::translate("CreateChamferDialog", "Selected edge(0)", nullptr));
        geoSelectCurve->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("CreateChamferDialog", "Distance", nullptr));
        label->setText(QCoreApplication::translate("CreateChamferDialog", "Section:", nullptr));
        comboBoxSection->setItemText(0, QCoreApplication::translate("CreateChamferDialog", "Symmetrical", nullptr));
        comboBoxSection->setItemText(1, QCoreApplication::translate("CreateChamferDialog", "Asymmetrical", nullptr));

        label_3->setText(QCoreApplication::translate("CreateChamferDialog", "Distance 1:", nullptr));
        lineEditDistance->setText(QCoreApplication::translate("CreateChamferDialog", "1.00", nullptr));
        label_6->setText(QCoreApplication::translate("CreateChamferDialog", "mm", nullptr));
        label_4->setText(QCoreApplication::translate("CreateChamferDialog", "Distance 2:", nullptr));
        lineEditDistance_2->setText(QCoreApplication::translate("CreateChamferDialog", "1.00", nullptr));
        label_7->setText(QCoreApplication::translate("CreateChamferDialog", "mm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateChamferDialog: public Ui_CreateChamferDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMAKECHAMFER_H
