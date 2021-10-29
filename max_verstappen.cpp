#include "max_verstappen.h"
#include "ui_max_verstappen.h"

Max_Verstappen::Max_Verstappen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Max_Verstappen)
{
    ui->setupUi(this);
}

Max_Verstappen::~Max_Verstappen()
{
    delete ui;
}
