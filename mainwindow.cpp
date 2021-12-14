#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    autor = new Autor(this);
    autor->show();
}


void MainWindow::on_pushButton_5_clicked()
{
    media = new Media(this);
    media->show();
}


void MainWindow::on_radioButton_clicked()
{
    QFile plik1(":/new/prefix1/Zdjecia/Lewis Hamilton.txt");
    if (!plik1.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik1);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik1.close();
}




void MainWindow::on_radioButton_2_clicked()
{
    QFile plik2(":/new/prefix1/Zdjecia/Valteri Bottas.txt");
    if (!plik2.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik2);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik2.close();
}

void MainWindow::on_radioButton_3_clicked()
{
    QFile plik3(":/new/prefix1/Zdjecia/Max Verstappen.txt");
    if (!plik3.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik3);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik3.close();
}


void MainWindow::on_radioButton_5_clicked()
{
    QFile plik4(":/new/prefix1/Zdjecia/Sergio Perez.txt");
    if (!plik4.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik4);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik4.close();
}


void MainWindow::on_radioButton_4_clicked()
{
    QFile plik5(":/new/prefix1/Zdjecia/Lando Norris.txt");
    if (!plik5.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik5);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik5.close();
}


void MainWindow::on_radioButton_6_clicked()
{
    QFile plik5(":/new/prefix1/Zdjecia/Daniel Riccardo.txt");
    if (!plik5.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik5);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik5.close();
}


void MainWindow::on_radioButton_7_clicked()
{
    QFile plik5(":/new/prefix1/Zdjecia/Sebastian Vettel.txt");
    if (!plik5.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik5);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik5.close();
}


void MainWindow::on_radioButton_8_clicked()
{
    QFile plik5(":/new/prefix1/Zdjecia/Lance Stroll.txt");
    if (!plik5.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik5);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik5.close();
}


void MainWindow::on_radioButton_10_clicked()
{
    QFile plik5(":/new/prefix1/Zdjecia/Charles Leclerc.txt");
    if (!plik5.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik5);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik5.close();
}


void MainWindow::on_radioButton_9_clicked()
{
    QFile plik5(":/new/prefix1/Zdjecia/Carlos Sainz.txt");
    if (!plik5.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik5);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik5.close();
}


void MainWindow::on_radioButton_11_clicked()
{
    QFile plik5(":/new/prefix1/Zdjecia/Fernando Alonso.txt");
    if (!plik5.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik5);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik5.close();
}


void MainWindow::on_radioButton_12_clicked()
{
    QFile plik5(":/new/prefix1/Zdjecia/Esteban Ocon.txt");
    if (!plik5.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik5);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik5.close();
}


void MainWindow::on_radioButton_13_clicked()
{
    QFile plik5(":/new/prefix1/Zdjecia/Pierre Gasly.txt");
    if (!plik5.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik5);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik5.close();
}




void MainWindow::on_radioButton_14_clicked()
{
    QFile plik5(":/new/prefix1/Zdjecia/Yuki Tsunoda.txt");
    if (!plik5.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik5);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik5.close();
}


void MainWindow::on_radioButton_15_clicked()
{
    QFile plik5(":/new/prefix1/Zdjecia/Kimi Raikkonen.txt");
    if (!plik5.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik5);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik5.close();
}

void MainWindow::on_radioButton_16_clicked()
{
    QFile plik5(":/new/prefix1/Zdjecia/Antonio Giovinazzi.txt");
    if (!plik5.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik5);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik5.close();
}


void MainWindow::on_radioButton_17_clicked()
{
    QFile plik5(":/new/prefix1/Zdjecia/George Russell.txt");
    if (!plik5.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik5);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik5.close();
}


void MainWindow::on_radioButton_18_clicked()
{
    QFile plik5(":/new/prefix1/Zdjecia/Nicholas Latifi.txt");
    if (!plik5.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik5);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik5.close();
}


void MainWindow::on_radioButton_19_clicked()
{
    QFile plik5(":/new/prefix1/Zdjecia/Mick Schumacher.txt");
    if (!plik5.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik5);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik5.close();
}


void MainWindow::on_radioButton_20_clicked()
{
    QFile plik5(":/new/prefix1/Zdjecia/Nikita Mazepin.txt");
    if (!plik5.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik5);
    QString tekst1 = in.readLine(0);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(0);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(0);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(0);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(0);
    ui->sumapkt_label->setText(tekst5);
    plik5.close();
}


