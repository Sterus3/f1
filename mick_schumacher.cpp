#include "mick_schumacher.h"
#include "ui_mick_schumacher.h"

Mick_Schumacher::Mick_Schumacher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Mick_Schumacher)
{
    ui->setupUi(this);
}

Mick_Schumacher::~Mick_Schumacher()
{
    delete ui;
}
