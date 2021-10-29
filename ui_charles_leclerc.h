/********************************************************************************
** Form generated from reading UI file 'charles_leclerc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARLES_LECLERC_H
#define UI_CHARLES_LECLERC_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Charles_leclerc
{
public:

    void setupUi(QDialog *Charles_leclerc)
    {
        if (Charles_leclerc->objectName().isEmpty())
            Charles_leclerc->setObjectName(QString::fromUtf8("Charles_leclerc"));
        Charles_leclerc->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/Ferrari.png"), QSize(), QIcon::Normal, QIcon::Off);
        Charles_leclerc->setWindowIcon(icon);

        retranslateUi(Charles_leclerc);

        QMetaObject::connectSlotsByName(Charles_leclerc);
    } // setupUi

    void retranslateUi(QDialog *Charles_leclerc)
    {
        Charles_leclerc->setWindowTitle(QCoreApplication::translate("Charles_leclerc", "Ferrari: Charles Leclerc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Charles_leclerc: public Ui_Charles_leclerc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARLES_LECLERC_H
