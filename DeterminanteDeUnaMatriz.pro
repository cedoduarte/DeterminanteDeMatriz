#-------------------------------------------------
#
# Project created by QtCreator 2015-11-07T09:45:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DeterminanteDeUnaMatriz
TEMPLATE = app


SOURCES += main.cpp\
        Widget.cpp \
    DoubleSpinBoxDelegate.cpp \
    DeterminanteLineEditDialog.cpp

HEADERS  += Widget.h \
    DoubleSpinBoxDelegate.h \
    DeterminanteLineEditDialog.h

FORMS    += Widget.ui \
    DeterminanteLineEditDialog.ui

QMAKE_CXXFLAGS += -std=gnu++14
