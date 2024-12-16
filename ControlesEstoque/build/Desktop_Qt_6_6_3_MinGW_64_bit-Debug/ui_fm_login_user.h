/********************************************************************************
** Form generated from reading UI file 'fm_login_user.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_LOGIN_USER_H
#define UI_FM_LOGIN_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_Login_user
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *TXT_usename;
    QLineEdit *TXT_usersenha;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_logar;
    QPushButton *btn_sair;

    void setupUi(QDialog *fm_Login_user)
    {
        if (fm_Login_user->objectName().isEmpty())
            fm_Login_user->setObjectName("fm_Login_user");
        fm_Login_user->resize(358, 162);
        widget = new QWidget(fm_Login_user);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 40, 311, 88));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        TXT_usename = new QLineEdit(widget);
        TXT_usename->setObjectName("TXT_usename");

        verticalLayout_2->addWidget(TXT_usename);

        TXT_usersenha = new QLineEdit(widget);
        TXT_usersenha->setObjectName("TXT_usersenha");
        TXT_usersenha->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_2->addWidget(TXT_usersenha);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btn_logar = new QPushButton(widget);
        btn_logar->setObjectName("btn_logar");

        horizontalLayout_2->addWidget(btn_logar);

        btn_sair = new QPushButton(widget);
        btn_sair->setObjectName("btn_sair");

        horizontalLayout_2->addWidget(btn_sair);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(fm_Login_user);

        QMetaObject::connectSlotsByName(fm_Login_user);
    } // setupUi

    void retranslateUi(QDialog *fm_Login_user)
    {
        fm_Login_user->setWindowTitle(QCoreApplication::translate("fm_Login_user", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("fm_Login_user", "USER", nullptr));
        label_2->setText(QCoreApplication::translate("fm_Login_user", "SENHA", nullptr));
        btn_logar->setText(QCoreApplication::translate("fm_Login_user", "LOGAR", nullptr));
        btn_sair->setText(QCoreApplication::translate("fm_Login_user", "CANCELAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_Login_user: public Ui_fm_Login_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_LOGIN_USER_H
