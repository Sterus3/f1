/********************************************************************************
** Form generated from reading UI file 'george_russel.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEORGE_RUSSEL_H
#define UI_GEORGE_RUSSEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_George_russel
{
public:

    void setupUi(QDialog *George_russel)
    {
        if (George_russel->objectName().isEmpty())
            George_russel->setObjectName(QString::fromUtf8("George_russel"));
        George_russel->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/Logo_Williams_F1.png"), QSize(), QIcon::Normal, QIcon::Off);
        George_russel->setWindowIcon(icon);

        retranslateUi(George_russel);

        QMetaObject::connectSlotsByName(George_russel);
    } // setupUi

    void retranslateUi(QDialog *George_russel)
    {
        George_russel->setWindowTitle(QCoreApplication::translate("George_russel", "Williams: George Russel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class George_russel: public Ui_George_russel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEORGE_RUSSEL_H
