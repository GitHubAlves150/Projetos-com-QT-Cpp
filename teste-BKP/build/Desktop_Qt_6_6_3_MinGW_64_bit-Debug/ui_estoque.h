/********************************************************************************
** Form generated from reading UI file 'estoque.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESTOQUE_H
#define UI_ESTOQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Estoque
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Estoque)
    {
        if (Estoque->objectName().isEmpty())
            Estoque->setObjectName("Estoque");
        Estoque->resize(400, 300);
        pushButton = new QPushButton(Estoque);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 50, 75, 24));
        pushButton_2 = new QPushButton(Estoque);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(150, 110, 75, 24));

        retranslateUi(Estoque);

        QMetaObject::connectSlotsByName(Estoque);
    } // setupUi

    void retranslateUi(QDialog *Estoque)
    {
        Estoque->setWindowTitle(QCoreApplication::translate("Estoque", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Estoque", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Estoque", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Estoque: public Ui_Estoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTOQUE_H
