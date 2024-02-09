#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::getSignalFromPyramidForm(float length, float height, float side)
{
    this->pyramid = new QuadrangularPyramid(length, height, side);

    model->setItem(this->currentRow, 0, new QStandardItem("Правильная четырехугольная пирамида"));
    model->setItem(this->currentRow, 1, new QStandardItem("Многогранник"));
    model->setItem(this->currentRow, 2, new QStandardItem(QString::number(this->pyramid->getVolume())));
    model->setItem(this->currentRow, 3, new QStandardItem(QString::number(this->pyramid->getSurfaceArea())));
    currentRow++;

    this->pyramidVector.push_back(*this->pyramid);

}

void MainWindow::getSignalFromHemisphereForm(float radius)
{
    this->hemisphere = new Hemisphere(radius);

    model->setItem(this->currentRow, 0, new QStandardItem("Полушарие"));
    model->setItem(this->currentRow, 1, new QStandardItem("Круглое тело"));
    model->setItem(this->currentRow, 2, new QStandardItem(QString::number(this->hemisphere->getVolume())));
    model->setItem(this->currentRow, 3, new QStandardItem(QString::number(this->hemisphere->getSurfaceArea())));
    currentRow++;

    this->hemisphereVector.push_back(*this->hemisphere);

}

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("КущевскийАндрей, ПЗ-19-1 | 37-38");

    ui->applyTypeFigurePushButton->setEnabled(false);
    ui->resetPushButon->setEnabled(false);
    ui->groupBox_2->setEnabled(false);

    this->model = nullptr;
    this->currentRow = 0;

    this->pyramid = nullptr;
    this->hemisphere = nullptr;

    this->pForm = new pyramidForm;
    this->hForm = new hemisphereForm;

    connect(this, &MainWindow::signalToPyramidForm, this->pForm, &pyramidForm::getSignal);
    connect(this->pForm, &pyramidForm::signalToMainWindow, this, &MainWindow::getSignalFromPyramidForm);

    connect(this, &MainWindow::signalToHemisphereForm, this->hForm, &hemisphereForm::getSignal);
    connect(this->hForm, &hemisphereForm::signalToMainWindow, this, &MainWindow::getSignalFromHemisphereForm);

    setTable();

}

MainWindow::~MainWindow()
{
    delete ui;

    if(this->pyramid != nullptr)
        delete pyramid;

    if(this->hemisphere != nullptr)
        delete hemisphere;

    if(this->model != nullptr)
        delete model;

}

void MainWindow::setTable()
{

    model = new QStandardItemModel;
    ui->tableView->setModel(model);

    //Заголовки столбцов
    QStringList horizontalHeader;
    horizontalHeader.append("Название фигуры");
    horizontalHeader.append("Тип фигуры");
    horizontalHeader.append("Объем фигуры");
    horizontalHeader.append("Площадь основания фигуры");

    model->setHorizontalHeaderLabels(horizontalHeader);
    ui->tableView->setModel(model);
    ui->tableView->resizeRowsToContents();
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableView->setColumnWidth(0, 110);
    ui->tableView->setColumnWidth(1, 100);
    ui->tableView->setColumnWidth(2, 110);
    ui->tableView->setColumnWidth(3, 180);

    // Разрешаем выделение строк
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    // Устанавливаем режим выделения лишь одной строки в таблице
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);

    //Устанавливаем сортировку по атрибутам
    ui->tableView->setSortingEnabled(true);

}

void MainWindow::on_polyhedronRadioButton_clicked()
{

    if(ui->polyhedronRadioButton->isChecked())
    {
        ui->comboBox->clear();
        ui->comboBox->insertItem(0, "Четырехугольная пирамида");
        ui->applyTypeFigurePushButton->setEnabled(true);
        ui->groupBox_2->setEnabled(true);
    }
    else
    {
        ui->applyTypeFigurePushButton->setEnabled(false);
        ui->groupBox_2->setEnabled(false);
    }

}


void MainWindow::on_roundRadioButton_clicked()
{

    if(ui->roundRadioButton->isChecked())
    {
        ui->comboBox->clear();
        ui->comboBox->insertItem(0, "Полушарие");
       ui->applyTypeFigurePushButton->setEnabled(true);
        ui->groupBox_2->setEnabled(true);
    }
    else
    {
        ui->applyTypeFigurePushButton->setEnabled(false);
        ui->groupBox_2->setEnabled(false);
    }

}

void MainWindow::on_applyTypeFigurePushButton_clicked()
{

    ui->resetPushButon->setEnabled(true);

    if(ui->polyhedronRadioButton->isChecked())
    {

        emit signalToPyramidForm();

    }
    else
    {

        emit signalToHemisphereForm();

    }

}


void MainWindow::on_resetPushButon_clicked()
{

    ui->applyTypeFigurePushButton->setEnabled(false);
    ui->resetPushButon->setEnabled(false);

    ui->polyhedronRadioButton->setChecked(true);
    ui->comboBox->clear();
    ui->comboBox->insertItem(0, "Четырехугольная пирамида");
    ui->applyTypeFigurePushButton->setEnabled(true);
    ui->groupBox_2->setEnabled(true);

    ui->roundRadioButton->setChecked(false);

    this->currentRow = 0;

    model->clear();
    setTable();

    this->pyramidVector.clear();
    this->hemisphereVector.clear();

}
