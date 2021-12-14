#include "sezon_2021.h"

Sezon_2021::Sezon_2021(QString kierowca, QString zespol, QString bahrain, QString portugalia, QString hiszpania, QString monako, QString punkty):kierowca(kierowca), zespol(zespol), bahrain(bahrain), portugalia(portugalia), hiszpania(hiszpania), monako(monako), punkty(punkty)
{
}


void Sezon_2021::setTableWidget(QStandardItemModel *sezonTableModel, const QBrush &backgroundColor, const QColor &color)
{
    int index = sezonTableModel->rowCount();
    sezonTableModel->setRowCount(index + 1);

    QStandardItem *itemKierowca = new QStandardItem(kierowca);
    itemKierowca->setData(QVariant::fromValue(backgroundColor),Qt::BackgroundRole);
    itemKierowca->setData(QVariant::fromValue(color),Qt::ForegroundRole);

    sezonTableModel->setItem(index, 0, itemKierowca);

    QStandardItem *itemZespol = new QStandardItem(zespol);

    sezonTableModel->setItem(index, 1, itemZespol);

    QStandardItem *itembahrain = new QStandardItem(bahrain);

    sezonTableModel->setItem(index, 2, itembahrain);

    QStandardItem *itemportugalia = new QStandardItem(portugalia);

    sezonTableModel->setItem(index, 3, itemportugalia);

    QStandardItem *itemhiszpania = new QStandardItem(hiszpania);

    sezonTableModel->setItem(index, 4, itemhiszpania);

    QStandardItem *itemmonako = new QStandardItem(monako);

    sezonTableModel->setItem(index, 5, itemmonako);

    QStandardItem *itempunkty = new QStandardItem(punkty);

    sezonTableModel->setItem(index, 6, itempunkty);




}
