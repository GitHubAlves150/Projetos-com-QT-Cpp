#ifndef JANELA_H
#define JANELA_H

#include <QMainWindow>
#include "fm_principal.h"
#include "fm_pesquisacontatos.h"
#include "cadastrar_no_banco.h"
#include <QSqlQuery>
#include "fm_editarcontato.h"
#include <QtSql>
#include <QFileInfo>
#include <QDebug>
#include <QMessageBox>







QT_BEGIN_NAMESPACE
namespace Ui {
class Janela;
}
QT_END_NAMESPACE

class Janela : public QMainWindow
{
    Q_OBJECT

public:
    Janela(QWidget *parent = nullptr);
    ~Janela();
    void on_pushButton_clicked();

private slots:


    void on_login_clicked();

private:
    Ui::Janela *ui;
};
#endif // JANELA_H
