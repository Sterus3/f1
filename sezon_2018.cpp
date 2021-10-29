#include "sezon_2018.h"
#include "ui_sezon_2018.h"

Sezon_2018::Sezon_2018(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sezon_2018)
{
    ui->setupUi(this);
}

Sezon_2018::~Sezon_2018()
{
    delete ui;
}
