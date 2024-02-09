#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    setWindowTitle("КущевскийАндрей, ПЗ-19-1 | lab03-04");

    arrForm = new arrayform;
    salForm = new salaryform;

    connect(arrForm, &arrayform::sendSignalToMainForm, this, &MainWindow::getSignalFromArrayForm);
    connect(salForm, &salaryform::sendSignalToMainForm, this, &MainWindow::getSignalFromSalaryForm);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getSignalFromArrayForm()
{

    this->show();

}

void MainWindow::getSignalFromSalaryForm()
{

    this->show();

}

void MainWindow::on_arrayPushBuuton_clicked()
{

    this->hide();
    arrForm->show();

}


void MainWindow::on_salaryPushButton_clicked()
{

    this->hide();
    salForm->show();

}


