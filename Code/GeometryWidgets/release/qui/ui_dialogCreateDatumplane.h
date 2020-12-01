/********************************************************************************
** Form generated from reading UI file 'dialogCreateDatumplane.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCREATEDATUMPLANE_H
#define UI_DIALOGCREATEDATUMPLANE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreateDatumplaneDialog
{
public:
    QGridLayout *gridLayout_4;
    QCheckBox *reversecheckBox;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEditDistance;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QLabel *edglabel;
    QPushButton *geoSelectSurface;

    void setupUi(QDialog *CreateDatumplaneDialog)
    {
        if (CreateDatumplaneDialog->objectName().isEmpty())
            CreateDatumplaneDialog->setObjectName(QString::fromUtf8("CreateDatumplaneDialog"));
        CreateDatumplaneDialog->resize(334, 191);
        gridLayout_4 = new QGridLayout(CreateDatumplaneDialog);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        reversecheckBox = new QCheckBox(CreateDatumplaneDialog);
        reversecheckBox->setObjectName(QString::fromUtf8("reversecheckBox"));

        gridLayout_4->addWidget(reversecheckBox, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(CreateDatumplaneDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 4, 0, 1, 1);

        groupBox_5 = new QGroupBox(CreateDatumplaneDialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        groupBox_5->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(groupBox_5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEditDistance = new QLineEdit(groupBox_5);
        lineEditDistance->setObjectName(QString::fromUtf8("lineEditDistance"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditDistance->sizePolicy().hasHeightForWidth());
        lineEditDistance->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lineEditDistance, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_5, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(CreateDatumplaneDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        edglabel = new QLabel(groupBox_3);
        edglabel->setObjectName(QString::fromUtf8("edglabel"));

        horizontalLayout->addWidget(edglabel);

        geoSelectSurface = new QPushButton(groupBox_3);
        geoSelectSurface->setObjectName(QString::fromUtf8("geoSelectSurface"));
        geoSelectSurface->setMinimumSize(QSize(32, 32));
        geoSelectSurface->setMaximumSize(QSize(32, 32));
        geoSelectSurface->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectface.png);"));

        horizontalLayout->addWidget(geoSelectSurface);


        gridLayout_4->addWidget(groupBox_3, 0, 0, 1, 1);


        retranslateUi(CreateDatumplaneDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateDatumplaneDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateDatumplaneDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateDatumplaneDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateDatumplaneDialog)
    {
        CreateDatumplaneDialog->setWindowTitle(QCoreApplication::translate("CreateDatumplaneDialog", "Create Datum", nullptr));
        reversecheckBox->setText(QCoreApplication::translate("CreateDatumplaneDialog", "Reverse", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("CreateDatumplaneDialog", "Distance", nullptr));
        label_2->setText(QCoreApplication::translate("CreateDatumplaneDialog", "Distance", nullptr));
        lineEditDistance->setText(QCoreApplication::translate("CreateDatumplaneDialog", "10.00", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("CreateDatumplaneDialog", "Select", nullptr));
        edglabel->setText(QCoreApplication::translate("CreateDatumplaneDialog", "Selected Plane", nullptr));
        geoSelectSurface->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CreateDatumplaneDialog: public Ui_CreateDatumplaneDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCREATEDATUMPLANE_H
