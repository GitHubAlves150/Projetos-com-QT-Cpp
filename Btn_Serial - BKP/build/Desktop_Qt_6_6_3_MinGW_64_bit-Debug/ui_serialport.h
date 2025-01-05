/********************************************************************************
** Form generated from reading UI file 'serialport.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALPORT_H
#define UI_SERIALPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_SerialPort
{
public:

    void setupUi(QDialog *SerialPort)
    {
        if (SerialPort->objectName().isEmpty())
            SerialPort->setObjectName("SerialPort");
        SerialPort->resize(400, 300);

        retranslateUi(SerialPort);

        QMetaObject::connectSlotsByName(SerialPort);
    } // setupUi

    void retranslateUi(QDialog *SerialPort)
    {
        SerialPort->setWindowTitle(QCoreApplication::translate("SerialPort", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialPort: public Ui_SerialPort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALPORT_H
