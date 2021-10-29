#include "pierre_gasly.h"
#include "ui_pierre_gasly.h"

Pierre_gasly::Pierre_gasly(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pierre_gasly)
{
    ui->setupUi(this);
}

Pierre_gasly::~Pierre_gasly()
{
    delete ui;
}
