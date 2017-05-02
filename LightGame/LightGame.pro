TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    robot.cpp \
    action.cpp \
    program.cpp \
    level.cpp \
    player.cpp \
    grid.cpp \
    hexagon.cpp \
    primaryprog.cpp \
    secondaryprog.cpp \
    execsecprog.cpp

HEADERS += \
    robot.h \
    action.h \
    program.h \
    level.h \
    player.h \
    grid.h \
    hexagon.h \
    primaryprog.h \
    secondaryprog.h \
    execsecprog.h
