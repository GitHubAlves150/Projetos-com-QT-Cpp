/********************************************************************************
** Form generated from reading UI file 'fm_nova_venda.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_NOVA_VENDA_H
#define UI_FM_NOVA_VENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_fm_nova_Venda
{
public:

    void setupUi(QDialog *fm_nova_Venda)
    {
        if (fm_nova_Venda->objectName().isEmpty())
            fm_nova_Venda->setObjectName("fm_nova_Venda");
        fm_nova_Venda->resize(400, 300);

        retranslateUi(fm_nova_Venda);

        QMetaObject::connectSlotsByName(fm_nova_Venda);
    } // setupUi

    void retranslateUi(QDialog *fm_nova_Venda)
    {
        fm_nova_Venda->setWindowTitle(QCoreApplication::translate("fm_nova_Venda", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_nova_Venda: public Ui_fm_nova_Venda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_NOVA_VENDA_H
