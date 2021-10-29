/********************************************************************************
** Form generated from reading UI file 'nikita_mazepin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NIKITA_MAZEPIN_H
#define UI_NIKITA_MAZEPIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Nikita_mazepin
{
public:

    void setupUi(QDialog *Nikita_mazepin)
    {
        if (Nikita_mazepin->objectName().isEmpty())
            Nikita_mazepin->setObjectName(QString::fromUtf8("Nikita_mazepin"));
        Nikita_mazepin->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/Uralkali_Haas_F1_Team_Logo.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        Nikita_mazepin->setWindowIcon(icon);

        retranslateUi(Nikita_mazepin);

        QMetaObject::connectSlotsByName(Nikita_mazepin);
    } // setupUi

    void retranslateUi(QDialog *Nikita_mazepin)
    {
        Nikita_mazepin->setWindowTitle(QCoreApplication::translate("Nikita_mazepin", "Haas: Nikita Mazepin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Nikita_mazepin: public Ui_Nikita_mazepin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NIKITA_MAZEPIN_H
