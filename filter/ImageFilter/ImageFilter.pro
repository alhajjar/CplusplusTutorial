#-------------------------------------------------
#
# Project created by QtCreator 2013-10-15T13:32:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = containerconverter
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    help.cpp \
    about.cpp

HEADERS  += mainwindow.h \
    help.h \
    about.h

FORMS    += mainwindow.ui \
    help.ui \
    about.ui

INCLUDEPATH += D:\\Library\\OpenCV\\include

LIBS +=-LD:\\Library\\OpenCv\\lib -lopencv_core246.dll -lopencv_imgproc246.dll \
 -lopencv_highgui246.dll -lopencv_ml246.dll

RESOURCES += \
    Images.qrc

RC_FILE = myapp.rc
