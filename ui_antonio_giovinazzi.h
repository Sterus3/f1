/********************************************************************************
** Form generated from reading UI file 'antonio_giovinazzi.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANTONIO_GIOVINAZZI_H
#define UI_ANTONIO_GIOVINAZZI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Antonio_giovinazzi
{
public:

    void setupUi(QDialog *Antonio_giovinazzi)
    {
        if (Antonio_giovinazzi->objectName().isEmpty())
            Antonio_giovinazzi->setObjectName(QString::fromUtf8("Antonio_giovinazzi"));
        Antonio_giovinazzi->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/jpg/Zdjecia/Alfaracing.png"), QSize(), QIcon::Normal, QIcon::Off);
        Antonio_giovinazzi->setWindowIcon(icon);

        retranslateUi(Antonio_giovinazzi);

        QMetaObject::connectSlotsByName(Antonio_giovinazzi);
    } // setupUi

    void retranslateUi(QDialog *Antonio_giovinazzi)
    {
        Antonio_giovinazzi->setWindowTitle(QCoreApplication::translate("Antonio_giovinazzi", "Alfa Romeo: Antonio Giovinazzi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Antonio_giovinazzi: public Ui_Antonio_giovinazzi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANTONIO_GIOVINAZZI_H
