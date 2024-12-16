#ifndef FM_NOVA_VENDA_H
#define FM_NOVA_VENDA_H

#include <QDialog>

namespace Ui {
class fm_nova_venda;
}

class fm_nova_venda : public QDialog
{
    Q_OBJECT

public:
    explicit fm_nova_venda(QWidget *parent = nullptr);
    ~fm_nova_venda();

private:
    Ui::fm_nova_venda *ui;
};

#endif // FM_NOVA_VENDA_H
