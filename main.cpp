#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QtDeclarative>
#include <QDeclarativeEngine>

#include "treemodel.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
      return a.exec();
}





