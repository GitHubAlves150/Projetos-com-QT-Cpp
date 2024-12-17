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
#include "fm_nova_venda.h"
#include "fm_gestaocolaboradores.h"
#include "fm_gestaoestoque.h"
#include "fm_gestaovendas.h"


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
    static bool logado;
    static QString nome_colab,
                   acesso_colab,
                   username_colab;
    static int id_colab;
    ~FM_Main();

private slots:

    void on_btn_blockANDunblock_clicked();

    void on_btn_nova_venda_clicked();    

    void on_actionEstoque_triggered();

    void on_actionVendas_triggered();

    void on_actionColaboradores_triggered();

private:
    Ui::FM_Main *ui;
};
#endif // FM_MAIN_H
