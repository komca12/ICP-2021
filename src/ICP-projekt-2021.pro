QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    core/atomicblock.cpp \
    core/main.cpp \
    core/fileselector.cpp \
    core/port.cpp \
    gui/aplicationview.cpp

HEADERS += \
    core/atomicblock.h \
    core/fileselector.h \
    core/port.h \
    gui/aplicationview.h

FORMS += \
    gui/fileselector.ui

TRANSLATIONS += \
    ICP-projekt-2021_cs_CZ.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
