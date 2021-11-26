QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    autor.cpp \
    main.cpp \
    mainwindow.cpp \
    media.cpp \
    nastepny_wyscig.cpp \
    obecny_sezon.cpp

HEADERS += \
    autor.h \
    mainwindow.h \
    media.h \
    nastepny_wyscig.h \
    obecny_sezon.h

FORMS += \
    autor.ui \
    mainwindow.ui \
    media.ui \
    nastepny_wyscig.ui \
    obecny_sezon.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Zdjecia.qrc
