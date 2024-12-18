#include "qteste.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qteste w;
    w.show();
    return a.exec();
}
