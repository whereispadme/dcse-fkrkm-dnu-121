#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    setWindowTitle("Кущевский Андрей | lab05-06");

    priceForm = new PriceForm;
    listForm = new ListForm;

    connect(priceForm, &PriceForm::sendSignalToMainForm, this, &MainWindow::getSignalFromPriceForm);
    connect(listForm, &ListForm::sendSignalToMainForm, this, &MainWindow::getSignalFromListForm);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete priceForm;
    delete listForm;
}

void MainWindow::getSignalFromPriceForm()
{
    priceForm->hide();
    this->show();
}

void MainWindow::getSignalFromListForm()
{
    listForm->hide();
    this->show();
}

void MainWindow::on_pricePushButton_clicked()
{

    this->hide();
    priceForm->show();

}

void MainWindow::on_listPushButton_clicked()
{
    this->hide();
    listForm->show();
}
