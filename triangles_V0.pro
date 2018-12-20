TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    points.cpp \
    check_triangel.cpp \
    search_obtuse_triangels.cpp \
    triangel.cpp

HEADERS += \
    points.h \
    check_triangel.h \
    search_obtuse_triangels.h \
    triangel.h
