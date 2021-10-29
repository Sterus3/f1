#include "kimi_raikkonen.h"
#include "ui_kimi_raikkonen.h"

Kimi_raikkonen::Kimi_raikkonen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Kimi_raikkonen)
{
    ui->setupUi(this);
}

Kimi_raikkonen::~Kimi_raikkonen()
{
    delete ui;
}
