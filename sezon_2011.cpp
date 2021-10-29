#include "sezon_2011.h"
#include "ui_sezon_2011.h"

Sezon_2011::Sezon_2011(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sezon_2011)
{
    ui->setupUi(this);
}

Sezon_2011::~Sezon_2011()
{
    delete ui;
}
