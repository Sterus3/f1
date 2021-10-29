/********************************************************************************
** Form generated from reading UI file 'lando_norris.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANDO_NORRIS_H
#define UI_LANDO_NORRIS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Lando_norris
{
public:

    void setupUi(QDialog *Lando_norris)
    {
        if (Lando_norris->objectName().isEmpty())
            Lando_norris->setObjectName(QString::fromUtf8("Lando_norris"));
        Lando_norris->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/mclaren-f1-team-logo-1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Lando_norris->setWindowIcon(icon);

        retranslateUi(Lando_norris);

        QMetaObject::connectSlotsByName(Lando_norris);
    } // setupUi

    void retranslateUi(QDialog *Lando_norris)
    {
        Lando_norris->setWindowTitle(QCoreApplication::translate("Lando_norris", "McLaren: Lando Norris", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lando_norris: public Ui_Lando_norris {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANDO_NORRIS_H
