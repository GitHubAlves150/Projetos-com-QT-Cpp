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

class Ui_fm_nova_venda
{
public:

    void setupUi(QDialog *fm_nova_venda)
    {
        if (fm_nova_venda->objectName().isEmpty())
            fm_nova_venda->setObjectName("fm_nova_venda");
        fm_nova_venda->resize(400, 300);

        retranslateUi(fm_nova_venda);

        QMetaObject::connectSlotsByName(fm_nova_venda);
    } // setupUi

    void retranslateUi(QDialog *fm_nova_venda)
    {
        fm_nova_venda->setWindowTitle(QCoreApplication::translate("fm_nova_venda", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_nova_venda: public Ui_fm_nova_venda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_NOVA_VENDA_H
