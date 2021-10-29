#include "sezon_2016.h"
#include "ui_sezon_2016.h"

Sezon_2016::Sezon_2016(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sezon_2016)
{
    ui->setupUi(this);
}

Sezon_2016::~Sezon_2016()
{
    delete ui;
}
