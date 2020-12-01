/********************************************************************************
** Form generated from reading UI file 'ParameterGroupLabel.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETERGROUPLABEL_H
#define UI_PARAMETERGROUPLABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParameterGroupLabel
{
public:
    QGridLayout *gridLayout;
    QLabel *icon;
    QLabel *text;
    QLabel *spacelabel;

    void setupUi(QWidget *ParameterGroupLabel)
    {
        if (ParameterGroupLabel->objectName().isEmpty())
            ParameterGroupLabel->setObjectName(QString::fromUtf8("ParameterGroupLabel"));
        ParameterGroupLabel->resize(400, 24);
        gridLayout = new QGridLayout(ParameterGroupLabel);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(7);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        icon = new QLabel(ParameterGroupLabel);
        icon->setObjectName(QString::fromUtf8("icon"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(icon->sizePolicy().hasHeightForWidth());
        icon->setSizePolicy(sizePolicy);
        icon->setMinimumSize(QSize(11, 0));

        gridLayout->addWidget(icon, 0, 1, 1, 1);

        text = new QLabel(ParameterGroupLabel);
        text->setObjectName(QString::fromUtf8("text"));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(12);
        text->setFont(font);

        gridLayout->addWidget(text, 0, 2, 1, 1);

        spacelabel = new QLabel(ParameterGroupLabel);
        spacelabel->setObjectName(QString::fromUtf8("spacelabel"));
        sizePolicy.setHeightForWidth(spacelabel->sizePolicy().hasHeightForWidth());
        spacelabel->setSizePolicy(sizePolicy);
        spacelabel->setMinimumSize(QSize(11, 0));

        gridLayout->addWidget(spacelabel, 0, 0, 1, 1);


        retranslateUi(ParameterGroupLabel);

        QMetaObject::connectSlotsByName(ParameterGroupLabel);
    } // setupUi

    void retranslateUi(QWidget *ParameterGroupLabel)
    {
        ParameterGroupLabel->setWindowTitle(QCoreApplication::translate("ParameterGroupLabel", "Form", nullptr));
        icon->setText(QString());
        text->setText(QString());
        spacelabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ParameterGroupLabel: public Ui_ParameterGroupLabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETERGROUPLABEL_H
