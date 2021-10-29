#include "sebastian_vettel.h"
#include "ui_sebastian_vettel.h"

Sebastian_vettel::Sebastian_vettel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sebastian_vettel)
{
    ui->setupUi(this);
}

Sebastian_vettel::~Sebastian_vettel()
{
    delete ui;
}
