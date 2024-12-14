#ifndef FM_PESQUISACONTATOS_H
#define FM_PESQUISACONTATOS_H

#include <QDialog>

namespace Ui {
class Fm_pesquisaContatos;
}

class Fm_pesquisaContatos : public QDialog
{
    Q_OBJECT

public:
    explicit Fm_pesquisaContatos(QWidget *parent = nullptr);
    ~Fm_pesquisaContatos();

private slots:
    void on_btn_deleteContact_clicked();

private:
    Ui::Fm_pesquisaContatos *ui;
};

#endif // FM_PESQUISACONTATOS_H
