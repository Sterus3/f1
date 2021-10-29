#include "esteban_ocon.h"
#include "ui_esteban_ocon.h"

Esteban_ocon::Esteban_ocon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Esteban_ocon)
{
    ui->setupUi(this);
}

Esteban_ocon::~Esteban_ocon()
{
    delete ui;
}
