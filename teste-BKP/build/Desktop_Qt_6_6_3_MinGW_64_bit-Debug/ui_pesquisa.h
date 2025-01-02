/********************************************************************************
** Form generated from reading UI file 'pesquisa.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PESQUISA_H
#define UI_PESQUISA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Pesquisa
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Pesquisa)
    {
        if (Pesquisa->objectName().isEmpty())
            Pesquisa->setObjectName("Pesquisa");
        Pesquisa->resize(400, 300);
        pushButton = new QPushButton(Pesquisa);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 110, 161, 81));

        retranslateUi(Pesquisa);

        QMetaObject::connectSlotsByName(Pesquisa);
    } // setupUi

    void retranslateUi(QDialog *Pesquisa)
    {
        Pesquisa->setWindowTitle(QCoreApplication::translate("Pesquisa", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Pesquisa", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pesquisa: public Ui_Pesquisa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PESQUISA_H
