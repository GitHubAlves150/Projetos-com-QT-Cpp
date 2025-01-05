/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
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
    QPushButton *btn_EixoA_Esquerda;
    QPushButton *btn_EixoA_Direita;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_EixoB_Esquerda;
    QPushButton *btn_EixoB_Direita;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btn_EixoC_Esquerda;
    QPushButton *btn_EixoC_Direita;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btn_EixoD_Esquerda;
    QPushButton *btn_EixoD_Direita;
    QWidget *widget4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *btn_EixoF_Esquerda;
    QPushButton *btn_EixoF_Direita;
    QWidget *widget5;
    QVBoxLayout *verticalLayout_6;
    QPushButton *btn_EixoE_Esquerda;
    QPushButton *btn_EixoE_Direita;
    QWidget *widget6;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QLabel *portaCom;
    QLabel *BaudRate;
    QPushButton *ConectarPortaCom;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(562, 492);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(220, 370, 77, 56));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_EixoA_Esquerda = new QPushButton(widget);
        btn_EixoA_Esquerda->setObjectName("btn_EixoA_Esquerda");

        verticalLayout->addWidget(btn_EixoA_Esquerda);

        btn_EixoA_Direita = new QPushButton(widget);
        btn_EixoA_Direita->setObjectName("btn_EixoA_Direita");

        verticalLayout->addWidget(btn_EixoA_Direita);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(220, 300, 77, 56));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_EixoB_Esquerda = new QPushButton(widget1);
        btn_EixoB_Esquerda->setObjectName("btn_EixoB_Esquerda");

        verticalLayout_2->addWidget(btn_EixoB_Esquerda);

        btn_EixoB_Direita = new QPushButton(widget1);
        btn_EixoB_Direita->setObjectName("btn_EixoB_Direita");

        verticalLayout_2->addWidget(btn_EixoB_Direita);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(220, 230, 77, 56));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_EixoC_Esquerda = new QPushButton(widget2);
        btn_EixoC_Esquerda->setObjectName("btn_EixoC_Esquerda");

        verticalLayout_3->addWidget(btn_EixoC_Esquerda);

        btn_EixoC_Direita = new QPushButton(widget2);
        btn_EixoC_Direita->setObjectName("btn_EixoC_Direita");

        verticalLayout_3->addWidget(btn_EixoC_Direita);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(220, 160, 77, 56));
        verticalLayout_4 = new QVBoxLayout(widget3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        btn_EixoD_Esquerda = new QPushButton(widget3);
        btn_EixoD_Esquerda->setObjectName("btn_EixoD_Esquerda");

        verticalLayout_4->addWidget(btn_EixoD_Esquerda);

        btn_EixoD_Direita = new QPushButton(widget3);
        btn_EixoD_Direita->setObjectName("btn_EixoD_Direita");

        verticalLayout_4->addWidget(btn_EixoD_Direita);

        widget4 = new QWidget(centralwidget);
        widget4->setObjectName("widget4");
        widget4->setGeometry(QRect(220, 30, 77, 56));
        verticalLayout_5 = new QVBoxLayout(widget4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        btn_EixoF_Esquerda = new QPushButton(widget4);
        btn_EixoF_Esquerda->setObjectName("btn_EixoF_Esquerda");

        verticalLayout_5->addWidget(btn_EixoF_Esquerda);

        btn_EixoF_Direita = new QPushButton(widget4);
        btn_EixoF_Direita->setObjectName("btn_EixoF_Direita");

        verticalLayout_5->addWidget(btn_EixoF_Direita);

        widget5 = new QWidget(centralwidget);
        widget5->setObjectName("widget5");
        widget5->setGeometry(QRect(220, 90, 77, 56));
        verticalLayout_6 = new QVBoxLayout(widget5);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        btn_EixoE_Esquerda = new QPushButton(widget5);
        btn_EixoE_Esquerda->setObjectName("btn_EixoE_Esquerda");

        verticalLayout_6->addWidget(btn_EixoE_Esquerda);

        btn_EixoE_Direita = new QPushButton(widget5);
        btn_EixoE_Direita->setObjectName("btn_EixoE_Direita");

        verticalLayout_6->addWidget(btn_EixoE_Direita);

        widget6 = new QWidget(centralwidget);
        widget6->setObjectName("widget6");
        widget6->setGeometry(QRect(380, 360, 171, 50));
        verticalLayout_7 = new QVBoxLayout(widget6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        portaCom = new QLabel(widget6);
        portaCom->setObjectName("portaCom");

        horizontalLayout->addWidget(portaCom);

        BaudRate = new QLabel(widget6);
        BaudRate->setObjectName("BaudRate");

        horizontalLayout->addWidget(BaudRate);


        verticalLayout_7->addLayout(horizontalLayout);

        ConectarPortaCom = new QPushButton(widget6);
        ConectarPortaCom->setObjectName("ConectarPortaCom");

        verticalLayout_7->addWidget(ConectarPortaCom);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 562, 22));
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
        btn_EixoA_Esquerda->setText(QCoreApplication::translate("MainWindow", "Eixo A Esq", nullptr));
        btn_EixoA_Direita->setText(QCoreApplication::translate("MainWindow", "Eixo A Dir", nullptr));
        btn_EixoB_Esquerda->setText(QCoreApplication::translate("MainWindow", "Eixo B Esq", nullptr));
        btn_EixoB_Direita->setText(QCoreApplication::translate("MainWindow", "Eixo B Dir", nullptr));
        btn_EixoC_Esquerda->setText(QCoreApplication::translate("MainWindow", "Eixo C Esq", nullptr));
        btn_EixoC_Direita->setText(QCoreApplication::translate("MainWindow", "Eixo C Dir", nullptr));
        btn_EixoD_Esquerda->setText(QCoreApplication::translate("MainWindow", "Eixo D Esq", nullptr));
        btn_EixoD_Direita->setText(QCoreApplication::translate("MainWindow", "Eixo D Dir", nullptr));
        btn_EixoF_Esquerda->setText(QCoreApplication::translate("MainWindow", "Eixo F Esq", nullptr));
        btn_EixoF_Direita->setText(QCoreApplication::translate("MainWindow", "Eixo F Dir", nullptr));
        btn_EixoE_Esquerda->setText(QCoreApplication::translate("MainWindow", "Eixo E Esq", nullptr));
        btn_EixoE_Direita->setText(QCoreApplication::translate("MainWindow", "Eixo E Dir", nullptr));
        portaCom->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        BaudRate->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        ConectarPortaCom->setText(QCoreApplication::translate("MainWindow", "Conectar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
