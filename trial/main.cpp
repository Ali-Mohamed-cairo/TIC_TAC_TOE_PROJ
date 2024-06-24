#include "mainwindow.h"
#include "dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    while(w.isVisible());
    Dialog w2;
    w2.show();
    return a.exec();
}
