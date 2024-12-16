/********************************************************************************
** Form generated from reading UI file 'tela1.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA1_H
#define UI_TELA1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tela1
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *tela1)
    {
        if (tela1->objectName().isEmpty())
            tela1->setObjectName("tela1");
        tela1->resize(400, 300);
        pushButton = new QPushButton(tela1);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 110, 75, 24));
        pushButton_2 = new QPushButton(tela1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 140, 75, 24));

        retranslateUi(tela1);

        QMetaObject::connectSlotsByName(tela1);
    } // setupUi

    void retranslateUi(QDialog *tela1)
    {
        tela1->setWindowTitle(QCoreApplication::translate("tela1", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("tela1", "A", nullptr));
        pushButton_2->setText(QCoreApplication::translate("tela1", "B", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela1: public Ui_tela1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA1_H
