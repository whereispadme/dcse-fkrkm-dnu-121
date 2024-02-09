#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    setWindowTitle("КущевскийАндрей | lab 08");

    inputForm = new InputForm();
    infoForm = new InfoForm();

    connect(inputForm, &InputForm::sendSignalToMainForm, this, &MainWindow::getSignalFromInputForm);
    connect(inputForm, &InputForm::sendSignalToMainFormCloseEvent, this, &MainWindow::getSignalFromInputFormCloseEvent);

    connect(this, &MainWindow::sendSignalToInfoForm, infoForm, &InfoForm::getSignalFromMainForm);
    connect(infoForm, &InfoForm::sendSignalToMainForm, this, &MainWindow::getSignalFromInfoForm);

}

MainWindow::~MainWindow()
{

    delete ui;

    delete inputForm;
    delete infoForm;

}

void MainWindow::on_callInputFormPushButton_clicked()
{

    this->hide();
    inputForm->show();

}

void MainWindow::on_infoPushButton_clicked()
{

    this->hide();
    infoForm->show();

    emit sendSignalToInfoForm(flightVector);

}

void MainWindow::on_exitPushButton_clicked()
{

    exit(0);

}

void MainWindow::getSignalFromInputForm(Date date, std::vector<std::string> field)
{

    inputForm->hide();
    this->show();

    flight.setData(date, field[0], field[1], field[2]);
    flightVector.push_back(flight);

}

void MainWindow::getSignalFromInputFormCloseEvent()
{

    inputForm->hide();
    this->show();

}

void MainWindow::getSignalFromInfoForm()
{

    infoForm->hide();
    this->show();

}
