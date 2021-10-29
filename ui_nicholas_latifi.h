/********************************************************************************
** Form generated from reading UI file 'nicholas_latifi.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NICHOLAS_LATIFI_H
#define UI_NICHOLAS_LATIFI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Nicholas_latifi
{
public:

    void setupUi(QDialog *Nicholas_latifi)
    {
        if (Nicholas_latifi->objectName().isEmpty())
            Nicholas_latifi->setObjectName(QString::fromUtf8("Nicholas_latifi"));
        Nicholas_latifi->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/Logo_Williams_F1.png"), QSize(), QIcon::Normal, QIcon::Off);
        Nicholas_latifi->setWindowIcon(icon);

        retranslateUi(Nicholas_latifi);

        QMetaObject::connectSlotsByName(Nicholas_latifi);
    } // setupUi

    void retranslateUi(QDialog *Nicholas_latifi)
    {
        Nicholas_latifi->setWindowTitle(QCoreApplication::translate("Nicholas_latifi", "Williams: Nicholas Latifi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Nicholas_latifi: public Ui_Nicholas_latifi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NICHOLAS_LATIFI_H
