#include "aktualnosci.h"
#include "ui_aktualnosci.h"

Aktualnosci::Aktualnosci(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Aktualnosci)
{
    ui->setupUi(this);
}

Aktualnosci::~Aktualnosci()
{
    delete ui;
}
