QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtnotify
TEMPLATE = app

CONFIG+=no_keywords
CONFIG+=c++11

HEADERS += \
    notify.h \
    notifymanager.h \
    mainwindow.h

SOURCES += \
    notify.cpp \
    notifymanager.cpp \
    main.cpp \
    mainwindow.cpp



