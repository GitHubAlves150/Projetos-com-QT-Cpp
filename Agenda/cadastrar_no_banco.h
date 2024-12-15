#ifndef CADASTRAR_NO_BANCO_H
#define CADASTRAR_NO_BANCO_H

#include <QDialog>
#include "janela.h"

namespace Ui {
class Cadastrar_no_banco;
}

class Cadastrar_no_banco : public QDialog
{
    Q_OBJECT

public:
    explicit Cadastrar_no_banco(QWidget *parent = nullptr);
    ~Cadastrar_no_banco();
    void on_login_clicked();



private slots:
    void on_inserir_clicked();

private:
    Ui::Cadastrar_no_banco *ui;
};

#endif // CADASTRAR_NO_BANCO_H
