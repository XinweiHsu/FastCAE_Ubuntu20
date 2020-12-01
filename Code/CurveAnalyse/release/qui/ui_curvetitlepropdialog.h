/********************************************************************************
** Form generated from reading UI file 'curvetitlepropdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURVETITLEPROPDIALOG_H
#define UI_CURVETITLEPROPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_curveTitlePropDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *title_name_lineEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *title_fontType_comboBox;
    QLabel *label_3;
    QPushButton *title_fontColor_pushButton;
    QLabel *label_4;
    QSpinBox *title_fontSize_spinBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *curveTitlePropDialog)
    {
        if (curveTitlePropDialog->objectName().isEmpty())
            curveTitlePropDialog->setObjectName(QString::fromUtf8("curveTitlePropDialog"));
        curveTitlePropDialog->resize(350, 186);
        verticalLayout = new QVBoxLayout(curveTitlePropDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(curveTitlePropDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        title_name_lineEdit = new QLineEdit(curveTitlePropDialog);
        title_name_lineEdit->setObjectName(QString::fromUtf8("title_name_lineEdit"));

        horizontalLayout->addWidget(title_name_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        groupBox = new QGroupBox(curveTitlePropDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        title_fontType_comboBox = new QComboBox(groupBox);
        title_fontType_comboBox->addItem(QString());
        title_fontType_comboBox->addItem(QString());
        title_fontType_comboBox->addItem(QString());
        title_fontType_comboBox->setObjectName(QString::fromUtf8("title_fontType_comboBox"));

        gridLayout->addWidget(title_fontType_comboBox, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        title_fontColor_pushButton = new QPushButton(groupBox);
        title_fontColor_pushButton->setObjectName(QString::fromUtf8("title_fontColor_pushButton"));

        gridLayout->addWidget(title_fontColor_pushButton, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        title_fontSize_spinBox = new QSpinBox(groupBox);
        title_fontSize_spinBox->setObjectName(QString::fromUtf8("title_fontSize_spinBox"));
        title_fontSize_spinBox->setMinimum(1);
        title_fontSize_spinBox->setMaximum(20);
        title_fontSize_spinBox->setValue(8);

        gridLayout->addWidget(title_fontSize_spinBox, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 56, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(curveTitlePropDialog);

        QMetaObject::connectSlotsByName(curveTitlePropDialog);
    } // setupUi

    void retranslateUi(QDialog *curveTitlePropDialog)
    {
        curveTitlePropDialog->setWindowTitle(QCoreApplication::translate("curveTitlePropDialog", "Title Property", nullptr));
        label->setText(QCoreApplication::translate("curveTitlePropDialog", "title name", nullptr));
        groupBox->setTitle(QCoreApplication::translate("curveTitlePropDialog", "font", nullptr));
        label_2->setText(QCoreApplication::translate("curveTitlePropDialog", "type", nullptr));
        title_fontType_comboBox->setItemText(0, QCoreApplication::translate("curveTitlePropDialog", "Song", nullptr));
        title_fontType_comboBox->setItemText(1, QCoreApplication::translate("curveTitlePropDialog", "Hei", nullptr));
        title_fontType_comboBox->setItemText(2, QCoreApplication::translate("curveTitlePropDialog", "Arial", nullptr));

        label_3->setText(QCoreApplication::translate("curveTitlePropDialog", "color", nullptr));
        title_fontColor_pushButton->setText(QString());
        label_4->setText(QCoreApplication::translate("curveTitlePropDialog", "size", nullptr));
    } // retranslateUi

};

namespace Ui {
    class curveTitlePropDialog: public Ui_curveTitlePropDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURVETITLEPROPDIALOG_H
