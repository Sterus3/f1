#include "charles_leclerc.h"
#include "ui_charles_leclerc.h"

Charles_leclerc::Charles_leclerc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Charles_leclerc)
{
    ui->setupUi(this);
}

Charles_leclerc::~Charles_leclerc()
{
    delete ui;
}
