/********************************************************************************
** Form generated from reading UI file 'StartPage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTPAGE_H
#define UI_STARTPAGE_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartPage
{
public:
    QGridLayout *gridLayout;
    QWebEngineView *webView;

    void setupUi(QWidget *StartPage)
    {
        if (StartPage->objectName().isEmpty())
            StartPage->setObjectName(QString::fromUtf8("StartPage"));
        StartPage->resize(400, 300);
        gridLayout = new QGridLayout(StartPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        webView = new QWebEngineView(StartPage);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout->addWidget(webView, 0, 0, 1, 1);


        retranslateUi(StartPage);

        QMetaObject::connectSlotsByName(StartPage);
    } // setupUi

    void retranslateUi(QWidget *StartPage)
    {
        StartPage->setWindowTitle(QCoreApplication::translate("StartPage", "Start Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartPage: public Ui_StartPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTPAGE_H
