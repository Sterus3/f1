#include "obecny_sezon.h"
#include "ui_obecny_sezon.h"

Obecny_sezon::Obecny_sezon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Obecny_sezon)
{
    ui->setupUi(this);
}

Obecny_sezon::~Obecny_sezon()
{
    delete ui;
}
