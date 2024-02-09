#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow), doubleValidator(-100, 100, 2, this)
{

    ui->setupUi(this);

    setValidatorLineEdit();
    ui->calculatePushButton->setEnabled(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setValidatorLineEdit()
{

    doubleValidator.setNotation(QDoubleValidator::StandardNotation);
    ui->tempLineEdit->setValidator(&doubleValidator);
    ui->inchesLineEdit->setValidator(&doubleValidator);
    ui->woltLineEdit->setValidator(&doubleValidator);
    ui->suspensionLineEdit->setValidator(&doubleValidator);

}


void MainWindow::on_tempLineEdit_textChanged(const QString &arg1)
{

    if(ui->tempLineEdit->text().toFloat() == 0. || ui->tempLineEdit->text().isEmpty())
    {

        if(ui->tempLineEdit->text().isEmpty())
        {
            ui->resultTempListWidget->clear();
            return;
        }
        else
        {

            ui->resultTempListWidget->addItem("0");
            return;

        }

    }

    ui->resultTempListWidget->clear();

    float celcius = 0;
    celcius = ui->tempLineEdit->text().toFloat();
    ui->resultTempListWidget->addItem(QString::number(celcius * 1.8 + 32));

}

void MainWindow::on_inchesLineEdit_textChanged(const QString &arg1)
{

    if(ui->inchesLineEdit->text().toFloat() == 0. || ui->inchesLineEdit->text().isEmpty())
    {

        if(ui->inchesLineEdit->text().isEmpty())
        {
            ui->resultCentiListWidget->clear();
            return;
        }
        else
        {

            ui->resultCentiListWidget->addItem("0");
            return;

        }

    }

    ui->resultCentiListWidget->clear();

    float inches = 0;
    inches = ui->inchesLineEdit->text().toFloat();
    ui->resultCentiListWidget->addItem(QString::number(inches * 2.54));

}

void MainWindow::calculateStrumMethod()
{

    float wolt = 0.;
    float susp = 0.;

    wolt = ui->woltLineEdit->text().toFloat();
    susp = ui->suspensionLineEdit->text().toFloat();

    ui->strumListWidget->addItem(QString::number(wolt / susp));

}

void MainWindow::on_woltLineEdit_textChanged(const QString &arg1)
{

    if(ui->woltLineEdit->text().isEmpty() || ui->suspensionLineEdit->text().isEmpty())
    {
        ui->calculatePushButton->setEnabled(false);
    }
    else
    {
        ui->calculatePushButton->setEnabled(true);
    }

}


void MainWindow::on_suspensionLineEdit_textChanged(const QString &arg1)
{

    if(ui->woltLineEdit->text().isEmpty() || ui->suspensionLineEdit->text().isEmpty())
    {
        ui->calculatePushButton->setEnabled(false);
    }
    else
    {
        ui->calculatePushButton->setEnabled(true);
    }

    if(ui->woltLineEdit->text().toFloat() <= 0. || ui->suspensionLineEdit->text().toFloat() <= 0.)
    {
        ui->calculatePushButton->setEnabled(false);
    }
    else
    {
        ui->calculatePushButton->setEnabled(true);
    }

}


void MainWindow::on_calculatePushButton_clicked()
{

    ui->strumListWidget->clear();

    float wolt = 0.;
    float susp = 0.;

    wolt = ui->woltLineEdit->text().toFloat();
    susp = ui->suspensionLineEdit->text().toFloat();

    ui->strumListWidget->addItem(QString::number(wolt / susp));

}
