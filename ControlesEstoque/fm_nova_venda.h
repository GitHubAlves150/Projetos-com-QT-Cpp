#ifndef FM_NOVA_VENDA_H
#define FM_NOVA_VENDA_H

#include <QDialog>

namespace Ui {
class fm_nova_Venda;
}

class fm_nova_Venda : public QDialog
{
    Q_OBJECT

public:
    explicit fm_nova_Venda(QWidget *parent = nullptr);
    ~fm_nova_Venda();

private:
    Ui::fm_nova_Venda *ui;
};

#endif // FM_NOVA_VENDA_H
