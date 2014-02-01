#-------------------------------------------------
#
# Project created by QtCreator 2013-10-17T07:50:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Filter
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    help.cpp \
    about.cpp \
    iplimage2qimage.cpp \
    filter.cpp \
    fullview.cpp

HEADERS  += mainwindow.h \
    help.h \
    about.h \
    iplimage2qimage.h \
    filter.h \
    fullview.h

FORMS    += mainwindow.ui \
    help.ui \
    about.ui \
    fullview.ui

RESOURCES += \
    Images.qrc

INCLUDEPATH += C:\Users\Mido\Documents\CplusplusTuto\Library\OpenCv/include \
#C:\Users\Mido\Documents\livrable_Final_Ahmad\Library\Boost\include

LIBS +=-LC:\Users\Mido\Documents\CplusplusTuto\Library\OpenCv\lib -lopencv_core246.dll -lopencv_imgproc246.dll \
 -lopencv_highgui246.dll -lopencv_ml246.dll \
#-LC:\Users\Mido\Documents\livrable_Final_Ahmad\Library\Boost\lib -lboost_thread-mgw46-mt-1_54  -lboost_system-mgw46-d-1_54


RC_FILE = myapp.rc
