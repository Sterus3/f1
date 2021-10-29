#include "fernando_alonso.h"
#include "ui_fernando_alonso.h"

Fernando_alonso::Fernando_alonso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Fernando_alonso)
{
    ui->setupUi(this);
}

Fernando_alonso::~Fernando_alonso()
{
    delete ui;
}
