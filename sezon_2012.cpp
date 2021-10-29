#include "sezon_2012.h"
#include "ui_sezon_2012.h"

Sezon_2012::Sezon_2012(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sezon_2012)
{
    ui->setupUi(this);
}

Sezon_2012::~Sezon_2012()
{
    delete ui;
}
