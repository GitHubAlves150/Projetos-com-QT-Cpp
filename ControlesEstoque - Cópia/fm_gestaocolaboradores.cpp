#include "fm_gestaocolaboradores.h"
#include "ui_fm_gestaocolaboradores.h"

fm_gestaoColaboradores::fm_gestaoColaboradores(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fm_gestaoColaboradores)
{
    ui->setupUi(this);
}

fm_gestaoColaboradores::~fm_gestaoColaboradores()
{
    delete ui;
}
