#-------------------------------------------------
#
# Project created by QtCreator 2013-09-18T15:17:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LetterRecognition
TEMPLATE = app


SOURCES += main.cpp\
    activationfunction.cpp \
    activationfunctionrelu.cpp \
    activationfunctionsigmoid.cpp \
    activationtanh.cpp \
    inputlayer.cpp \
        mainwindow.cpp \
    backpropagation.cpp \
    neuralnetwork.cpp \
    neuronlayer.cpp \
    outputlayer.cpp

HEADERS  += mainwindow.h \
    activationfunction.h \
    activationfunctionrelu.h \
    activationfunctionsigmoid.h \
    activationtanh.h \
    globalVariables.h \
    backpropagation.h \
    inputlayer.h \
    neuralnetwork.h \
    neuronlayer.h \
    outputlayer.h

FORMS    += mainwindow.ui
