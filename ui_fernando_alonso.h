/********************************************************************************
** Form generated from reading UI file 'fernando_alonso.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FERNANDO_ALONSO_H
#define UI_FERNANDO_ALONSO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Fernando_alonso
{
public:

    void setupUi(QDialog *Fernando_alonso)
    {
        if (Fernando_alonso->objectName().isEmpty())
            Fernando_alonso->setObjectName(QString::fromUtf8("Fernando_alonso"));
        Fernando_alonso->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/Alpine_F1_Team_Logo.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        Fernando_alonso->setWindowIcon(icon);

        retranslateUi(Fernando_alonso);

        QMetaObject::connectSlotsByName(Fernando_alonso);
    } // setupUi

    void retranslateUi(QDialog *Fernando_alonso)
    {
        Fernando_alonso->setWindowTitle(QCoreApplication::translate("Fernando_alonso", "Alpine: Fernando Alonso", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Fernando_alonso: public Ui_Fernando_alonso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FERNANDO_ALONSO_H
