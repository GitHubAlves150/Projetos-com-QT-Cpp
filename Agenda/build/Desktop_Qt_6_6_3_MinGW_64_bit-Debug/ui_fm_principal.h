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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_principal
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QDial *dial;
    QLCDNumber *lcdNumber;
    QDateEdit *dateEdit;
    QScrollBar *horizontalScrollBar;

    void setupUi(QDialog *fm_principal)
    {
        if (fm_principal->objectName().isEmpty())
            fm_principal->setObjectName("fm_principal");
        fm_principal->resize(617, 456);
        widget = new QWidget(fm_principal);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 100, 451, 251));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dial = new QDial(widget);
        dial->setObjectName("dial");

        verticalLayout->addWidget(dial);

        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName("lcdNumber");

        verticalLayout->addWidget(lcdNumber);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName("dateEdit");

        verticalLayout->addWidget(dateEdit);

        horizontalScrollBar = new QScrollBar(widget);
        horizontalScrollBar->setObjectName("horizontalScrollBar");
        horizontalScrollBar->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout->addWidget(horizontalScrollBar);


        retranslateUi(fm_principal);

        QMetaObject::connectSlotsByName(fm_principal);
    } // setupUi

    void retranslateUi(QDialog *fm_principal)
    {
        fm_principal->setWindowTitle(QCoreApplication::translate("fm_principal", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_principal: public Ui_fm_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PRINCIPAL_H
