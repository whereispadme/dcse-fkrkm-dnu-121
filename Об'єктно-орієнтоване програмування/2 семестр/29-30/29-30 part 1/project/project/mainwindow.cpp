#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    ui->listWidget->addItem("Молоко - 100 грн. за 1 ед.");
    ui->listWidget->addItem("Кефир - 200 грн. за 1 ед.");
    ui->listWidget->addItem("Сметана - 300 грн. за 1 ед.");

    ui->textBrowser->setText("0");

    ui->listWidget->setCurrentRow(0);

    ui->countLineEdit->setText(QString::number(0));

    sum = 0;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addToBoxButton_clicked()
{

    QMessageBox msgBox;

    int currentListWidgetRow = ui->listWidget->currentRow();
    int value = 0;

    if((currentListWidgetRow == -1) || (ui->countLineEdit->text() == "") || (ui->countLineEdit->text().toInt() <= 0))
    {
        msgBox.setWindowTitle("Ошибка!");
        msgBox.setText("Не выбрано!");
        msgBox.exec();
    }
    else
    {

        switch(currentListWidgetRow)
        {

        case 0:
            value = 100;
            value = value * ui->countLineEdit->text().toInt();
            ui->listWidget_2->addItem("Молоко - " + QString::number(value) + " грн.");
            sum += value;
            break;

        case 1:
            value = 200;
            value = value * ui->countLineEdit->text().toInt();
            ui->listWidget_2->addItem("Кефир - " + QString::number(value) + " грн.");
            sum += value;
        break;

        case 2:
            value = 300;
            value = value * ui->countLineEdit->text().toInt();
            ui->listWidget_2->addItem("Сметана - " + QString::number(value) + " грн.");
            sum += value;
        break;

        }

    }

}

void MainWindow::on_buyButton_clicked()
{

   ui->listWidget_2->clear();
   ui->textBrowser->setText(QString::number(sum));

}
