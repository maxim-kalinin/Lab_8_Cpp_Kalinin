TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Task1.cpp \
    Task2.cpp \
    Task3.cpp \
    Task4.cpp \
    Task5.cpp

HEADERS += \
    Task1.h \
    Task2.h \
    Task3.h \
    Task4.h \
    Task5.h

QMAKE_CXXFLAGS += -std=c++0x

