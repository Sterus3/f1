/********************************************************************************
** Form generated from reading UI file 'drugie_okno.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRUGIE_OKNO_H
#define UI_DRUGIE_OKNO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Drugie_Okno
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;

    void setupUi(QDialog *Drugie_Okno)
    {
        if (Drugie_Okno->objectName().isEmpty())
            Drugie_Okno->setObjectName(QString::fromUtf8("Drugie_Okno"));
        Drugie_Okno->resize(533, 359);
        Drugie_Okno->setMinimumSize(QSize(533, 359));
        Drugie_Okno->setMaximumSize(QSize(533, 359));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/56x56.png"), QSize(), QIcon::Normal, QIcon::Off);
        Drugie_Okno->setWindowIcon(icon);
        label = new QLabel(Drugie_Okno);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 150, 211, 51));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(Drugie_Okno);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 300, 481, 51));
        QFont font1;
        font1.setPointSize(7);
        label_2->setFont(font1);
        label_3 = new QLabel(Drugie_Okno);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 10, 341, 71));
        label_3->setFont(font);
        label_5 = new QLabel(Drugie_Okno);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(180, 60, 211, 51));
        label_5->setFont(font);

        retranslateUi(Drugie_Okno);

        QMetaObject::connectSlotsByName(Drugie_Okno);
    } // setupUi

    void retranslateUi(QDialog *Drugie_Okno)
    {
        Drugie_Okno->setWindowTitle(QCoreApplication::translate("Drugie_Okno", "Autor", nullptr));
        label->setText(QCoreApplication::translate("Drugie_Okno", "Kamil Pacan nr indeksu 262082", nullptr));
        label_2->setText(QCoreApplication::translate("Drugie_Okno", "Copyright and content by formula one management (FOM) and Federation Internationale de l'Automobile (FIA)", nullptr));
        label_3->setText(QCoreApplication::translate("Drugie_Okno", "Wydzia\305\202 Elektroniki, Mikrosystem\303\263w i Fotoniki", nullptr));
        label_5->setText(QCoreApplication::translate("Drugie_Okno", "Programowanie aplikacyjne", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Drugie_Okno: public Ui_Drugie_Okno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUGIE_OKNO_H
