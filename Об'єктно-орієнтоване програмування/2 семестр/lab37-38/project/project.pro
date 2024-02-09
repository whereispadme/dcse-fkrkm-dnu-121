QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    figure.cpp \
    hemisphere.cpp \
    hemisphereform.cpp \
    main.cpp \
    mainwindow.cpp \
    polyhedron.cpp \
    pyramidform.cpp \
    quadrangularpyramid.cpp \
    round.cpp

HEADERS += \
    figure.h \
    hemisphere.h \
    hemisphereform.h \
    mainwindow.h \
    polyhedron.h \
    pyramidform.h \
    quadrangularpyramid.h \
    round.h

FORMS += \
    hemisphereform.ui \
    mainwindow.ui \
    pyramidform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
