#include "sezon_2019.h"
#include "ui_sezon_2019.h"

Sezon_2019::Sezon_2019(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sezon_2019)
{
    ui->setupUi(this);
}

Sezon_2019::~Sezon_2019()
{
    delete ui;
}
