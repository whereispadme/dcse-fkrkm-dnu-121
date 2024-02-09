#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Кущевский Андрей | lab03-04");
    w.show();
    return a.exec();
}
