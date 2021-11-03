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
    QString tekst1 = in.readLine(14);
    ui->imie_label->setText(tekst1);


    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(15);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(14);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(12);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(12);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(15);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(16);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(12);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(15);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(16);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(15);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(12);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(12);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(12);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(14);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(18);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(14);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(15);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(15);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
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
    QString tekst = in.readLine(14);
    ui->imie_label->setText(tekst);
    ui->wygrane_label->setText(tekst);

    QString tekst2 = in.readLine(24);
    ui->zespol_label->setText(tekst2);


    QString tekst3 = in.readLine(26);
    ui->wygrane_label->setText(tekst3);


    QString tekst4 = in.readLine(28);
    ui->przejechane_label->setText(tekst4);


    QString tekst5 = in.readLine(34);
    ui->sumapkt_label->setText(tekst5);
    plik5.close();
}

