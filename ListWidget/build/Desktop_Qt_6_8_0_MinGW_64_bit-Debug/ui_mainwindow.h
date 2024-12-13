/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txt_item;
    QPushButton *btn_add_itens;
    QPushButton *btn_addSeveral;
    QPushButton *bnt_marcar;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(480, 327);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 20, 380, 226));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        txt_item = new QLineEdit(widget);
        txt_item->setObjectName("txt_item");

        horizontalLayout->addWidget(txt_item);

        btn_add_itens = new QPushButton(widget);
        btn_add_itens->setObjectName("btn_add_itens");

        horizontalLayout->addWidget(btn_add_itens);

        btn_addSeveral = new QPushButton(widget);
        btn_addSeveral->setObjectName("btn_addSeveral");

        horizontalLayout->addWidget(btn_addSeveral);

        bnt_marcar = new QPushButton(widget);
        bnt_marcar->setObjectName("bnt_marcar");

        horizontalLayout->addWidget(bnt_marcar);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(widget);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 480, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_add_itens->setText(QCoreApplication::translate("MainWindow", "Adicionar", nullptr));
        btn_addSeveral->setText(QCoreApplication::translate("MainWindow", "Adicionar*", nullptr));
        bnt_marcar->setText(QCoreApplication::translate("MainWindow", "Marcar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
