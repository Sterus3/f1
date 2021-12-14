#ifndef SEZON_2021_H
#define SEZON_2021_H

#include <QString>
#include <QStandardItemModel>


class Sezon_2021
{

    QString kierowca;
    QString zespol;
    QString bahrain;
    QString portugalia;
    QString hiszpania;
    QString monako;
    QString punkty;

public:

    void setTableWidget(QStandardItemModel *sezonTableModel, const QBrush &backgroundColor, const QColor &color);

    Sezon_2021(QString kierowca, QString zespol, QString bahrain, QString portugalia, QString hiszpania, QString monako, QString punkty);
};

#endif // SEZON_2021_H
