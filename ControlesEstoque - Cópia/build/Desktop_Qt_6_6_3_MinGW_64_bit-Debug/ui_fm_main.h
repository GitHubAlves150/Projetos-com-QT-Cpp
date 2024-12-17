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
#include <QtWidgets/QLabel>
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
    QPushButton *btn_nova_venda;
    QLabel *txt_userlogado;
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
        centralwidget->setEnabled(true);
        btn_blockANDunblock = new QPushButton(centralwidget);
        btn_blockANDunblock->setObjectName("btn_blockANDunblock");
        btn_blockANDunblock->setGeometry(QRect(10, 340, 51, 31));
        btn_blockANDunblock->setStyleSheet(QString::fromUtf8(""));
        btn_blockANDunblock->setIconSize(QSize(16, 16));
        btn_blockANDunblock->setFlat(true);
        btn_nova_venda = new QPushButton(centralwidget);
        btn_nova_venda->setObjectName("btn_nova_venda");
        btn_nova_venda->setEnabled(true);
        btn_nova_venda->setGeometry(QRect(10, 20, 91, 31));
        btn_nova_venda->setAutoFillBackground(false);
        btn_nova_venda->setStyleSheet(QString::fromUtf8("QPushButton#btn_nova_venda {\n"
"background-color: #2a34cd; /* Azul */ \n"
"color: white;\n"
"border: none;\n"
"border-radius: 12px\n"
"}\n"
"\n"
"QPushButton#btn_nova_venda:hover {\n"
" background-color: #936902;\n"
"  color: white;\n"
"}\n"
"\n"
"QPushButton#btn_nova_venda:pressed {\n"
"    background-color: #755302; /* Cor ao pressionar */\n"
"}\n"
""));
        txt_userlogado = new QLabel(centralwidget);
        txt_userlogado->setObjectName("txt_userlogado");
        txt_userlogado->setGeometry(QRect(60, 350, 141, 16));
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
        btn_nova_venda->setText(QCoreApplication::translate("FM_Main", "Nova Venda", nullptr));
        txt_userlogado->setText(QCoreApplication::translate("FM_Main", "Nome Logado", nullptr));
        menuGestao->setTitle(QCoreApplication::translate("FM_Main", "Gestao", nullptr));
        menuSistema->setTitle(QCoreApplication::translate("FM_Main", "Sistema", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FM_Main: public Ui_FM_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_MAIN_H
