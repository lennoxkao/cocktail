#-------------------------------------------------
#
# Project created by QtCreator 2015-05-06T22:27:32
#
#-------------------------------------------------

QT       += core gui
QT += serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cocktail_machine_ver2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    confirm.cpp

HEADERS  += mainwindow.h \
    confirm.h

FORMS    += mainwindow.ui \
    confirm.ui
