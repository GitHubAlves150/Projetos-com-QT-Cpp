/********************************************************************************
** Form generated from reading UI file 'janelalogin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELALOGIN_H
#define UI_JANELALOGIN_H

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

class Ui_janelaLOGIN
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *txt_username;
    QLabel *txt_senha;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *user_lineEdit;
    QLineEdit *senha_lineEdit;
    QPushButton *Login_pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *janelaLOGIN)
    {
        if (janelaLOGIN->objectName().isEmpty())
            janelaLOGIN->setObjectName("janelaLOGIN");
        janelaLOGIN->resize(422, 292);
        centralwidget = new QWidget(janelaLOGIN);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 435, 261, 31));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 196, 86));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        txt_username = new QLabel(layoutWidget);
        txt_username->setObjectName("txt_username");

        verticalLayout->addWidget(txt_username);

        txt_senha = new QLabel(layoutWidget);
        txt_senha->setObjectName("txt_senha");

        verticalLayout->addWidget(txt_senha);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        user_lineEdit = new QLineEdit(layoutWidget);
        user_lineEdit->setObjectName("user_lineEdit");

        verticalLayout_2->addWidget(user_lineEdit);

        senha_lineEdit = new QLineEdit(layoutWidget);
        senha_lineEdit->setObjectName("senha_lineEdit");

        verticalLayout_2->addWidget(senha_lineEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        Login_pushButton = new QPushButton(layoutWidget);
        Login_pushButton->setObjectName("Login_pushButton");

        verticalLayout_3->addWidget(Login_pushButton);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 120, 201, 40));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout_4->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout_4->addWidget(label_3);

        janelaLOGIN->setCentralWidget(centralwidget);
        menubar = new QMenuBar(janelaLOGIN);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 422, 22));
        janelaLOGIN->setMenuBar(menubar);
        statusbar = new QStatusBar(janelaLOGIN);
        statusbar->setObjectName("statusbar");
        janelaLOGIN->setStatusBar(statusbar);

        retranslateUi(janelaLOGIN);

        QMetaObject::connectSlotsByName(janelaLOGIN);
    } // setupUi

    void retranslateUi(QMainWindow *janelaLOGIN)
    {
        janelaLOGIN->setWindowTitle(QCoreApplication::translate("janelaLOGIN", "janelaLOGIN", nullptr));
        label->setText(QCoreApplication::translate("janelaLOGIN", "TextLabel", nullptr));
        txt_username->setText(QCoreApplication::translate("janelaLOGIN", "user name", nullptr));
        txt_senha->setText(QCoreApplication::translate("janelaLOGIN", "senha", nullptr));
        Login_pushButton->setText(QCoreApplication::translate("janelaLOGIN", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("janelaLOGIN", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("janelaLOGIN", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class janelaLOGIN: public Ui_janelaLOGIN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELALOGIN_H
