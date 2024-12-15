/********************************************************************************
** Form generated from reading UI file 'fm_principal.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PRINCIPAL_H
#define UI_FM_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_principal
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_AddContact;
    QPushButton *btn_SearchContact;

    void setupUi(QDialog *fm_principal)
    {
        if (fm_principal->objectName().isEmpty())
            fm_principal->setObjectName("fm_principal");
        fm_principal->resize(619, 313);
        widget = new QWidget(fm_principal);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 10, 261, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_AddContact = new QPushButton(widget);
        btn_AddContact->setObjectName("btn_AddContact");

        horizontalLayout->addWidget(btn_AddContact);

        btn_SearchContact = new QPushButton(widget);
        btn_SearchContact->setObjectName("btn_SearchContact");

        horizontalLayout->addWidget(btn_SearchContact);


        retranslateUi(fm_principal);

        QMetaObject::connectSlotsByName(fm_principal);
    } // setupUi

    void retranslateUi(QDialog *fm_principal)
    {
        fm_principal->setWindowTitle(QCoreApplication::translate("fm_principal", "Dialog", nullptr));
        btn_AddContact->setText(QCoreApplication::translate("fm_principal", "Add contact", nullptr));
        btn_SearchContact->setText(QCoreApplication::translate("fm_principal", "Search Contact", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_principal: public Ui_fm_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PRINCIPAL_H
