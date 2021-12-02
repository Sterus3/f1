#include "nastepny_wyscig.h"
#include "ui_nastepny_wyscig.h"

Nastepny_wyscig::Nastepny_wyscig(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nastepny_wyscig)
{
    ui->setupUi(this);
}

Nastepny_wyscig::~Nastepny_wyscig()
{
    delete ui;
}
