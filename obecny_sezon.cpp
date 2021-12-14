#include "obecny_sezon.h"
#include "ui_obecny_sezon.h"
#include "sezon_2021.h"
#include <QFile>
#include <QMessageBox>
#include <QTableView>

Obecny_sezon::Obecny_sezon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Obecny_sezon)
{
    ui->setupUi(this);
    tableViewModel = new QStandardItemModel(ui->tableView);
    ui->tableView->setModel(tableViewModel);
    tableViewModel->setColumnCount(2);
    tableViewModel->setHorizontalHeaderLabels({"Kierowca","Zespol","GP Bahrainu","GP Portugalii", "GP Hiszpanii","GP Monako","Punkty"});
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    QFile plik1(":/new/prefix1/Zdjecia/Sezon_2021.txt");
    if (!plik1.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik1);
    QString linijka1 = in.readLine(0);
    QString linijka2 = in.readLine(0);
    QString linijka3 = in.readLine(0);
    QString linijka4 = in.readLine(0);
    QString linijka5 = in.readLine(0);
    QString linijka6 = in.readLine(0);
    QString linijka7 = in.readLine(0);
    QString linijka8 = in.readLine(0);
    QString linijka9 = in.readLine(0);
    QString linijka10= in.readLine(0);
    QString linijka11= in.readLine(0);
    QString linijka12= in.readLine(0);
    QString linijka13= in.readLine(0);
    QString linijka14= in.readLine(0);
    QString linijka15= in.readLine(0);
    QString linijka16= in.readLine(0);
    QString linijka17= in.readLine(0);
    QString linijka18= in.readLine(0);
    QString linijka19= in.readLine(0);
    QString linijka20= in.readLine(0);
    QString linijka21= in.readLine(0);
    QString linijka22= in.readLine(0);
    QString linijka23= in.readLine(0);
    QString linijka24= in.readLine(0);
    QString linijka25= in.readLine(0);
    QString linijka26= in.readLine(0);
    QString linijka27= in.readLine(0);
    QString linijka28= in.readLine(0);
    QString linijka29= in.readLine(0);
    QString linijka30= in.readLine(0);
    QString linijka31= in.readLine(0);
    QString linijka32= in.readLine(0);
    QString linijka33= in.readLine(0);
    QString linijka34= in.readLine(0);
    QString linijka35= in.readLine(0);
    QString linijka36= in.readLine(0);
    QString linijka37= in.readLine(0);
    QString linijka38= in.readLine(0);
    QString linijka39= in.readLine(0);
    QString linijka40= in.readLine(0);
    QString linijka41= in.readLine(0);
    QString linijka42= in.readLine(0);
    QString linijka43= in.readLine(0);
    QString linijka44= in.readLine(0);
    QString linijka45= in.readLine(0);
    QString linijka46= in.readLine(0);
    QString linijka47= in.readLine(0);
    QString linijka48= in.readLine(0);
    QString linijka49= in.readLine(0);
    QString linijka50= in.readLine(0);
    QString linijka51= in.readLine(0);
    QString linijka52= in.readLine(0);
    QString linijka53= in.readLine(0);
    QString linijka54= in.readLine(0);
    QString linijka55= in.readLine(0);
    QString linijka56= in.readLine(0);
    QString linijka57= in.readLine(0);
    QString linijka58= in.readLine(0);
    QString linijka59= in.readLine(0);
    QString linijka60= in.readLine(0);
    QString linijka61= in.readLine(0);
    QString linijka62= in.readLine(0);
    QString linijka63= in.readLine(0);
    QString linijka64= in.readLine(0);
    QString linijka65= in.readLine(0);
    QString linijka66= in.readLine(0);
    QString linijka67= in.readLine(0);
    QString linijka68= in.readLine(0);
    QString linijka69= in.readLine(0);
    QString linijka70= in.readLine(0);


    QList<Sezon_2021> sezon = {

        Sezon_2021(linijka1,linijka11,linijka21,linijka31,linijka41,linijka51,linijka61),
        Sezon_2021(linijka2,linijka12,linijka22,linijka32,linijka42,linijka52,linijka62),
        Sezon_2021(linijka3,linijka13,linijka23,linijka33,linijka43,linijka53,linijka63),
        Sezon_2021(linijka4,linijka14,linijka24,linijka34,linijka44,linijka54,linijka64),
        Sezon_2021(linijka5,linijka15,linijka25,linijka35,linijka45,linijka55,linijka65),
        Sezon_2021(linijka6,linijka16,linijka26,linijka36,linijka46,linijka56,linijka66),
        Sezon_2021(linijka7,linijka17,linijka27,linijka37,linijka47,linijka57,linijka67),
        Sezon_2021(linijka8,linijka18,linijka28,linijka38,linijka48,linijka58,linijka68),
        Sezon_2021(linijka9,linijka19,linijka29,linijka39,linijka49,linijka59,linijka69),
        Sezon_2021(linijka10,linijka20,linijka30,linijka40,linijka50,linijka60,linijka70)

    };

    QBrush brushBackground(Qt::white);

    foreach(Sezon_2021 sezon_2021, sezon){
        sezon_2021.setTableWidget(tableViewModel, brushBackground, Qt::black);
    }

        plik1.close();

}

Obecny_sezon::~Obecny_sezon()
{
    delete ui;
}

void Obecny_sezon::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);

    QRect size = ui->tableView->geometry();

    ui->tableView->setGeometry(0,0,size.width(),size.height());

}
