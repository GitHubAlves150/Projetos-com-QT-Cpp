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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 240, 141, 41));
        pushButton->setStyleSheet(QString::fromUtf8("color: #111dff;\n"
"background-color: #aaffff ;\n"
"border-radius:20px;\n"
"font-size: 25px;"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 681, 171));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 270, 161, 151));
        label_2->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<style>\n"
"div {\n"
"  border: 1px solid gray;\n"
"  padding: 8px;\n"
"}\n"
"\n"
"h1 {\n"
"  text-align: center;\n"
"  text-transform: uppercase;\n"
"  color: #4CAF50;\n"
"}\n"
"\n"
"p {\n"
"  text-indent: 50px;\n"
"  text-align: justify;\n"
"  letter-spacing: 3px;\n"
"}\n"
"\n"
"a {\n"
"  text-decoration: none;\n"
"  color: #008CBA;\n"
"}\n"
"</style>\n"
"\n"
"\n"
"<div>\n"
"  <h1>text formatting</h1>\n"
"  <p>This text is styled with some of the text formatting properties. <br>\n"
"The heading uses the text-align, text-transform, and color properties. <br>\n"
"  The paragraph is indented, aligned, and the space between characters is specified.  <br>\n"
"The underline is <br> removed from this colored <br>\n"
"  <a target=\"_blank\" href=\"tryit.asp?filename=trycss_text\">\"Try it Yourself\"</a> link.</p>\n"
"</div>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<img src=\":/imgs/img/Designer.jpeg\">\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
