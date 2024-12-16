/********************************************************************************
** Form generated from reading UI file 'fm_gestaoestoque.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_GESTAOESTOQUE_H
#define UI_FM_GESTAOESTOQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_fm_gestaoEstoque
{
public:

    void setupUi(QDialog *fm_gestaoEstoque)
    {
        if (fm_gestaoEstoque->objectName().isEmpty())
            fm_gestaoEstoque->setObjectName("fm_gestaoEstoque");
        fm_gestaoEstoque->resize(400, 300);

        retranslateUi(fm_gestaoEstoque);

        QMetaObject::connectSlotsByName(fm_gestaoEstoque);
    } // setupUi

    void retranslateUi(QDialog *fm_gestaoEstoque)
    {
        fm_gestaoEstoque->setWindowTitle(QCoreApplication::translate("fm_gestaoEstoque", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_gestaoEstoque: public Ui_fm_gestaoEstoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_GESTAOESTOQUE_H
