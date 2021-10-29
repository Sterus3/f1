#include "lewis_hamilton.h"
#include "ui_lewis_hamilton.h"

Lewis_hamilton::Lewis_hamilton(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lewis_hamilton)
{
    ui->setupUi(this);
}

Lewis_hamilton::~Lewis_hamilton()
{
    delete ui;
}
