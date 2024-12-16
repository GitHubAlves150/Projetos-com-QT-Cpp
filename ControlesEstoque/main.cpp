#include "fm_main.h"
#include <QApplication>
#include <QFile>
#include <QPushButton>
#include <QMainWindow>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FM_Main w;


    w.show();
    return a.exec();
}
