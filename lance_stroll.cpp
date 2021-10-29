#include "lance_stroll.h"
#include "ui_lance_stroll.h"

Lance_stroll::Lance_stroll(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lance_stroll)
{
    ui->setupUi(this);
}

Lance_stroll::~Lance_stroll()
{
    delete ui;
}
