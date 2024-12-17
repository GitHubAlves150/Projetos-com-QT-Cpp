/********************************************************************************
** Form generated from reading UI file 'fm_gestaoestoque.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_GESTAOESTOQUE_H
#define UI_FM_GESTAOESTOQUE_H

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

class Ui_fm_gestaoEstoque
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QLineEdit *txt_codproduto;
    QLineEdit *txt_decricaoproduto;
    QLineEdit *txt_qtdEstoque;
    QLineEdit *txt_Fornecedor;
    QLineEdit *txt_ValorCompra;
    QLineEdit *txt_Valorvenda;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_Novo;
    QPushButton *btn_gravar;

    void setupUi(QDialog *fm_gestaoEstoque)
    {
        if (fm_gestaoEstoque->objectName().isEmpty())
            fm_gestaoEstoque->setObjectName("fm_gestaoEstoque");
        fm_gestaoEstoque->resize(687, 269);
        widget = new QWidget(fm_gestaoEstoque);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 661, 200));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        verticalLayout_2->addWidget(label_6);

        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        txt_codproduto = new QLineEdit(widget);
        txt_codproduto->setObjectName("txt_codproduto");

        verticalLayout->addWidget(txt_codproduto);

        txt_decricaoproduto = new QLineEdit(widget);
        txt_decricaoproduto->setObjectName("txt_decricaoproduto");

        verticalLayout->addWidget(txt_decricaoproduto);

        txt_qtdEstoque = new QLineEdit(widget);
        txt_qtdEstoque->setObjectName("txt_qtdEstoque");

        verticalLayout->addWidget(txt_qtdEstoque);

        txt_Fornecedor = new QLineEdit(widget);
        txt_Fornecedor->setObjectName("txt_Fornecedor");

        verticalLayout->addWidget(txt_Fornecedor);

        txt_ValorCompra = new QLineEdit(widget);
        txt_ValorCompra->setObjectName("txt_ValorCompra");

        verticalLayout->addWidget(txt_ValorCompra);

        txt_Valorvenda = new QLineEdit(widget);
        txt_Valorvenda->setObjectName("txt_Valorvenda");

        verticalLayout->addWidget(txt_Valorvenda);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btn_Novo = new QPushButton(widget);
        btn_Novo->setObjectName("btn_Novo");

        horizontalLayout_2->addWidget(btn_Novo);

        btn_gravar = new QPushButton(widget);
        btn_gravar->setObjectName("btn_gravar");

        horizontalLayout_2->addWidget(btn_gravar);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(fm_gestaoEstoque);

        QMetaObject::connectSlotsByName(fm_gestaoEstoque);
    } // setupUi

    void retranslateUi(QDialog *fm_gestaoEstoque)
    {
        fm_gestaoEstoque->setWindowTitle(QCoreApplication::translate("fm_gestaoEstoque", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("fm_gestaoEstoque", "Cod.Prod", nullptr));
        label->setText(QCoreApplication::translate("fm_gestaoEstoque", "Desc.Produto", nullptr));
        label_2->setText(QCoreApplication::translate("fm_gestaoEstoque", "Qnt.Estoque", nullptr));
        label_3->setText(QCoreApplication::translate("fm_gestaoEstoque", "Fornecedor", nullptr));
        label_4->setText(QCoreApplication::translate("fm_gestaoEstoque", "Valor Comp", nullptr));
        label_5->setText(QCoreApplication::translate("fm_gestaoEstoque", "Valor.Venda", nullptr));
        btn_Novo->setText(QCoreApplication::translate("fm_gestaoEstoque", "NOVO", nullptr));
        btn_gravar->setText(QCoreApplication::translate("fm_gestaoEstoque", "GRAVAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_gestaoEstoque: public Ui_fm_gestaoEstoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_GESTAOESTOQUE_H
