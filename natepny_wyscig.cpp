#include "natepny_wyscig.h"
#include "ui_natepny_wyscig.h"

Natepny_wyscig::Natepny_wyscig(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Natepny_wyscig)
{
    ui->setupUi(this);
}

Natepny_wyscig::~Natepny_wyscig()
{
    delete ui;
}
