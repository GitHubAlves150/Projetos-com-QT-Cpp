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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNovo;
    QAction *actionAbrir;
    QAction *actionSalvar;
    QAction *actionSalvar_como;
    QAction *actionFechar;
    QAction *actionColar;
    QAction *actionRecortar;
    QAction *actionRefazer;
    QAction *actionDesfazer;
    QAction *actionCopiar;
    QAction *actionCor;
    QAction *actionImprimir;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuCriar;
    QMenu *menuAbout;
    QMenu *menuFormatar;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(576, 382);
        actionNovo = new QAction(MainWindow);
        actionNovo->setObjectName("actionNovo");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icones/Icones/Novo/File_New_add_10247.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNovo->setIcon(icon);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName("actionAbrir");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icones/Icones/Abrir/open_256_icon-icons.com_76002.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAbrir->setIcon(icon1);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName("actionSalvar");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icones/Icones/Spherical Icons por Ahmad Hania/save_14706.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSalvar->setIcon(icon2);
        actionSalvar_como = new QAction(MainWindow);
        actionSalvar_como->setObjectName("actionSalvar_como");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icones/Icones/Spherical Icons por Ahmad Hania/save_as_14759.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSalvar_como->setIcon(icon3);
        actionFechar = new QAction(MainWindow);
        actionFechar->setObjectName("actionFechar");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icones/Icones/Spherical Icons por Ahmad Hania/close_14776.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFechar->setIcon(icon4);
        actionColar = new QAction(MainWindow);
        actionColar->setObjectName("actionColar");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icones/Icones/Colar/copy_paste_document_file_1557.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionColar->setIcon(icon5);
        actionRecortar = new QAction(MainWindow);
        actionRecortar->setObjectName("actionRecortar");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icones/Icones/Cortar/edit_cut_scissors_10259.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRecortar->setIcon(icon6);
        actionRefazer = new QAction(MainWindow);
        actionRefazer->setObjectName("actionRefazer");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icones/Icones/Desfazer/undo_14749.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRefazer->setIcon(icon7);
        actionDesfazer = new QAction(MainWindow);
        actionDesfazer->setObjectName("actionDesfazer");
        actionDesfazer->setIcon(icon7);
        actionCopiar = new QAction(MainWindow);
        actionCopiar->setObjectName("actionCopiar");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icones/Icones/Copiar/copy_paste_document_theuser_1579.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCopiar->setIcon(icon8);
        actionCor = new QAction(MainWindow);
        actionCor->setObjectName("actionCor");
        actionImprimir = new QAction(MainWindow);
        actionImprimir->setObjectName("actionImprimir");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icones/Icones/Impressora/Print_icon-icons.com_73705.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionImprimir->setIcon(icon9);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 10, 541, 291));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 576, 22));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName("menuArquivo");
        menuCriar = new QMenu(menubar);
        menuCriar->setObjectName("menuCriar");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        menuFormatar = new QMenu(menubar);
        menuFormatar->setObjectName("menuFormatar");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::RightToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName("toolBar_2");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar_2);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuCriar->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menubar->addAction(menuFormatar->menuAction());
        menuArquivo->addAction(actionNovo);
        menuArquivo->addAction(actionAbrir);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionSalvar_como);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionFechar);
        menuArquivo->addAction(actionImprimir);
        menuCriar->addAction(actionColar);
        menuCriar->addAction(actionRecortar);
        menuCriar->addAction(actionRefazer);
        menuCriar->addAction(actionDesfazer);
        menuCriar->addAction(actionCopiar);
        menuFormatar->addAction(actionCor);
        toolBar_2->addAction(actionNovo);
        toolBar_2->addAction(actionAbrir);
        toolBar_2->addAction(actionSalvar_como);
        toolBar_2->addAction(actionSalvar);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionColar);
        toolBar_2->addAction(actionRecortar);
        toolBar_2->addAction(actionRefazer);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionFechar);
        toolBar_2->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNovo->setText(QCoreApplication::translate("MainWindow", "Novo", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        actionSalvar_como->setText(QCoreApplication::translate("MainWindow", "Salvar como", nullptr));
        actionFechar->setText(QCoreApplication::translate("MainWindow", "Fechar", nullptr));
        actionColar->setText(QCoreApplication::translate("MainWindow", "Colar", nullptr));
        actionRecortar->setText(QCoreApplication::translate("MainWindow", "Recortar", nullptr));
        actionRefazer->setText(QCoreApplication::translate("MainWindow", "Refazer", nullptr));
        actionDesfazer->setText(QCoreApplication::translate("MainWindow", "Desfazer", nullptr));
        actionCopiar->setText(QCoreApplication::translate("MainWindow", "Copiar", nullptr));
        actionCor->setText(QCoreApplication::translate("MainWindow", "Cor", nullptr));
        actionImprimir->setText(QCoreApplication::translate("MainWindow", "Imprimir", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        menuCriar->setTitle(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        menuFormatar->setTitle(QCoreApplication::translate("MainWindow", "Formatar", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
