#include "daniel_riccardo.h"
#include "ui_daniel_riccardo.h"

Daniel_Riccardo::Daniel_Riccardo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Daniel_Riccardo)
{
    ui->setupUi(this);
}

Daniel_Riccardo::~Daniel_Riccardo()
{
    delete ui;
}
