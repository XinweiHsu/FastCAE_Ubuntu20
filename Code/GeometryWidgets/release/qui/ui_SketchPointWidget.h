/********************************************************************************
** Form generated from reading UI file 'SketchPointWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKETCHPOINTWIDGET_H
#define UI_SKETCHPOINTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SketchPointWidget
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditX;
    QLabel *label_5;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditY;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *addButton;

    void setupUi(QDialog *SketchPointWidget)
    {
        if (SketchPointWidget->objectName().isEmpty())
            SketchPointWidget->setObjectName(QString::fromUtf8("SketchPointWidget"));
        SketchPointWidget->resize(205, 129);
        gridLayout_2 = new QGridLayout(SketchPointWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_2 = new QGroupBox(SketchPointWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEditX = new QLineEdit(groupBox_2);
        lineEditX->setObjectName(QString::fromUtf8("lineEditX"));

        horizontalLayout_2->addWidget(lineEditX);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEditY = new QLineEdit(groupBox_2);
        lineEditY->setObjectName(QString::fromUtf8("lineEditY"));

        horizontalLayout_3->addWidget(lineEditY);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(125, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        addButton = new QPushButton(SketchPointWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout_2->addWidget(addButton, 1, 1, 1, 1);


        retranslateUi(SketchPointWidget);

        QMetaObject::connectSlotsByName(SketchPointWidget);
    } // setupUi

    void retranslateUi(QDialog *SketchPointWidget)
    {
        SketchPointWidget->setWindowTitle(QCoreApplication::translate("SketchPointWidget", "Input Sketch Point", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SketchPointWidget", "Coordinate", nullptr));
        label_2->setText(QCoreApplication::translate("SketchPointWidget", "X:", nullptr));
        lineEditX->setText(QCoreApplication::translate("SketchPointWidget", "0.00", nullptr));
        label_5->setText(QCoreApplication::translate("SketchPointWidget", "mm", nullptr));
        label_3->setText(QCoreApplication::translate("SketchPointWidget", "Y:", nullptr));
        lineEditY->setText(QCoreApplication::translate("SketchPointWidget", "0.00", nullptr));
        label_7->setText(QCoreApplication::translate("SketchPointWidget", "mm", nullptr));
        addButton->setText(QCoreApplication::translate("SketchPointWidget", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SketchPointWidget: public Ui_SketchPointWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKETCHPOINTWIDGET_H
