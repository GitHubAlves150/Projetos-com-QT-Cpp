/********************************************************************************
** Form generated from reading UI file 'add_user.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_USER_H
#define UI_ADD_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Add_user
{
public:

    void setupUi(QDialog *Add_user)
    {
        if (Add_user->objectName().isEmpty())
            Add_user->setObjectName("Add_user");
        Add_user->resize(400, 300);

        retranslateUi(Add_user);

        QMetaObject::connectSlotsByName(Add_user);
    } // setupUi

    void retranslateUi(QDialog *Add_user)
    {
        Add_user->setWindowTitle(QCoreApplication::translate("Add_user", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_user: public Ui_Add_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_USER_H
