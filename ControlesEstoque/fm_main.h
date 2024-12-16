#ifndef FM_MAIN_H
#define FM_MAIN_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QLabel>
#include <QFile>
#include <QPushButton>
#include <QtSql>
#include <QMessageBox>
#include "fm_login_user.h"
#include "Conexao.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class FM_Main;
}
QT_END_NAMESPACE

class FM_Main : public QMainWindow
{
    Q_OBJECT

public:
    FM_Main(QWidget *parent = nullptr);

    QIcon padlock_off;
    QIcon *padlock_on= new QIcon();
    bool logado;

    QString nome_colab,
            acesso_colab;

    ~FM_Main();

private slots:

    void on_btn_blockANDunblock_clicked();

private:
    Ui::FM_Main *ui;
};
#endif // FM_MAIN_H
