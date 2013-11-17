#-------------------------------------------------
#
# Project created by QtCreator 2013-11-15T15:44:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Prototyp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    inspectorwindow.cpp \
    frameviewer.cpp \
    histogramviewer.cpp \
    diagramviewer.cpp \
    videocontrolsviewer.cpp \
    valuetableviewer.cpp \
    templatemanager.cpp

HEADERS  += mainwindow.h \
    inspectorwindow.h \
    frameviewer.h \
    histogramviewer.h \
    diagramviewer.h \
    videocontrolsviewer.h \
    valuetableviewer.h \
    templatemanager.h

FORMS    += mainwindow.ui \
    inspectorwindow.ui \
    frameviewer.ui \
    histogramviewer.ui \
    diagramviewer.ui \
    videocontrolsviewer.ui \
    valuetableviewer.ui \
    templatemanager.ui

RESOURCES += \
    Icon.qrc
