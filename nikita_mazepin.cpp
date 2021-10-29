#include "nikita_mazepin.h"
#include "ui_nikita_mazepin.h"

Nikita_mazepin::Nikita_mazepin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nikita_mazepin)
{
    ui->setupUi(this);
}

Nikita_mazepin::~Nikita_mazepin()
{
    delete ui;
}
