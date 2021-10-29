#include "valteri_bottas.h"
#include "ui_valteri_bottas.h"

Valteri_Bottas::Valteri_Bottas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Valteri_Bottas)
{
    ui->setupUi(this);
}

Valteri_Bottas::~Valteri_Bottas()
{
    delete ui;
}
