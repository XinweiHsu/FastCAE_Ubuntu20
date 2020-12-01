/********************************************************************************
** Form generated from reading UI file 'messageWindowBase.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEWINDOWBASE_H
#define UI_MESSAGEWINDOWBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageWindow
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QSplitter *panelSplitter;
    QTextEdit *textEdit;

    void setupUi(QDockWidget *MessageWindow)
    {
        if (MessageWindow->objectName().isEmpty())
            MessageWindow->setObjectName(QString::fromUtf8("MessageWindow"));
        MessageWindow->resize(338, 114);
        MessageWindow->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        MessageWindow->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(dockWidgetContents);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(1, 1, 1, 1);
        panelSplitter = new QSplitter(widget);
        panelSplitter->setObjectName(QString::fromUtf8("panelSplitter"));
        panelSplitter->setOrientation(Qt::Vertical);
        textEdit = new QTextEdit(panelSplitter);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        panelSplitter->addWidget(textEdit);

        gridLayout_4->addWidget(panelSplitter, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        MessageWindow->setWidget(dockWidgetContents);

        retranslateUi(MessageWindow);

        QMetaObject::connectSlotsByName(MessageWindow);
    } // setupUi

    void retranslateUi(QDockWidget *MessageWindow)
    {
        MessageWindow->setWindowTitle(QCoreApplication::translate("MessageWindow", "Console", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessageWindow: public Ui_MessageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEWINDOWBASE_H
