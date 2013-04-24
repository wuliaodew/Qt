#-------------------------------------------------
#
# Project created by QtCreator 2013-04-16T21:13:37
#
#-------------------------------------------------

QT       += core gui

TARGET = Tool
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qextserialport.cpp \
    qextserialbase.cpp \
    com.cpp \
    win_qextserialport.cpp

HEADERS  += mainwindow.h \
    qextserialport.h \
    qextserialbase.h \
    com.h \
    win_qextserialport.h

FORMS    += mainwindow.ui
