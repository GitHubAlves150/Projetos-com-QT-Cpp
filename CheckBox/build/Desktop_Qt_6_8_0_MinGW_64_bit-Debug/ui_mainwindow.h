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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
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
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(270, 140, 136, 118));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName("checkBox");

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName("checkBox_2");

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName("checkBox_3");

        verticalLayout->addWidget(checkBox_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_2->addWidget(pushButton_3);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);

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
        checkBox->setText(QCoreApplication::translate("MainWindow", "ch\303\241", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "caf\303\251", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "leite", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
