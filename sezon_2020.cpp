#include "sezon_2020.h"
#include "ui_sezon_2020.h"

Sezon_2020::Sezon_2020(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sezon_2020)
{
    ui->setupUi(this);
}

Sezon_2020::~Sezon_2020()
{
    delete ui;
}
