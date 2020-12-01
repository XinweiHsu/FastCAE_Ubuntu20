/********************************************************************************
** Form generated from reading UI file 'DialogUserGuidence.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGUSERGUIDENCE_H
#define UI_DIALOGUSERGUIDENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserGuidenceDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *notshowBox;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *documentButton;
    QPushButton *exampleButton;
    QLabel *picLabel;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *example_L;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *example_R;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *UserGuidenceDialog)
    {
        if (UserGuidenceDialog->objectName().isEmpty())
            UserGuidenceDialog->setObjectName(QString::fromUtf8("UserGuidenceDialog"));
        UserGuidenceDialog->resize(964, 534);
        gridLayout = new QGridLayout(UserGuidenceDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        notshowBox = new QCheckBox(UserGuidenceDialog);
        notshowBox->setObjectName(QString::fromUtf8("notshowBox"));

        horizontalLayout->addWidget(notshowBox);

        backButton = new QPushButton(UserGuidenceDialog);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        horizontalLayout->addWidget(backButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(UserGuidenceDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout->addWidget(closeButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(UserGuidenceDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMaximumSize(QSize(16777215, 10000));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        gridLayout_4 = new QGridLayout(page_1);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        documentButton = new QPushButton(page_1);
        documentButton->setObjectName(QString::fromUtf8("documentButton"));

        horizontalLayout_2->addWidget(documentButton);

        exampleButton = new QPushButton(page_1);
        exampleButton->setObjectName(QString::fromUtf8("exampleButton"));

        horizontalLayout_2->addWidget(exampleButton);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        picLabel = new QLabel(page_1);
        picLabel->setObjectName(QString::fromUtf8("picLabel"));
        sizePolicy.setHeightForWidth(picLabel->sizePolicy().hasHeightForWidth());
        picLabel->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(picLabel, 0, 0, 1, 1);

        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea = new QScrollArea(page_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 926, 465));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        example_L = new QVBoxLayout();
        example_L->setObjectName(QString::fromUtf8("example_L"));

        verticalLayout->addLayout(example_L);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        example_R = new QVBoxLayout();
        example_R->setObjectName(QString::fromUtf8("example_R"));

        verticalLayout_2->addLayout(example_R);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout_3->addLayout(verticalLayout_2, 0, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(UserGuidenceDialog);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(UserGuidenceDialog);
    } // setupUi

    void retranslateUi(QDialog *UserGuidenceDialog)
    {
        UserGuidenceDialog->setWindowTitle(QCoreApplication::translate("UserGuidenceDialog", "User Guidence", nullptr));
        notshowBox->setText(QCoreApplication::translate("UserGuidenceDialog", "Don't show this window again", nullptr));
        backButton->setText(QCoreApplication::translate("UserGuidenceDialog", "Back", nullptr));
        closeButton->setText(QCoreApplication::translate("UserGuidenceDialog", "Close", nullptr));
        documentButton->setText(QCoreApplication::translate("UserGuidenceDialog", "View Document", nullptr));
        exampleButton->setText(QCoreApplication::translate("UserGuidenceDialog", "View Examples", nullptr));
        picLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserGuidenceDialog: public Ui_UserGuidenceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUSERGUIDENCE_H
