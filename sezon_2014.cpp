#include "sezon_2014.h"
#include "ui_sezon_2014.h"

Sezon_2014::Sezon_2014(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sezon_2014)
{
    ui->setupUi(this);
}

Sezon_2014::~Sezon_2014()
{
    delete ui;
}
