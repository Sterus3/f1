#include "drugie_okno.h"
#include "ui_drugie_okno.h"

Drugie_Okno::Drugie_Okno(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Drugie_Okno)
{
    ui->setupUi(this);
}

Drugie_Okno::~Drugie_Okno()
{
    delete ui;
}
