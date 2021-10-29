QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aktualnosci.cpp \
    antonio_giovinazzi.cpp \
    carlos_sainz.cpp \
    charles_leclerc.cpp \
    daniel_riccardo.cpp \
    drugie_okno.cpp \
    esteban_ocon.cpp \
    fernando_alonso.cpp \
    george_russel.cpp \
    kimi_raikkonen.cpp \
    lance_stroll.cpp \
    lando_norris.cpp \
    lewis_hamilton.cpp \
    main.cpp \
    mainmenu.cpp \
    max_verstappen.cpp \
    mick_schumacher.cpp \
    natepny_wyscig.cpp \
    nicholas_latifi.cpp \
    nikita_mazepin.cpp \
    obecny_sezon.cpp \
    oficjalne_media.cpp \
    pierre_gasly.cpp \
    sebastian_vettel.cpp \
    sergio_perez.cpp \
    sezon_2010.cpp \
    sezon_2011.cpp \
    sezon_2012.cpp \
    sezon_2013.cpp \
    sezon_2014.cpp \
    sezon_2015.cpp \
    sezon_2016.cpp \
    sezon_2017.cpp \
    sezon_2018.cpp \
    sezon_2019.cpp \
    sezon_2020.cpp \
    valteri_bottas.cpp \
    yuki_tsunoda.cpp

HEADERS += \
    aktualnosci.h \
    antonio_giovinazzi.h \
    carlos_sainz.h \
    charles_leclerc.h \
    daniel_riccardo.h \
    drugie_okno.h \
    esteban_ocon.h \
    fernando_alonso.h \
    george_russel.h \
    kimi_raikkonen.h \
    lance_stroll.h \
    lando_norris.h \
    lewis_hamilton.h \
    mainmenu.h \
    max_verstappen.h \
    mick_schumacher.h \
    natepny_wyscig.h \
    nicholas_latifi.h \
    nikita_mazepin.h \
    obecny_sezon.h \
    oficjalne_media.h \
    pierre_gasly.h \
    sebastian_vettel.h \
    sergio_perez.h \
    sezon_2010.h \
    sezon_2011.h \
    sezon_2012.h \
    sezon_2013.h \
    sezon_2014.h \
    sezon_2015.h \
    sezon_2016.h \
    sezon_2017.h \
    sezon_2018.h \
    sezon_2019.h \
    sezon_2020.h \
    valteri_bottas.h \
    yuki_tsunoda.h

FORMS += \
    aktualnosci.ui \
    antonio_giovinazzi.ui \
    carlos_sainz.ui \
    charles_leclerc.ui \
    daniel_riccardo.ui \
    drugie_okno.ui \
    esteban_ocon.ui \
    fernando_alonso.ui \
    george_russel.ui \
    kimi_raikkonen.ui \
    lance_stroll.ui \
    lando_norris.ui \
    lewis_hamilton.ui \
    mainmenu.ui \
    max_verstappen.ui \
    mick_schumacher.ui \
    natepny_wyscig.ui \
    nicholas_latifi.ui \
    nikita_mazepin.ui \
    obecny_sezon.ui \
    oficjalne_media.ui \
    pierre_gasly.ui \
    sebastian_vettel.ui \
    sergio_perez.ui \
    sezon_2010.ui \
    sezon_2011.ui \
    sezon_2012.ui \
    sezon_2013.ui \
    sezon_2014.ui \
    sezon_2015.ui \
    sezon_2016.ui \
    sezon_2017.ui \
    sezon_2018.ui \
    sezon_2019.ui \
    sezon_2020.ui \
    valteri_bottas.ui \
    yuki_tsunoda.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc

DISTFILES += \
    Fonty.qml
