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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QPushButton *curso_Btn;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Txt_nome;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Txt_Email;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_ok;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 573);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        curso_Btn = new QPushButton(centralwidget);
        curso_Btn->setObjectName("curso_Btn");
        curso_Btn->setGeometry(QRect(510, 140, 75, 24));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(140, 40, 441, 88));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        Txt_nome = new QLineEdit(widget);
        Txt_nome->setObjectName("Txt_nome");

        horizontalLayout_2->addWidget(Txt_nome);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        Txt_Email = new QLineEdit(widget);
        Txt_Email->setObjectName("Txt_Email");

        horizontalLayout->addWidget(Txt_Email);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btn_ok = new QPushButton(widget);
        btn_ok->setObjectName("btn_ok");

        horizontalLayout_3->addWidget(btn_ok);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        curso_Btn->setText(QCoreApplication::translate("MainWindow", "Btn", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Email ", nullptr));
        btn_ok->setText(QCoreApplication::translate("MainWindow", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
