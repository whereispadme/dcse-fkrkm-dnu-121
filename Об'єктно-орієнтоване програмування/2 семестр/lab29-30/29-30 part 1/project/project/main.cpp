#include "mainwindow.h"

#include <QApplication>
#include <QTextStream>//подключаем необходимую библиотеку для работы со строками в кьют

#include <QFrame>
#include <QWidget>
#include <QGridLayout>
#include <QPushButton>

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

    MainWindow window;
    window.show();

   return app.exec();

}
