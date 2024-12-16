#ifndef FM_LOGIN_USER_H
#define FM_LOGIN_USER_H

#include <QDialog>
#include "fm_main.h"
#include "Conexao.h"

namespace Ui {
class fm_Login_user;
}

class fm_Login_user : public QDialog
{
    Q_OBJECT

public:
    explicit fm_Login_user(QWidget *parent = nullptr);
    ~fm_Login_user();
    bool logado;
    ConexaoDB conec;
    QString nome, acesso;
    QString getNome();
    QString getAcesso();
    bool getLogado();

private slots:
    void on_btn_logar_clicked();

    void on_btn_sair_clicked();

private:
    Ui::fm_Login_user *ui;
};

#endif // FM_LOGIN_USER_H
