#include "kierowcy.h"
#include "ui_kierowcy.h"

Kierowcy::Kierowcy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Kierowcy)
{
    ui->setupUi(this);
}

Kierowcy::~Kierowcy()
{
    delete ui;
}
