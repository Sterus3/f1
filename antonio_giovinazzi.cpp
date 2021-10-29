#include "antonio_giovinazzi.h"
#include "ui_antonio_giovinazzi.h"

Antonio_giovinazzi::Antonio_giovinazzi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Antonio_giovinazzi)
{
    ui->setupUi(this);
}

Antonio_giovinazzi::~Antonio_giovinazzi()
{
    delete ui;
}
