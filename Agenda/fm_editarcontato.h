#ifndef FM_EDITARCONTATO_H
#define FM_EDITARCONTATO_H

#include <QDialog>
#include "janela.h"

namespace Ui {
class fm_EditarContato;
}

class fm_EditarContato : public QDialog
{
    Q_OBJECT

public:
    explicit fm_EditarContato(QWidget *parent = nullptr, int id_contato=0);

    void QByLucasEditarContato(QWidget *ptr, int);
    int QByLucasGetID(int);
    ~fm_EditarContato();

private slots:
    void on_btn_Gravar_clicked();

private:
    Ui::fm_EditarContato *ui;
    int identify=0;
};

#endif // FM_EDITARCONTATO_H
