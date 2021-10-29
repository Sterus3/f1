#include "sezon_2017.h"
#include "ui_sezon_2017.h"

Sezon_2017::Sezon_2017(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sezon_2017)
{
    ui->setupUi(this);
}

Sezon_2017::~Sezon_2017()
{
    delete ui;
}
