#include "carlos_sainz.h"
#include "ui_carlos_sainz.h"

Carlos_sainz::Carlos_sainz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Carlos_sainz)
{
    ui->setupUi(this);
}

Carlos_sainz::~Carlos_sainz()
{
    delete ui;
}
