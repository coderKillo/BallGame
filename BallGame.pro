#-------------------------------------------------
#
# Project created by QtCreator 2018-08-27T22:37:24
#
#-------------------------------------------------

QT       += core gui
CONFIG += c++14

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
    gameobject/object/ball.cpp \
    gameobject/gameobject.cpp \
    gameobject/component/graphicscomponent/ballgraphicscomponent.cpp \
    gameobject/component/physicscomponent/ballphysicscomponent.cpp

HEADERS += \
    renderer.h \
    game.h \
    world.h \
    iworld.h \
    gameobject/gameobject.h \
    gameobject/component/graphicscomponent.h \
    gameobject/component/inputcomponent.h \
    gameobject/component/physiccomponent.h \
    gameobject/object/ball.h \
    gameobject/igameobject.h \
    gameobject/igameobjectstate.h \
    gameobject/component/graphicscomponent/ballgraphicscomponent.h \
    gameobject/component/inputcomponent/nullinputcomponent.h \
    gameobject/component/physicscomponent/ballphysicscomponent.h

FORMS += \
        mainwindow.ui

DISTFILES += \
    Ball.png \
    .gitignore

RESOURCES += \
    texture.qrc
