#-------------------------------------------------
#
# Project created by QtCreator 2019-01-26T12:22:59
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qt_Sqlite
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h \
    sqlite3.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../SQLite_Qt_bib/build-sqlite_lib-Desktop_Qt_5_10_0_MinGW_32bit-Debug/release/ -lsqlite_lib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../SQLite_Qt_bib/build-sqlite_lib-Desktop_Qt_5_10_0_MinGW_32bit-Debug/debug/ -lsqlite_lib
else:unix: LIBS += -L$$PWD/../../SQLite_Qt_bib/build-sqlite_lib-Desktop_Qt_5_10_0_MinGW_32bit-Debug/ -lsqlite_lib

INCLUDEPATH += $$PWD/../../SQLite_Qt_bib/build-sqlite_lib-Desktop_Qt_5_10_0_MinGW_32bit-Debug/debug
DEPENDPATH += $$PWD/../../SQLite_Qt_bib/build-sqlite_lib-Desktop_Qt_5_10_0_MinGW_32bit-Debug/debug
