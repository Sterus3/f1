#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include "drugie_okno.h"
#include "sezon_2020.h"
#include "sezon_2019.h"
#include "sezon_2018.h"
#include "sezon_2017.h"
#include "sezon_2016.h"
#include "sezon_2015.h"
#include "sezon_2014.h"
#include "sezon_2013.h"
#include "sezon_2012.h"
#include "sezon_2011.h"
#include "sezon_2010.h"
#include "aktualnosci.h"
#include "natepny_wyscig.h"
#include "obecny_sezon.h"
#include "oficjalne_media.h"
#include "lewis_hamilton.h"
#include "valteri_bottas.h"
#include "max_verstappen.h"
#include "sergio_perez.h"
#include "charles_leclerc.h"
#include "carlos_sainz.h"
#include "lando_norris.h"
#include "daniel_riccardo.h"
#include "pierre_gasly.h"
#include "yuki_tsunoda.h"
#include "lance_stroll.h"
#include "sebastian_vettel.h"
#include "esteban_ocon.h"
#include "fernando_alonso.h"
#include "kimi_raikkonen.h"
#include "antonio_giovinazzi.h"
#include "george_russel.h"
#include "nicholas_latifi.h"
#include "mick_schumacher.h"
#include "nikita_mazepin.h"
#include <QTimer>



QT_BEGIN_NAMESPACE
namespace Ui { class MainMenu; }
QT_END_NAMESPACE

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

public slots:


private slots:
    void timer_timeout();

    void on_pushButton_clicked();

    void on_action2020_2_changed();

    void on_action2020_2_triggered();

    void on_action2019_triggered();

    void on_action2018_triggered();

    void on_action2017_triggered();

    void on_action2016_triggered();

    void on_action2015_triggered();

    void on_action2014_triggered();

    void on_action2013_triggered();

    void on_action20125_triggered();

    void on_action2011_triggered();

    void on_action2010_triggered();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_actionLewis_Hamilton_triggered();

    void on_actionValterri_Bottas_triggered();

    void on_actionMax_Verstappen_triggered();

    void on_actionSergio_Perez_triggered();

    void on_actionCharles_Leclerc_triggered();

    void on_actionCarlos_Sainz_JR_triggered();

    void on_actionLando_Norris_triggered();

    void on_actionDaniel_Riccardo_triggered();

    void on_actionPierre_Gasly_triggered();

    void on_actionYuki_Tsunoda_triggered();

    void on_actionLance_Stroll_triggered();

    void on_actionSebastian_Vettel_triggered();

    void on_actionKimi_Raikonnen_triggered();

    void on_actionEsteban_Ocon_triggered();

    void on_actionFernando_Alonso_triggered();

    void on_actionAntonio_Giovinazzi_triggered();

    void on_actionGeorge_Russel_triggered();

    void on_actionNicolas_Latifi_triggered();

    void on_actionMick_Schumacher_triggered();

    void on_actionNikita_Mazepin_triggered();



private:
    Ui::MainMenu *ui;
    QTimer *timer;
    Drugie_Okno *drugie_Okno;
    Sezon_2020 *sezon_2020;
    Sezon_2019 *sezon_2019;
    Sezon_2018 *sezon_2018;
    Sezon_2017 *sezon_2017;
    Sezon_2016 *sezon_2016;
    Sezon_2015 *sezon_2015;
    Sezon_2014 *sezon_2014;
    Sezon_2013 *sezon_2013;
    Sezon_2012 *sezon_2012;
    Sezon_2011 *sezon_2011;
    Sezon_2010 *sezon_2010;
    Aktualnosci *aktualnosci;
    Natepny_wyscig *natepny_wyscig;
    Obecny_sezon *obecny_sezon;
    Oficjalne_media *oficjalne_media;
    Lewis_hamilton *lewis_hamilton;
    Valteri_Bottas *valteri_bottas;
    Max_Verstappen *max_verstappen;
    Sergio_perez *sergio_perez;
    Charles_leclerc *charles_leclerc;
    Carlos_sainz *carlos_sainz;
    Lando_norris *lando_norris;
    Daniel_Riccardo *daniel_riccardo;
    Pierre_gasly *pierre_gasly;
    Yuki_tsunoda *yuki_tsunoda;
    Lance_stroll *lance_stroll;
    Sebastian_vettel *sebastian_vettel;
    Esteban_ocon *esteban_ocon;
    Fernando_alonso *fernando_alonso;
    Kimi_raikkonen *kimi_raikkonen;
    Antonio_giovinazzi *antonio_giovinazzi;
    George_russel *george_russel;
    Nicholas_latifi *nicholas_latifi;
    Mick_Schumacher *mick_schumacher;
    Nikita_mazepin *nikita_mazepin;

};
#endif // MAINMENU_H
