/********************************************************************************
** Form generated from reading UI file 'fm_gestaovendas.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_GESTAOVENDAS_H
#define UI_FM_GESTAOVENDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_fm_Gestaovendas
{
public:

    void setupUi(QDialog *fm_Gestaovendas)
    {
        if (fm_Gestaovendas->objectName().isEmpty())
            fm_Gestaovendas->setObjectName("fm_Gestaovendas");
        fm_Gestaovendas->resize(400, 300);

        retranslateUi(fm_Gestaovendas);

        QMetaObject::connectSlotsByName(fm_Gestaovendas);
    } // setupUi

    void retranslateUi(QDialog *fm_Gestaovendas)
    {
        fm_Gestaovendas->setWindowTitle(QCoreApplication::translate("fm_Gestaovendas", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_Gestaovendas: public Ui_fm_Gestaovendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_GESTAOVENDAS_H
