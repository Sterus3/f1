#include "sezon_2015.h"
#include "ui_sezon_2015.h"

Sezon_2015::Sezon_2015(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sezon_2015)
{
    ui->setupUi(this);
}

Sezon_2015::~Sezon_2015()
{
    delete ui;
}
