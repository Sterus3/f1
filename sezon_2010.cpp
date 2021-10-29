#include "sezon_2010.h"
#include "ui_sezon_2010.h"

Sezon_2010::Sezon_2010(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sezon_2010)
{
    ui->setupUi(this);
}

Sezon_2010::~Sezon_2010()
{
    delete ui;
}
