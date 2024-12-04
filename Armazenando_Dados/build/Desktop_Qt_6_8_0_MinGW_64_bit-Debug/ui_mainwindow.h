/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *TXT_NOME;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *TXT_TELEFONE;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *TXT_EMAIL;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *MOSTRAR;
    QPushButton *LIMPAR;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(300, 190, 315, 120));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        TXT_NOME = new QLineEdit(widget);
        TXT_NOME->setObjectName("TXT_NOME");

        horizontalLayout->addWidget(TXT_NOME);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        TXT_TELEFONE = new QLineEdit(widget);
        TXT_TELEFONE->setObjectName("TXT_TELEFONE");

        horizontalLayout_2->addWidget(TXT_TELEFONE);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_3);

        TXT_EMAIL = new QLineEdit(widget);
        TXT_EMAIL->setObjectName("TXT_EMAIL");

        horizontalLayout_3->addWidget(TXT_EMAIL);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        MOSTRAR = new QPushButton(widget);
        MOSTRAR->setObjectName("MOSTRAR");

        horizontalLayout_4->addWidget(MOSTRAR);

        LIMPAR = new QPushButton(widget);
        LIMPAR->setObjectName("LIMPAR");

        horizontalLayout_4->addWidget(LIMPAR);

        horizontalSpacer_3 = new QSpacerItem(47, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(TXT_NOME, TXT_TELEFONE);
        QWidget::setTabOrder(TXT_TELEFONE, TXT_EMAIL);
        QWidget::setTabOrder(TXT_EMAIL, MOSTRAR);
        QWidget::setTabOrder(MOSTRAR, LIMPAR);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "tele     ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "email ", nullptr));
        MOSTRAR->setText(QCoreApplication::translate("MainWindow", "Mostrar", nullptr));
        LIMPAR->setText(QCoreApplication::translate("MainWindow", "Limpar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
