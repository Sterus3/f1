#include "george_russel.h"
#include "ui_george_russel.h"

George_russel::George_russel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::George_russel)
{
    ui->setupUi(this);
}

George_russel::~George_russel()
{
    delete ui;
}