void MainWindow::on_radioButton_21_clicked()
{
    QFile plik(":/new/prefix1/Zdjecia/Sezon 2020.txt");
    if (!plik.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik);
    QString linia1 = in.readLine(0);
    ui->wiersz1->setText(linia1);

    QString linia2 = in.readLine(0);
    ui->wiersz2->setText(linia2);

    QString linia3 = in.readLine(0);
    ui->wiersz3->setText(linia3);

    QString linia4 = in.readLine(0);
    ui->wiersz4->setText(linia4);

    QString linia5 = in.readLine(0);
    ui->wiersz5->setText(linia5);

    QString linia6 = in.readLine(0);
    ui->wiersz6->setText(linia6);

    QString linia7 = in.readLine(0);
    ui->wiersz7->setText(linia7);

    QString linia8 = in.readLine(0);
    ui->wiersz8->setText(linia8);

    QString linia9 = in.readLine(0);
    ui->wiersz9->setText(linia9);

    QString linia10 = in.readLine(0);
    ui->wiersz10->setText(linia10);

    QString linia11 = in.readLine(0);
    ui->wiersz11->setText(linia11);

    QString linia12 = in.readLine(0);
    ui->wiersz12->setText(linia12);

    QString linia13 = in.readLine(0);
    ui->wiersz13->setText(linia13);

    QString linia14 = in.readLine(0);
    ui->wiersz14->setText(linia14);

    QString linia15 = in.readLine(0);
    ui->wiersz15->setText(linia15);

    QString linia16 = in.readLine(0);
    ui->wiersz16->setText(linia16);

    QString linia17 = in.readLine(0);
    ui->wiersz17->setText(linia17);

    QString linia18 = in.readLine(0);
    ui->wiersz18->setText(linia18);

    QString linia19 = in.readLine(0);
    ui->wiersz19->setText(linia19);

    QString linia20 = in.readLine(0);
    ui->wiersz20->setText(linia20);

    QString linia21 = in.readLine(0);
    ui->wiersz21->setText(linia21);

    plik.close();
}


void MainWindow::on_radioButton_22_clicked()
{   
    QFile plik(":/new/prefix1/Zdjecia/Sezon 2019.txt");
    if (!plik.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"nnn","nnn");
    }
    QTextStream in(&plik);
    QString linia1 = in.readLine(0);
    ui->wiersz1->setText(linia1);

    QString linia2 = in.readLine(0);
    ui->wiersz2->setText(linia2);

    QString linia3 = in.readLine(0);
    ui->wiersz3->setText(linia3);

    QString linia4 = in.readLine(0);
    ui->wiersz4->setText(linia4);

    QString linia5 = in.readLine(0);
    ui->wiersz5->setText(linia5);

    QString linia6 = in.readLine(0);
    ui->wiersz6->setText(linia6);

    QString linia7 = in.readLine(0);
    ui->wiersz7->setText(linia7);

    QString linia8 = in.readLine(0);
    ui->wiersz8->setText(linia8);

    QString linia9 = in.readLine(0);
    ui->wiersz9->setText(linia9);

    QString linia10 = in.readLine(0);
    ui->wiersz10->setText(linia10);

    QString linia11 = in.readLine(0);
    ui->wiersz11->setText(linia11);

    QString linia12 = in.readLine(0);
    ui->wiersz12->setText(linia12);

    QString linia13 = in.readLine(0);
    ui->wiersz13->setText(linia13);

    QString linia14 = in.readLine(0);
    ui->wiersz14->setText(linia14);

    QString linia15 = in.readLine(0);
    ui->wiersz15->setText(linia15);

    QString linia16 = in.readLine(0);
    ui->wiersz16->setText(linia16);

    QString linia17 = in.readLine(0);
    ui->wiersz17->setText(linia17);

    QString linia18 = in.readLine(0);
    ui->wiersz18->setText(linia18);

    QString linia19 = in.readLine(0);
    ui->wiersz19->setText(linia19);

    QString linia20 = in.readLine(0);
    ui->wiersz20->setText(linia20);

    QString linia21 = in.readLine(0);
    ui->wiersz21->setText(linia21);

    plik.close();
}


void MainWindow::on_pushButton_3_clicked()
{
    nastepny_wyscig = new Nastepny_wyscig(this);
    nastepny_wyscig->show();
}


void MainWindow::on_pushButton_4_clicked()
{
    obecny_sezon = new Obecny_sezon(this);
    obecny_sezon->show();
}

