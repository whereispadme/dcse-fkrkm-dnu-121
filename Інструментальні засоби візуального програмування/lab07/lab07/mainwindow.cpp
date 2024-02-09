#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    setWindowTitle("КущевскийАндрій, ПЗ-19-1 | lab07");

    item = nullptr;
    model = nullptr;

    function = nullptr;

    inputForm = new InputForm();
    connect(inputForm, &InputForm::sendSignalToMainForm, this, &MainWindow::getSignalFromInputForm);

    setTable();

    ui->clearPushButton->setEnabled(false);

}

MainWindow::~MainWindow()
{

    delete ui;

    if(this->item != nullptr)
        delete item;

    if(this->model != nullptr)
        delete model;

    if(this->function != nullptr)
        delete function;

}

void MainWindow::setTable()
{

    row = 0;

    model = new QStandardItemModel;
    ui->tableView->setModel(model);

    //Заголовки столбцов
    QStringList horizontalHeader;
    horizontalHeader.append("Число");
    horizontalHeader.append("Синус");
    horizontalHeader.append("Логарифм");
    horizontalHeader.append("Квадрат");
    horizontalHeader.append("Квадратный корень");

    model->setHorizontalHeaderLabels(horizontalHeader);

    ui->tableView->setModel(model);
    ui->tableView->resizeRowsToContents();
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableView->setColumnWidth(0, 100);
    ui->tableView->setColumnWidth(1, 100);
    ui->tableView->setColumnWidth(2, 100);
    ui->tableView->setColumnWidth(3, 90);
    ui->tableView->setColumnWidth(4, 120);

    // Разрешаем выделение строк
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    // Устанавливаем режим выделения лишь одно строки в таблице
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);

    //Устанавливаем сортировку по атрибутам
    ui->tableView->setSortingEnabled(true);

}

void MainWindow::getSignalFromInputForm(double value)
{

    ui->clearPushButton->setEnabled(true);

    inputForm->hide();
    this->show();

    function = new Function(value);

    item = new QStandardItem(QString::number(function->getData()));
    model->setItem(row, 0, item);

    item = new QStandardItem(QString::number(function->calculateSin()));
    model->setItem(row, 1, item);

    item = new QStandardItem(QString::number(function->calculateLog()));
    model->setItem(row, 2, item);

    item = new QStandardItem(QString::number(function->calculateSquare()));
    model->setItem(row, 3, item);

    item = new QStandardItem(QString::number(function->calculateSquqreRoot()));
    model->setItem(row, 4, item);

    ++row;

}

void MainWindow::on_callInitFormPushButton_clicked()
{

    this->hide();
    this->inputForm->show();

}


void MainWindow::on_clearPushButton_clicked()
{

    setTable();
    ui->clearPushButton->setEnabled(false);

}

