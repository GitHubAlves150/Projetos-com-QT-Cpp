/********************************************************************************
** Form generated from reading UI file 'fm_editarcontato.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_EDITARCONTATO_H
#define UI_FM_EDITARCONTATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_EditarContato
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *txt_ID;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *txt_User;
    QLineEdit *txt_Setor;
    QLineEdit *txt_Nome;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_Gravar;
    QPushButton *btn_Cancelar;

    void setupUi(QDialog *fm_EditarContato)
    {
        if (fm_EditarContato->objectName().isEmpty())
            fm_EditarContato->setObjectName("fm_EditarContato");
        fm_EditarContato->resize(796, 249);
        widget = new QWidget(fm_EditarContato);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 40, 751, 146));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        txt_ID = new QLabel(widget);
        txt_ID->setObjectName("txt_ID");

        horizontalLayout_4->addWidget(txt_ID);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        txt_User = new QLineEdit(widget);
        txt_User->setObjectName("txt_User");

        verticalLayout_2->addWidget(txt_User);

        txt_Setor = new QLineEdit(widget);
        txt_Setor->setObjectName("txt_Setor");

        verticalLayout_2->addWidget(txt_Setor);

        txt_Nome = new QLineEdit(widget);
        txt_Nome->setObjectName("txt_Nome");

        verticalLayout_2->addWidget(txt_Nome);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btn_Gravar = new QPushButton(widget);
        btn_Gravar->setObjectName("btn_Gravar");

        horizontalLayout_2->addWidget(btn_Gravar);

        btn_Cancelar = new QPushButton(widget);
        btn_Cancelar->setObjectName("btn_Cancelar");

        horizontalLayout_2->addWidget(btn_Cancelar);


        verticalLayout_4->addLayout(horizontalLayout_2);


        retranslateUi(fm_EditarContato);

        QMetaObject::connectSlotsByName(fm_EditarContato);
    } // setupUi

    void retranslateUi(QDialog *fm_EditarContato)
    {
        fm_EditarContato->setWindowTitle(QCoreApplication::translate("fm_EditarContato", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("fm_EditarContato", "ID", nullptr));
        txt_ID->setText(QCoreApplication::translate("fm_EditarContato", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("fm_EditarContato", "User", nullptr));
        label_5->setText(QCoreApplication::translate("fm_EditarContato", "Setor", nullptr));
        label_4->setText(QCoreApplication::translate("fm_EditarContato", "Nome", nullptr));
        btn_Gravar->setText(QCoreApplication::translate("fm_EditarContato", "Gravar", nullptr));
        btn_Cancelar->setText(QCoreApplication::translate("fm_EditarContato", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_EditarContato: public Ui_fm_EditarContato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_EDITARCONTATO_H
