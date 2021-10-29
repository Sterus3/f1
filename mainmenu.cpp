#include "mainmenu.h"
#include "ui_mainmenu.h"
#include <QTimer>
#include <QDebug>
#include <QDateTime>

QTimer *timer;
int cnt = 10;

MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainMenu)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(timer_timeout()));
    timer->start();
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::timer_timeout()
{
    ui->label_data_time->setText(QString::number(cnt));
    cnt--;



}
void MainMenu::on_action2020_2_changed()
{}
void MainMenu::on_pushButton_clicked()
{
    drugie_Okno = new Drugie_Okno(this);
    drugie_Okno->show();
}

void MainMenu::on_action2020_2_triggered()
{
    sezon_2020 = new Sezon_2020(this);
    sezon_2020->show();
}


void MainMenu::on_action2019_triggered()
{
    sezon_2019 = new Sezon_2019(this);
    sezon_2019->show();
}


void MainMenu::on_action2018_triggered()
{
    sezon_2018 = new Sezon_2018(this);
    sezon_2018->show();
}



void MainMenu::on_action2017_triggered()
{
    sezon_2017 = new Sezon_2017(this);
    sezon_2017->show();
}


void MainMenu::on_action2016_triggered()
{
    sezon_2016 = new Sezon_2016(this);
    sezon_2016->show();
}


void MainMenu::on_action2015_triggered()
{
    sezon_2015 = new Sezon_2015(this);
    sezon_2015->show();
}


void MainMenu::on_action2014_triggered()
{
    sezon_2014 = new Sezon_2014(this);
    sezon_2014->show();
}


void MainMenu::on_action2013_triggered()
{
    sezon_2013 = new Sezon_2013(this);
    sezon_2013->show();
}


void MainMenu::on_action20125_triggered()
{
    sezon_2012 = new Sezon_2012(this);
    sezon_2012->show();
}


void MainMenu::on_action2011_triggered()
{
    sezon_2011 = new Sezon_2011(this);
    sezon_2011->show();
}


void MainMenu::on_action2010_triggered()
{
    sezon_2010 = new Sezon_2010(this);
    sezon_2010->show();
}


void MainMenu::on_pushButton_2_clicked()
{
    aktualnosci = new Aktualnosci(this);
    aktualnosci->show();
}


void MainMenu::on_pushButton_3_clicked()
{
    natepny_wyscig = new Natepny_wyscig(this);
    natepny_wyscig->show();
}


void MainMenu::on_pushButton_4_clicked()
{
    obecny_sezon = new Obecny_sezon(this);
    obecny_sezon->show();
}


void MainMenu::on_pushButton_5_clicked()
{
    oficjalne_media = new Oficjalne_media(this);
    oficjalne_media->show();
}


void MainMenu::on_actionLewis_Hamilton_triggered()
{
    lewis_hamilton = new Lewis_hamilton(this);
    lewis_hamilton->show();

}


void MainMenu::on_actionValterri_Bottas_triggered()
{
    valteri_bottas = new Valteri_Bottas(this);
    valteri_bottas->show();
}


void MainMenu::on_actionMax_Verstappen_triggered()
{
    max_verstappen = new Max_Verstappen(this);
    max_verstappen->show();
}


void MainMenu::on_actionSergio_Perez_triggered()
{
    sergio_perez = new Sergio_perez(this);
    sergio_perez->show();
}


void MainMenu::on_actionCharles_Leclerc_triggered()
{
    charles_leclerc = new Charles_leclerc(this);
    charles_leclerc->show();
}


void MainMenu::on_actionCarlos_Sainz_JR_triggered()
{
    carlos_sainz = new Carlos_sainz(this);
    carlos_sainz->show();
}


void MainMenu::on_actionLando_Norris_triggered()
{
    lando_norris = new Lando_norris(this);
    lando_norris->show();
}


void MainMenu::on_actionDaniel_Riccardo_triggered()
{
    daniel_riccardo = new Daniel_Riccardo(this);
    daniel_riccardo->show();
}


void MainMenu::on_actionPierre_Gasly_triggered()
{
    pierre_gasly = new Pierre_gasly(this);
    pierre_gasly->show();
}


void MainMenu::on_actionYuki_Tsunoda_triggered()
{
    yuki_tsunoda = new Yuki_tsunoda(this);
    yuki_tsunoda->show();
}


void MainMenu::on_actionLance_Stroll_triggered()
{
    lance_stroll = new Lance_stroll(this);
    lance_stroll->show();
}


void MainMenu::on_actionSebastian_Vettel_triggered()
{
    sebastian_vettel = new Sebastian_vettel(this);
    sebastian_vettel->show();
}


void MainMenu::on_actionKimi_Raikonnen_triggered()
{
    kimi_raikkonen = new Kimi_raikkonen(this);
    kimi_raikkonen->show();
}


void MainMenu::on_actionEsteban_Ocon_triggered()
{
    esteban_ocon = new Esteban_ocon(this);
    esteban_ocon->show();
}


void MainMenu::on_actionFernando_Alonso_triggered()
{
    fernando_alonso = new Fernando_alonso(this);
    fernando_alonso->show();
}


void MainMenu::on_actionAntonio_Giovinazzi_triggered()
{
    antonio_giovinazzi = new Antonio_giovinazzi(this);
    antonio_giovinazzi->show();
}


void MainMenu::on_actionGeorge_Russel_triggered()
{
    george_russel = new George_russel(this);
    george_russel->show();
}


void MainMenu::on_actionNicolas_Latifi_triggered()
{
    nicholas_latifi = new Nicholas_latifi(this);
    nicholas_latifi->show();
}


void MainMenu::on_actionMick_Schumacher_triggered()
{
    mick_schumacher = new Mick_Schumacher(this);
    mick_schumacher->show();
}


void MainMenu::on_actionNikita_Mazepin_triggered()
{
    nikita_mazepin = new Nikita_mazepin(this);
    nikita_mazepin->show();
}

