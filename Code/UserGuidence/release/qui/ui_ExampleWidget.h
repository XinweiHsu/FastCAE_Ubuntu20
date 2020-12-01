/********************************************************************************
** Form generated from reading UI file 'ExampleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMPLEWIDGET_H
#define UI_EXAMPLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExampleWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *piclabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *openButton;
    QPushButton *detailsButton;
    QPushButton *viewButton;

    void setupUi(QWidget *ExampleWidget)
    {
        if (ExampleWidget->objectName().isEmpty())
            ExampleWidget->setObjectName(QString::fromUtf8("ExampleWidget"));
        ExampleWidget->resize(400, 400);
        ExampleWidget->setMinimumSize(QSize(0, 400));
        ExampleWidget->setMaximumSize(QSize(16777215, 400));
        gridLayout = new QGridLayout(ExampleWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        piclabel = new QLabel(ExampleWidget);
        piclabel->setObjectName(QString::fromUtf8("piclabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(piclabel->sizePolicy().hasHeightForWidth());
        piclabel->setSizePolicy(sizePolicy);
        piclabel->setMinimumSize(QSize(300, 300));

        gridLayout->addWidget(piclabel, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        openButton = new QPushButton(ExampleWidget);
        openButton->setObjectName(QString::fromUtf8("openButton"));

        horizontalLayout->addWidget(openButton);

        detailsButton = new QPushButton(ExampleWidget);
        detailsButton->setObjectName(QString::fromUtf8("detailsButton"));

        horizontalLayout->addWidget(detailsButton);

        viewButton = new QPushButton(ExampleWidget);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));

        horizontalLayout->addWidget(viewButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(ExampleWidget);

        QMetaObject::connectSlotsByName(ExampleWidget);
    } // setupUi

    void retranslateUi(QWidget *ExampleWidget)
    {
        ExampleWidget->setWindowTitle(QCoreApplication::translate("ExampleWidget", "Form", nullptr));
        piclabel->setText(QString());
        openButton->setText(QCoreApplication::translate("ExampleWidget", "Open Dir", nullptr));
        detailsButton->setText(QCoreApplication::translate("ExampleWidget", "Details", nullptr));
        viewButton->setText(QCoreApplication::translate("ExampleWidget", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExampleWidget: public Ui_ExampleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMPLEWIDGET_H
