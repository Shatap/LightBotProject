TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++11 -pedantic -Wall -Wextra

LIBS           += -lsfml-graphics -lsfml-window -lsfml-system


SOURCES += main.cpp \
    Application.cpp \
    AppliDeplacementPion.cpp \
    AppliTableau.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Application.h \
    AppliDeplacementPion.h \
    AppliTableau.h
