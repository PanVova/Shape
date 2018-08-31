
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtCurvesCPP
TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++0x

SOURCES += main.cpp\
        mainwindow.cpp \
    renderarea.cpp

HEADERS  += mainwindow.h \
    renderarea.h

FORMS    += mainwindow.ui
