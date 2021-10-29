#include "nicholas_latifi.h"
#include "ui_nicholas_latifi.h"

Nicholas_latifi::Nicholas_latifi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nicholas_latifi)
{
    ui->setupUi(this);
}

Nicholas_latifi::~Nicholas_latifi()
{
    delete ui;
}
