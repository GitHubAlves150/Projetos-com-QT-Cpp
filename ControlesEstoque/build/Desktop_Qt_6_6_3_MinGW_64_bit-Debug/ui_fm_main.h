/********************************************************************************
** Form generated from reading UI file 'fm_main.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_MAIN_H
#define UI_FM_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FM_Main
{
public:
    QAction *actionEstoque;
    QAction *actionColaboradores;
    QAction *actionVendas;
    QAction *actionSair;
    QAction *actionSobre;
    QWidget *centralwidget;
    QPushButton *btn_blockANDunblock;
    QPushButton *myButton;
    QMenuBar *menubar;
    QMenu *menuGestao;
    QMenu *menuSistema;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FM_Main)
    {
        if (FM_Main->objectName().isEmpty())
            FM_Main->setObjectName("FM_Main");
        FM_Main->resize(713, 420);
        FM_Main->setStyleSheet(QString::fromUtf8(""));
        FM_Main->setIconSize(QSize(40, 40));
        actionEstoque = new QAction(FM_Main);
        actionEstoque->setObjectName("actionEstoque");
        actionColaboradores = new QAction(FM_Main);
        actionColaboradores->setObjectName("actionColaboradores");
        actionVendas = new QAction(FM_Main);
        actionVendas->setObjectName("actionVendas");
        actionSair = new QAction(FM_Main);
        actionSair->setObjectName("actionSair");
        actionSobre = new QAction(FM_Main);
        actionSobre->setObjectName("actionSobre");
        centralwidget = new QWidget(FM_Main);
        centralwidget->setObjectName("centralwidget");
        btn_blockANDunblock = new QPushButton(centralwidget);
        btn_blockANDunblock->setObjectName("btn_blockANDunblock");
        btn_blockANDunblock->setGeometry(QRect(0, 350, 51, 31));
        btn_blockANDunblock->setStyleSheet(QString::fromUtf8(""));
        btn_blockANDunblock->setIconSize(QSize(16, 16));
        btn_blockANDunblock->setFlat(true);
        myButton = new QPushButton(centralwidget);
        myButton->setObjectName("myButton");
        myButton->setEnabled(true);
        myButton->setGeometry(QRect(10, 20, 181, 41));
        myButton->setAutoFillBackground(false);
        myButton->setStyleSheet(QString::fromUtf8("QPushButton#myButton {\n"
"background-color: #2a34cd; /* Azul */ \n"
"color: white;\n"
"border: none;\n"
"border-radius: 12px\n"
"}\n"
"\n"
"QPushButton#myButton:hover {\n"
" background-color: #936902;\n"
"  color: white;\n"
"}\n"
"\n"
"QPushButton#myButton:pressed {\n"
"    background-color: #755302; /* Cor ao pressionar */\n"
"}\n"
""));
        FM_Main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FM_Main);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 713, 22));
        menuGestao = new QMenu(menubar);
        menuGestao->setObjectName("menuGestao");
        menuSistema = new QMenu(menubar);
        menuSistema->setObjectName("menuSistema");
        FM_Main->setMenuBar(menubar);
        statusbar = new QStatusBar(FM_Main);
        statusbar->setObjectName("statusbar");
        FM_Main->setStatusBar(statusbar);

        menubar->addAction(menuGestao->menuAction());
        menubar->addAction(menuSistema->menuAction());
        menuGestao->addAction(actionEstoque);
        menuGestao->addAction(actionColaboradores);
        menuGestao->addAction(actionVendas);
        menuSistema->addAction(actionSair);
        menuSistema->addAction(actionSobre);

        retranslateUi(FM_Main);

        QMetaObject::connectSlotsByName(FM_Main);
    } // setupUi

    void retranslateUi(QMainWindow *FM_Main)
    {
        FM_Main->setWindowTitle(QCoreApplication::translate("FM_Main", "FM_Main", nullptr));
        actionEstoque->setText(QCoreApplication::translate("FM_Main", "Estoque", nullptr));
        actionColaboradores->setText(QCoreApplication::translate("FM_Main", "Colaboradores", nullptr));
        actionVendas->setText(QCoreApplication::translate("FM_Main", "Vendas", nullptr));
        actionSair->setText(QCoreApplication::translate("FM_Main", "Sair", nullptr));
        actionSobre->setText(QCoreApplication::translate("FM_Main", "Sobre", nullptr));
        btn_blockANDunblock->setText(QString());
        myButton->setText(QCoreApplication::translate("FM_Main", "Nova Venda", nullptr));
        menuGestao->setTitle(QCoreApplication::translate("FM_Main", "Gestao", nullptr));
        menuSistema->setTitle(QCoreApplication::translate("FM_Main", "Sistema", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FM_Main: public Ui_FM_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_MAIN_H
