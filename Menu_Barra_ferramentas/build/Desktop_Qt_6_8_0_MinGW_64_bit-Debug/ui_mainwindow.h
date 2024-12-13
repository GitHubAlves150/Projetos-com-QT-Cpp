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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalva;
    QAction *actionEditar;
    QAction *actionExcluir;
    QAction *actionSair;
    QAction *actionNew_project;
    QAction *actionNew_Lib;
    QAction *actionObject;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuNovo;
    QMenu *menuTools;
    QMenu *menuAbout_program;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionSalva = new QAction(MainWindow);
        actionSalva->setObjectName("actionSalva");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icones/icones/Folder_movies_24199.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSalva->setIcon(icon);
        actionEditar = new QAction(MainWindow);
        actionEditar->setObjectName("actionEditar");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icones/icones/rar_24165.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionEditar->setIcon(icon1);
        actionExcluir = new QAction(MainWindow);
        actionExcluir->setObjectName("actionExcluir");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icones/icones/bnb_crypto_icon_264371.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionExcluir->setIcon(icon2);
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName("actionSair");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icones/icones/iChat_top_delire_24185.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSair->setIcon(icon3);
        actionNew_project = new QAction(MainWindow);
        actionNew_project->setObjectName("actionNew_project");
        actionNew_project->setIcon(icon);
        actionNew_Lib = new QAction(MainWindow);
        actionNew_Lib->setObjectName("actionNew_Lib");
        actionNew_Lib->setIcon(icon2);
        actionObject = new QAction(MainWindow);
        actionObject->setObjectName("actionObject");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icones/icones/iPrograms_24106.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionObject->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName("menuArquivo");
        menuNovo = new QMenu(menuArquivo);
        menuNovo->setObjectName("menuNovo");
        menuTools = new QMenu(menubar);
        menuTools->setObjectName("menuTools");
        menuAbout_program = new QMenu(menubar);
        menuAbout_program->setObjectName("menuAbout_program");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setSizeGripEnabled(true);
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuAbout_program->menuAction());
        menuArquivo->addAction(menuNovo->menuAction());
        menuArquivo->addAction(actionEditar);
        menuArquivo->addAction(actionSalva);
        menuArquivo->addAction(actionExcluir);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair);
        menuNovo->addAction(actionNew_project);
        menuNovo->addAction(actionNew_Lib);
        menuTools->addAction(actionObject);
        toolBar->addAction(actionSalva);
        toolBar->addAction(actionEditar);
        toolBar->addAction(actionExcluir);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalva->setText(QCoreApplication::translate("MainWindow", "Salva", nullptr));
        actionEditar->setText(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        actionExcluir->setText(QCoreApplication::translate("MainWindow", "Excluir", nullptr));
        actionSair->setText(QCoreApplication::translate("MainWindow", "Sair", nullptr));
        actionNew_project->setText(QCoreApplication::translate("MainWindow", "New project", nullptr));
        actionNew_Lib->setText(QCoreApplication::translate("MainWindow", "New Lib", nullptr));
        actionObject->setText(QCoreApplication::translate("MainWindow", "Object", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        menuNovo->setTitle(QCoreApplication::translate("MainWindow", "Novo", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuAbout_program->setTitle(QCoreApplication::translate("MainWindow", "About program", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
