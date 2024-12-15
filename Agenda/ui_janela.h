/********************************************************************************
** Form generated from reading UI file 'janela.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
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
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *user;
    QLineEdit *password;
    QPushButton *login;
    QLabel *banc_conectado;
    QLabel *banc_aberto;
    QLabel *IMG;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Janela)
    {
        if (Janela->objectName().isEmpty())
            Janela->setObjectName("Janela");
        Janela->resize(454, 199);
        centralwidget = new QWidget(Janela);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 30, 197, 86));
        verticalLayout_8 = new QVBoxLayout(layoutWidget);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout_6->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout_6->addWidget(label_2);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        user = new QLineEdit(layoutWidget);
        user->setObjectName("user");

        verticalLayout_7->addWidget(user);

        password = new QLineEdit(layoutWidget);
        password->setObjectName("password");
        password->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_7->addWidget(password);


        horizontalLayout_2->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_2);

        login = new QPushButton(layoutWidget);
        login->setObjectName("login");

        verticalLayout_8->addWidget(login);

        banc_conectado = new QLabel(centralwidget);
        banc_conectado->setObjectName("banc_conectado");
        banc_conectado->setGeometry(QRect(10, 130, 101, 16));
        banc_aberto = new QLabel(centralwidget);
        banc_aberto->setObjectName("banc_aberto");
        banc_aberto->setGeometry(QRect(120, 130, 71, 16));
        IMG = new QLabel(centralwidget);
        IMG->setObjectName("IMG");
        IMG->setGeometry(QRect(280, 30, 101, 101));
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(IMG->sizePolicy().hasHeightForWidth());
        IMG->setSizePolicy(sizePolicy);
        Janela->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Janela);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 454, 22));
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
        label->setText(QCoreApplication::translate("Janela", "user", nullptr));
        label_2->setText(QCoreApplication::translate("Janela", "password", nullptr));
        login->setText(QCoreApplication::translate("Janela", "login", nullptr));
        banc_conectado->setText(QCoreApplication::translate("Janela", "TextLabel", nullptr));
        banc_aberto->setText(QCoreApplication::translate("Janela", "TextLabel", nullptr));
        IMG->setText(QCoreApplication::translate("Janela", "IMG", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Janela: public Ui_Janela {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELA_H
