#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("КущевськийАндрій, ПЗ-19-1 | lab17-18");

    QChart *chart = new QChart;

    ui->widget->setChart(chart);
    chart->setTitle("y = 2.2*sin(x)*exp(x/2)");

    // ось Х
    QValueAxis *axisX = new QValueAxis;
    axisX->setRange(0, -2000); // диапазон значений на оси
    axisX->setTickCount(11); // число линий сетки
    axisX->setLabelFormat("%.2f"); // формат отображения чисел на оси

    // ось Y
    QValueAxis *axisY = new QValueAxis;
    axisY->setRange(-30, 30);
    axisY->setTickCount(3);
    axisY->setLabelFormat("%g");

    // кривые, отображаемые на графике
    QLineSeries* series1 = new QLineSeries();
    series1->setColor(Qt::red);

    // построение графиков функций
    for(int i = 0; i<200; i++)
    {
        series1->append(i, 2.2*qSin(i)*qExp(i/2));
    }
    // связываем график с построенными кривыми
    chart->addSeries(series1);

    // устанавливаем оси для каждого графика
    chart->setAxisX(axisX, series1);
    chart->setAxisY(axisY, series1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

