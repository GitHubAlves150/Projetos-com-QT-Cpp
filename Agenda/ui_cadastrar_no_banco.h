/********************************************************************************
** Form generated from reading UI file 'cadastrar_no_banco.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRAR_NO_BANCO_H
#define UI_CADASTRAR_NO_BANCO_H

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

class Ui_Cadastrar_no_banco
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *txtusername;
    QLabel *txt_senha;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *username_;
    QLineEdit *senha_;
    QPushButton *inserir;
    QVBoxLayout *verticalLayout_4;
    QLabel *banc_conectado_;
    QLabel *banc_aberto_;

    void setupUi(QDialog *Cadastrar_no_banco)
    {
        if (Cadastrar_no_banco->objectName().isEmpty())
            Cadastrar_no_banco->setObjectName("Cadastrar_no_banco");
        Cadastrar_no_banco->resize(400, 300);
        layoutWidget = new QWidget(Cadastrar_no_banco);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 70, 198, 134));
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
        username_ = new QLineEdit(layoutWidget);
        username_->setObjectName("username_");

        verticalLayout_2->addWidget(username_);

        senha_ = new QLineEdit(layoutWidget);
        senha_->setObjectName("senha_");

        verticalLayout_2->addWidget(senha_);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        inserir = new QPushButton(layoutWidget);
        inserir->setObjectName("inserir");

        verticalLayout_3->addWidget(inserir);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        banc_conectado_ = new QLabel(layoutWidget);
        banc_conectado_->setObjectName("banc_conectado_");

        verticalLayout_4->addWidget(banc_conectado_);

        banc_aberto_ = new QLabel(layoutWidget);
        banc_aberto_->setObjectName("banc_aberto_");

        verticalLayout_4->addWidget(banc_aberto_);


        verticalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(Cadastrar_no_banco);

        QMetaObject::connectSlotsByName(Cadastrar_no_banco);
    } // setupUi

    void retranslateUi(QDialog *Cadastrar_no_banco)
    {
        Cadastrar_no_banco->setWindowTitle(QCoreApplication::translate("Cadastrar_no_banco", "Dialog", nullptr));
        txtusername->setText(QCoreApplication::translate("Cadastrar_no_banco", "username", nullptr));
        txt_senha->setText(QCoreApplication::translate("Cadastrar_no_banco", "senha", nullptr));
        inserir->setText(QCoreApplication::translate("Cadastrar_no_banco", "inserir no banco", nullptr));
        banc_conectado_->setText(QCoreApplication::translate("Cadastrar_no_banco", "TextLabel", nullptr));
        banc_aberto_->setText(QCoreApplication::translate("Cadastrar_no_banco", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cadastrar_no_banco: public Ui_Cadastrar_no_banco {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRAR_NO_BANCO_H
