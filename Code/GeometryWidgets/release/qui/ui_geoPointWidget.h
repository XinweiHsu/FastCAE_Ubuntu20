/********************************************************************************
** Form generated from reading UI file 'geoPointWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEOPOINTWIDGET_H
#define UI_GEOPOINTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_geoPointWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditX;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditY;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditZ;
    QLabel *label_6;
    QPushButton *geoSelectPoint;

    void setupUi(QWidget *geoPointWidget)
    {
        if (geoPointWidget->objectName().isEmpty())
            geoPointWidget->setObjectName(QString::fromUtf8("geoPointWidget"));
        geoPointWidget->resize(646, 98);
        gridLayout = new QGridLayout(geoPointWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(geoPointWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditX = new QLineEdit(geoPointWidget);
        lineEditX->setObjectName(QString::fromUtf8("lineEditX"));

        horizontalLayout->addWidget(lineEditX);

        label_4 = new QLabel(geoPointWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(geoPointWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditY = new QLineEdit(geoPointWidget);
        lineEditY->setObjectName(QString::fromUtf8("lineEditY"));

        horizontalLayout_2->addWidget(lineEditY);

        label_5 = new QLabel(geoPointWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(geoPointWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditZ = new QLineEdit(geoPointWidget);
        lineEditZ->setObjectName(QString::fromUtf8("lineEditZ"));

        horizontalLayout_3->addWidget(lineEditZ);

        label_6 = new QLabel(geoPointWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        geoSelectPoint = new QPushButton(geoPointWidget);
        geoSelectPoint->setObjectName(QString::fromUtf8("geoSelectPoint"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(geoSelectPoint->sizePolicy().hasHeightForWidth());
        geoSelectPoint->setSizePolicy(sizePolicy);
        geoSelectPoint->setMinimumSize(QSize(32, 32));
        geoSelectPoint->setMaximumSize(QSize(32, 32));
        geoSelectPoint->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectpoint.png);"));
        geoSelectPoint->setCheckable(true);

        gridLayout->addWidget(geoSelectPoint, 0, 1, 1, 1);


        retranslateUi(geoPointWidget);

        QMetaObject::connectSlotsByName(geoPointWidget);
    } // setupUi

    void retranslateUi(QWidget *geoPointWidget)
    {
        geoPointWidget->setWindowTitle(QCoreApplication::translate("geoPointWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("geoPointWidget", "X:", nullptr));
        lineEditX->setText(QCoreApplication::translate("geoPointWidget", "0.00", nullptr));
        label_4->setText(QCoreApplication::translate("geoPointWidget", "mm", nullptr));
        label_2->setText(QCoreApplication::translate("geoPointWidget", "Y:", nullptr));
        lineEditY->setText(QCoreApplication::translate("geoPointWidget", "0.00", nullptr));
        label_5->setText(QCoreApplication::translate("geoPointWidget", "mm", nullptr));
        label_3->setText(QCoreApplication::translate("geoPointWidget", "Z:", nullptr));
        lineEditZ->setText(QCoreApplication::translate("geoPointWidget", "0.00", nullptr));
        label_6->setText(QCoreApplication::translate("geoPointWidget", "mm", nullptr));
        geoSelectPoint->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class geoPointWidget: public Ui_geoPointWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEOPOINTWIDGET_H
