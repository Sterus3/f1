#include "sergio_perez.h"
#include "ui_sergio_perez.h"

Sergio_perez::Sergio_perez(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sergio_perez)
{
    ui->setupUi(this);
}

Sergio_perez::~Sergio_perez()
{
    delete ui;
}
