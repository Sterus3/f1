/********************************************************************************
** Form generated from reading UI file 'esteban_ocon.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESTEBAN_OCON_H
#define UI_ESTEBAN_OCON_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Esteban_ocon
{
public:

    void setupUi(QDialog *Esteban_ocon)
    {
        if (Esteban_ocon->objectName().isEmpty())
            Esteban_ocon->setObjectName(QString::fromUtf8("Esteban_ocon"));
        Esteban_ocon->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/Alpine_F1_Team_Logo.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        Esteban_ocon->setWindowIcon(icon);

        retranslateUi(Esteban_ocon);

        QMetaObject::connectSlotsByName(Esteban_ocon);
    } // setupUi

    void retranslateUi(QDialog *Esteban_ocon)
    {
        Esteban_ocon->setWindowTitle(QCoreApplication::translate("Esteban_ocon", "Alpine: Esteban Ocon", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Esteban_ocon: public Ui_Esteban_ocon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTEBAN_OCON_H
