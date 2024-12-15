/********************************************************************************
** Form generated from reading UI file 'fm_pesquisacontatos.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PESQUISACONTATOS_H
#define UI_FM_PESQUISACONTATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fm_pesquisaContatos
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *btn_Search_Name;
    QLineEdit *txt_searchName;
    QPushButton *btn_search;
    QTableWidget *tw_contatos;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_deleteContact;
    QPushButton *btn_Edit;

    void setupUi(QDialog *Fm_pesquisaContatos)
    {
        if (Fm_pesquisaContatos->objectName().isEmpty())
            Fm_pesquisaContatos->setObjectName("Fm_pesquisaContatos");
        Fm_pesquisaContatos->resize(619, 313);
        widget = new QWidget(Fm_pesquisaContatos);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 30, 591, 260));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_Search_Name = new QLabel(widget);
        btn_Search_Name->setObjectName("btn_Search_Name");

        horizontalLayout->addWidget(btn_Search_Name);

        txt_searchName = new QLineEdit(widget);
        txt_searchName->setObjectName("txt_searchName");

        horizontalLayout->addWidget(txt_searchName);

        btn_search = new QPushButton(widget);
        btn_search->setObjectName("btn_search");

        horizontalLayout->addWidget(btn_search);


        verticalLayout->addLayout(horizontalLayout);

        tw_contatos = new QTableWidget(widget);
        tw_contatos->setObjectName("tw_contatos");

        verticalLayout->addWidget(tw_contatos);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btn_deleteContact = new QPushButton(widget);
        btn_deleteContact->setObjectName("btn_deleteContact");

        horizontalLayout_2->addWidget(btn_deleteContact);

        btn_Edit = new QPushButton(widget);
        btn_Edit->setObjectName("btn_Edit");

        horizontalLayout_2->addWidget(btn_Edit);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(Fm_pesquisaContatos);

        QMetaObject::connectSlotsByName(Fm_pesquisaContatos);
    } // setupUi

    void retranslateUi(QDialog *Fm_pesquisaContatos)
    {
        Fm_pesquisaContatos->setWindowTitle(QCoreApplication::translate("Fm_pesquisaContatos", "Dialog", nullptr));
        btn_Search_Name->setText(QCoreApplication::translate("Fm_pesquisaContatos", "Pesquisar nome", nullptr));
        btn_search->setText(QCoreApplication::translate("Fm_pesquisaContatos", "Pesquisar", nullptr));
        btn_deleteContact->setText(QCoreApplication::translate("Fm_pesquisaContatos", "Delete contacts", nullptr));
        btn_Edit->setText(QCoreApplication::translate("Fm_pesquisaContatos", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Fm_pesquisaContatos: public Ui_Fm_pesquisaContatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PESQUISACONTATOS_H
