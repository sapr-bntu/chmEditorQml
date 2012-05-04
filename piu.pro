#-------------------------------------------------
#
# Project created by QtCreator 2012-03-19T22:16:59
#
#-------------------------------------------------

QT       += core gui declarative

symbian: {
    qmlfiles.sources = qml/qtquicktest/*.qml
    qmlfiles.path = ./qml/qtquicktest
    DEPLOYMENT += qmlfiles
}

TARGET = piu
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    zip.cpp

HEADERS  += mainwindow.h \
    zip.h

OTHER_FILES += \
    qml/QmlButton/Controls/GreyButton.qml \
    main.qml \
    Controls/GreyButton.qml \
    Controls/TextButton.qml \
    pics/plus-sign.png \
    pics/moreUp.png \
    pics/moreDown.png \
    pics/minus-sign.png \
    pics/list-delete.png \
    pics/arrow-up.png \
    pics/arrow-down.png \
    Controls/RecipesModel.qml \
    pics/lol1.jpg \
    pics/lol4.jpg \
    pics/lol3.jpg \
    pics/lol2.jpg \
    pics/lol5.jpg \
    pics/piu1_piu1.png \
    pics/piu.jpg \
    Controls/TextArea.qml

RESOURCES += \
    res.qrc
