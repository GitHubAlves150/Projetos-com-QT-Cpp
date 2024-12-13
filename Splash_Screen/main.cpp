#include "mainwindow.h"

#include <QApplication>
#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *telasplash= new QSplashScreen;

    telasplash->setPixmap(QPixmap(":/splash/Arquivo de recursos/placamae(1).png"));

    telasplash->show();


    MainWindow w;
    QTimer::singleShot(5000, telasplash, SLOT( close() ) );

    QTimer::singleShot(5000, &w, SLOT( show() ) );


   //w.show();
    return a.exec();
}
