/********************************************************************************
** Form generated from reading UI file 'tela2.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA2_H
#define UI_TELA2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tela2
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Tela2)
    {
        if (Tela2->objectName().isEmpty())
            Tela2->setObjectName("Tela2");
        Tela2->resize(400, 300);
        widget = new QWidget(Tela2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(160, 110, 77, 56));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(Tela2);

        QMetaObject::connectSlotsByName(Tela2);
    } // setupUi

    void retranslateUi(QDialog *Tela2)
    {
        Tela2->setWindowTitle(QCoreApplication::translate("Tela2", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Tela2", "C", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Tela2", "D", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tela2: public Ui_Tela2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA2_H
