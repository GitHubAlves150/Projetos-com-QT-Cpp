#include "fm_gestaovendas.h"
#include "ui_fm_gestaovendas.h"

fm_Gestaovendas::fm_Gestaovendas(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fm_Gestaovendas)
{
    ui->setupUi(this);
}

fm_Gestaovendas::~fm_Gestaovendas()
{
    delete ui;
}
