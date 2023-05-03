QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Model/LinkedDevice.cpp \
  TerminalFrame.cpp \
    View/View.cpp \
    View/ViewItem.cpp \
    main.cpp \
    MainWindow.cpp \
    Model/IRremoteModel.cpp \
    #serialport/qserialport.cpp \
    #serialport/qserialport_win.cpp \
    #serialport/qserialportinfo.cpp \
    #serialport/qserialportinfo_win.cpp \


HEADERS += \
    MainWindow.hpp \
    Model/LinkedDevice.h \
    Model/config.h \
    Model/IRremoteModel.hpp \
    Model/test_data.h \
    Model/key_data.h \
  TerminalFrame.hpp \
    View/View.hpp \
    View/ViewItem.hpp \
    #serialport/qserialport.h

FORMS += \
    MainWindow.ui \
    TerminalFrame.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
QT += serialport
