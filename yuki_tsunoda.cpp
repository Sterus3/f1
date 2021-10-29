#include "yuki_tsunoda.h"
#include "ui_yuki_tsunoda.h"

Yuki_tsunoda::Yuki_tsunoda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Yuki_tsunoda)
{
    ui->setupUi(this);
}

Yuki_tsunoda::~Yuki_tsunoda()
{
    delete ui;
}
