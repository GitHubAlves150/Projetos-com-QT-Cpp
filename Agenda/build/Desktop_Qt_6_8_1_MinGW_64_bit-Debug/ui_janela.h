/********************************************************************************
** Form generated from reading UI file 'janela.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELA_H
#define UI_JANELA_H

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

class Ui_Janela
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *txtusername;
    QLabel *txt_senha;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_senha;
    QPushButton *login;
    QVBoxLayout *verticalLayout_4;
    QLabel *banc_conectado;
    QLabel *banc_aberto;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Janela)
    {
        if (Janela->objectName().isEmpty())
            Janela->setObjectName("Janela");
        Janela->resize(227, 196);
        centralwidget = new QWidget(Janela);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 198, 134));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        txtusername = new QLabel(layoutWidget);
        txtusername->setObjectName("txtusername");

        verticalLayout->addWidget(txtusername);

        txt_senha = new QLabel(layoutWidget);
        txt_senha->setObjectName("txt_senha");

        verticalLayout->addWidget(txt_senha);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName("lineEdit_username");

        verticalLayout_2->addWidget(lineEdit_username);

        lineEdit_senha = new QLineEdit(layoutWidget);
        lineEdit_senha->setObjectName("lineEdit_senha");

        verticalLayout_2->addWidget(lineEdit_senha);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        login = new QPushButton(layoutWidget);
        login->setObjectName("login");

        verticalLayout_3->addWidget(login);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        banc_conectado = new QLabel(layoutWidget);
        banc_conectado->setObjectName("banc_conectado");

        verticalLayout_4->addWidget(banc_conectado);

        banc_aberto = new QLabel(layoutWidget);
        banc_aberto->setObjectName("banc_aberto");

        verticalLayout_4->addWidget(banc_aberto);


        verticalLayout_5->addLayout(verticalLayout_4);

        Janela->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Janela);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 227, 22));
        Janela->setMenuBar(menubar);
        statusbar = new QStatusBar(Janela);
        statusbar->setObjectName("statusbar");
        Janela->setStatusBar(statusbar);

        retranslateUi(Janela);

        QMetaObject::connectSlotsByName(Janela);
    } // setupUi

    void retranslateUi(QMainWindow *Janela)
    {
        Janela->setWindowTitle(QCoreApplication::translate("Janela", "Janela", nullptr));
        txtusername->setText(QCoreApplication::translate("Janela", "TextLabel", nullptr));
        txt_senha->setText(QCoreApplication::translate("Janela", "TextLabel", nullptr));
        login->setText(QCoreApplication::translate("Janela", "logini", nullptr));
        banc_conectado->setText(QCoreApplication::translate("Janela", "TextLabel", nullptr));
        banc_aberto->setText(QCoreApplication::translate("Janela", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Janela: public Ui_Janela {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELA_H
