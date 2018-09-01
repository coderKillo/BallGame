#-------------------------------------------------
#
# Project created by QtCreator 2018-08-27T22:37:24
#
#-------------------------------------------------

QT       += core gui
CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BallGame
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    renderer.cpp \
    game.cpp \
    world.cpp \
    gameobject.cpp \
    ballgraphicscomponent.cpp \
    ball.cpp \
    ballphysicscomponent.cpp

HEADERS += \
    renderer.h \
    game.h \
    world.h \
    igameobject.h \
    gameobject.h \
    physiccomponent.h \
    graphicscomponent.h \
    inputcomponent.h \
    ballgraphicscomponent.h \
    nullinputcomponent.h \
    ball.h \
    ballphysicscomponent.h \
    iworld.h

FORMS += \
        mainwindow.ui

DISTFILES += \
    Ball.png

RESOURCES += \
    texture.qrc
