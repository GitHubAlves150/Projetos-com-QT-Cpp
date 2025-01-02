/********************************************************************************
** Form generated from reading UI file 'qteste.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTESTE_H
#define UI_QTESTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qteste
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Qteste)
    {
        if (Qteste->objectName().isEmpty())
            Qteste->setObjectName("Qteste");
        Qteste->resize(800, 600);
        centralwidget = new QWidget(Qteste);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 60, 75, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 120, 75, 24));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(210, 120, 491, 351));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        Qteste->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Qteste);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Qteste->setMenuBar(menubar);
        statusbar = new QStatusBar(Qteste);
        statusbar->setObjectName("statusbar");
        Qteste->setStatusBar(statusbar);

        retranslateUi(Qteste);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Qteste);
    } // setupUi

    void retranslateUi(QMainWindow *Qteste)
    {
        Qteste->setWindowTitle(QCoreApplication::translate("Qteste", "Qteste", nullptr));
        pushButton->setText(QCoreApplication::translate("Qteste", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Qteste", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Qteste: public Ui_Qteste {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTESTE_H
