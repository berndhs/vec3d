TEMPLATE = app
CONFIG += c++11
CONFIG += debug
QT += gui
QT += qml
QT += quick
QT += core
QT += svg
QT += charts
QT += 3dcore
QT += opengl

MOC_DIR = tmp/moc
OBJECTS_DIR = tmp/obj
UI_DIR = tmp/ui

QMAKE_CC = gcc
QMAKE_CXX = g++


INCLUDEPATH += /usr/include/osgQt
INCLUDEPATH += include/

HEADERS += \
    include/vec3d.h

SOURCES += \
    src/main.cpp \
    src/vec3d.cpp
