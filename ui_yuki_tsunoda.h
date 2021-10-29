/********************************************************************************
** Form generated from reading UI file 'yuki_tsunoda.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YUKI_TSUNODA_H
#define UI_YUKI_TSUNODA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Yuki_tsunoda
{
public:

    void setupUi(QDialog *Yuki_tsunoda)
    {
        if (Yuki_tsunoda->objectName().isEmpty())
            Yuki_tsunoda->setObjectName(QString::fromUtf8("Yuki_tsunoda"));
        Yuki_tsunoda->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/Scuderia_Alpha-Tauri.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        Yuki_tsunoda->setWindowIcon(icon);

        retranslateUi(Yuki_tsunoda);

        QMetaObject::connectSlotsByName(Yuki_tsunoda);
    } // setupUi

    void retranslateUi(QDialog *Yuki_tsunoda)
    {
        Yuki_tsunoda->setWindowTitle(QCoreApplication::translate("Yuki_tsunoda", "Alpha Tauri: Yuki Tsunoda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Yuki_tsunoda: public Ui_Yuki_tsunoda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YUKI_TSUNODA_H
