#ifndef FM_GESTAOESTOQUE_H
#define FM_GESTAOESTOQUE_H

#include <QDialog>

namespace Ui {
class fm_gestaoEstoque;
}

class fm_gestaoEstoque : public QDialog
{
    Q_OBJECT

public:
    explicit fm_gestaoEstoque(QWidget *parent = nullptr);
    ~fm_gestaoEstoque();

private slots:
    void on_btn_Novo_clicked();

private:
    Ui::fm_gestaoEstoque *ui;
};

#endif // FM_GESTAOESTOQUE_H
