#include "lando_norris.h"
#include "ui_lando_norris.h"

Lando_norris::Lando_norris(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lando_norris)
{
    ui->setupUi(this);
}

Lando_norris::~Lando_norris()
{
    delete ui;
}
