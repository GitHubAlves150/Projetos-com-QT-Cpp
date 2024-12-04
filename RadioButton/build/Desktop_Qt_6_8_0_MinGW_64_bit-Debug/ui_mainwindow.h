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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *Cplusplus;
    QRadioButton *CSharp;
    QRadioButton *Java;
    QRadioButton *BancoDados;
    QPushButton *pushButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *Aviao;
    QRadioButton *Navio;
    QRadioButton *Helicop;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *Cor_vermelho;
    QRadioButton *Cor_Azul;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 20, 181, 151));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 30, 91, 100));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Cplusplus = new QRadioButton(widget);
        Cplusplus->setObjectName("Cplusplus");

        verticalLayout->addWidget(Cplusplus);

        CSharp = new QRadioButton(widget);
        CSharp->setObjectName("CSharp");

        verticalLayout->addWidget(CSharp);

        Java = new QRadioButton(widget);
        Java->setObjectName("Java");

        verticalLayout->addWidget(Java);

        BancoDados = new QRadioButton(widget);
        BancoDados->setObjectName("BancoDados");

        verticalLayout->addWidget(BancoDados);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(450, 90, 75, 24));
        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(270, 120, 87, 74));
        verticalLayout_5 = new QVBoxLayout(widget1);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        Aviao = new QRadioButton(widget1);
        Aviao->setObjectName("Aviao");

        verticalLayout_5->addWidget(Aviao);

        Navio = new QRadioButton(widget1);
        Navio->setObjectName("Navio");

        verticalLayout_5->addWidget(Navio);

        Helicop = new QRadioButton(widget1);
        Helicop->setObjectName("Helicop");

        verticalLayout_5->addWidget(Helicop);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(270, 30, 75, 48));
        verticalLayout_2 = new QVBoxLayout(widget2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Cor_vermelho = new QRadioButton(widget2);
        Cor_vermelho->setObjectName("Cor_vermelho");

        verticalLayout_2->addWidget(Cor_vermelho);

        Cor_Azul = new QRadioButton(widget2);
        Cor_Azul->setObjectName("Cor_Azul");

        verticalLayout_2->addWidget(Cor_Azul);

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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Linguagens de programa\303\247\303\243o", nullptr));
        Cplusplus->setText(QCoreApplication::translate("MainWindow", "c++", nullptr));
        CSharp->setText(QCoreApplication::translate("MainWindow", "c#", nullptr));
        Java->setText(QCoreApplication::translate("MainWindow", "java", nullptr));
        BancoDados->setText(QCoreApplication::translate("MainWindow", "DB", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Verificar", nullptr));
        Aviao->setText(QCoreApplication::translate("MainWindow", "Aviao", nullptr));
        Navio->setText(QCoreApplication::translate("MainWindow", "Navio", nullptr));
        Helicop->setText(QCoreApplication::translate("MainWindow", "Helicoptero", nullptr));
        Cor_vermelho->setText(QCoreApplication::translate("MainWindow", "Vermelho", nullptr));
        Cor_Azul->setText(QCoreApplication::translate("MainWindow", "Azul", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
