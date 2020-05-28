#-------------------------------------------------
#
# Project created by QtCreator 2020-05-27T13:14:15
#
#-------------------------------------------------

QT       += core gui
QT       += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = eBui
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    elab.cpp \
    viewwork.cpp \
    voltagesource.cpp \
    wire.cpp

HEADERS  += mainwindow.h \
    elab.h \
    viewwork.h \
    voltagesource.h \
    wire.h

FORMS    += mainwindow.ui

DISTFILES += \
    icons8-add-50.png \
    icons8-electronics-50.png \
    icons8-folder-50.png \
    icons8-heater-resistor-50.png \
    icons8-maintenance-50.png \
    icons8-play-50.png \
    icons8-save-50.png \
    icons8-wire-50.png

RESOURCES += \
    icons.qrc
