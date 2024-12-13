/********************************************************************************
** Form generated from reading UI file 'f_novo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_F_NOVO_H
#define UI_F_NOVO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_F_novo
{
public:
    QLabel *label;

    void setupUi(QDialog *F_novo)
    {
        if (F_novo->objectName().isEmpty())
            F_novo->setObjectName("F_novo");
        F_novo->resize(400, 300);
        label = new QLabel(F_novo);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 120, 121, 51));

        retranslateUi(F_novo);

        QMetaObject::connectSlotsByName(F_novo);
    } // setupUi

    void retranslateUi(QDialog *F_novo)
    {
        F_novo->setWindowTitle(QCoreApplication::translate("F_novo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("F_novo", "Formulario novo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class F_novo: public Ui_F_novo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_F_NOVO_H
