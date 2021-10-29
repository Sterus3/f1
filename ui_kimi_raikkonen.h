/********************************************************************************
** Form generated from reading UI file 'kimi_raikkonen.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KIMI_RAIKKONEN_H
#define UI_KIMI_RAIKKONEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Kimi_raikkonen
{
public:

    void setupUi(QDialog *Kimi_raikkonen)
    {
        if (Kimi_raikkonen->objectName().isEmpty())
            Kimi_raikkonen->setObjectName(QString::fromUtf8("Kimi_raikkonen"));
        Kimi_raikkonen->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/Alfaracing.png"), QSize(), QIcon::Normal, QIcon::Off);
        Kimi_raikkonen->setWindowIcon(icon);

        retranslateUi(Kimi_raikkonen);

        QMetaObject::connectSlotsByName(Kimi_raikkonen);
    } // setupUi

    void retranslateUi(QDialog *Kimi_raikkonen)
    {
        Kimi_raikkonen->setWindowTitle(QCoreApplication::translate("Kimi_raikkonen", "Alfa Romeo: Kimi Raikkonen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Kimi_raikkonen: public Ui_Kimi_raikkonen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIMI_RAIKKONEN_H
