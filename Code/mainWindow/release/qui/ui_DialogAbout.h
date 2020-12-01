/********************************************************************************
** Form generated from reading UI file 'DialogAbout.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGABOUT_H
#define UI_DIALOGABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *pic;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *corporation;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *website;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *email;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *out_OkButton;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(428, 172);
        gridLayout_2 = new QGridLayout(AboutDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pic = new QLabel(AboutDialog);
        pic->setObjectName(QString::fromUtf8("pic"));
        pic->setPixmap(QPixmap(QString::fromUtf8(":/QUI/icon/icon.png")));

        horizontalLayout_2->addWidget(pic);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(AboutDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        corporation = new QLabel(groupBox);
        corporation->setObjectName(QString::fromUtf8("corporation"));

        gridLayout->addWidget(corporation, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        website = new QLabel(groupBox);
        website->setObjectName(QString::fromUtf8("website"));

        horizontalLayout_3->addWidget(website);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        email = new QLabel(groupBox);
        email->setObjectName(QString::fromUtf8("email"));

        horizontalLayout_4->addWidget(email);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        out_OkButton = new QPushButton(AboutDialog);
        out_OkButton->setObjectName(QString::fromUtf8("out_OkButton"));

        horizontalLayout->addWidget(out_OkButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(AboutDialog);
        QObject::connect(out_OkButton, SIGNAL(clicked()), AboutDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About", nullptr));
        pic->setText(QString());
        groupBox->setTitle(QString());
        corporation->setText(QString());
        label_4->setText(QCoreApplication::translate("AboutDialog", "Copyright Reserved", nullptr));
        label_2->setText(QCoreApplication::translate("AboutDialog", "Website\357\274\232", nullptr));
        website->setText(QCoreApplication::translate("AboutDialog", "www.qianfankeji.cn", nullptr));
        label_3->setText(QCoreApplication::translate("AboutDialog", "EMail\357\274\232", nullptr));
        email->setText(QCoreApplication::translate("AboutDialog", "TextLabel", nullptr));
        out_OkButton->setText(QCoreApplication::translate("AboutDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGABOUT_H
