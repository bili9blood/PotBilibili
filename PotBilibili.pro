QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    danmaku2ass_native/AssClass.cpp \
    danmaku2ass_native/danmaku2ass.cpp \
    main.cpp \
    mainwindow.cpp \
    settingsdialog.cpp

HEADERS += \
    danmaku2ass_native/AssClass.hpp \
    danmaku2ass_native/danmaku2ass.h \
    danmaku2ass_native/danmaku2ass.hpp \
    danmaku2ass_native/rapidxml/rapidxml.hpp \
    danmaku2ass_native/rapidxml/rapidxml_iterators.hpp \
    danmaku2ass_native/rapidxml/rapidxml_print.hpp \
    danmaku2ass_native/rapidxml/rapidxml_utils.hpp \
    mainwindow.h \
    settingsdialog.h

FORMS += \
    mainwindow.ui \
    settingsdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
