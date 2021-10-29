#include "sezon_2013.h"
#include "ui_sezon_2013.h"

Sezon_2013::Sezon_2013(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sezon_2013)
{
    ui->setupUi(this);
}

Sezon_2013::~Sezon_2013()
{
    delete ui;
}
