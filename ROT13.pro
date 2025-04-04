#-------------------------------------------------
#
# Project created by QtCreator 2025-04-04T11:36:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ROT13
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    rot13cipher.cpp

HEADERS  += mainwindow.h \
    rot13cipher.h

FORMS    += mainwindow.ui
