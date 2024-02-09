#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    ui->listWidget->addItem("I -   250 грн. за гектар");
    ui->listWidget->addItem("II -  367 грн. за гектар");
    ui->listWidget->addItem("III - 595 грн. за гектар");

    ui->listWidget_2->addItem("I   - 0 грн.");
    ui->listWidget_2->addItem("II  - 0 грн.");
    ui->listWidget_2->addItem("III - 0 грн.");

    ui->listWidget->setCurrentRow(0);

    ui->lengthEdit->setText("0");
    ui->widthEdit->setText("0");
    ui->countEdit->setText("0");

    sArea1 = 0;
    sArea2 = 0;
    sArea3 = 0;

    hectare1 = 0;
    hectare2 = 0;
    hectare3 = 0;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    QMessageBox msgBox;
    msgBox.setText("Не выбрано!");
    msgBox.setWindowTitle("Ошибка!");

    int currentRow = ui->listWidget->currentRow();
    int area = 0;

    if((ui->listWidget->currentRow() == -1) || (ui->lengthEdit->text() == "") || (ui->widthEdit->text() == "") || (ui->lengthEdit->text().toInt() <= 0) ||
    (ui->widthEdit->text().toInt() <= 0) || (ui->countEdit->text().toInt() <= 0) || (ui->countEdit->text() == ""))
    {

        msgBox.exec();

    }
    else
    {

        switch(currentRow)
        {

        case 0:

            area = ui->lengthEdit->text().toInt() * ui->widthEdit->text().toInt();
            ui->listWidget_3->addItem("Тип участка: I, площадь: " + QString::number(area) + ", кол-во: " + ui->countEdit->text() + ".");
            sArea1 += area * ui->countEdit->text().toInt();
            hectare1 = sArea1 / 10000;

            ui->listWidget_2->clear();

            ui->listWidget_2->addItem("I   - " + QString::number(hectare1 * 250) + " грн.");
            ui->listWidget_2->addItem("II  - " + QString::number(hectare2 * 367) + " грн.");
            ui->listWidget_2->addItem("III - " + QString::number(hectare3 * 595) + " грн.");

        break;

        case 1:

            area = ui->lengthEdit->text().toInt() * ui->widthEdit->text().toInt();
            ui->listWidget_3->addItem("Тип участка: II, площадь: " + QString::number(area) + ", кол-во: " + ui->countEdit->text() + ".");
            sArea2 += area * ui->countEdit->text().toInt();
            hectare2 = sArea2 / 10000;

            ui->listWidget_2->clear();

            ui->listWidget_2->addItem("I   - " + QString::number(hectare1 * 250) + " грн.");
            ui->listWidget_2->addItem("II  - " + QString::number(hectare2 * 367) + " грн.");
            ui->listWidget_2->addItem("III - " + QString::number(hectare3 * 595) + " грн.");

        break;

        case 2:

            area = ui->lengthEdit->text().toInt() * ui->widthEdit->text().toInt();
            ui->listWidget_3->addItem("Тип участка: III, площадь: " + QString::number(area) + ", кол-во: " + ui->countEdit->text() + ".");
            sArea3 += area * ui->countEdit->text().toInt();
            hectare3 = sArea3 / 10000;

            ui->listWidget_2->clear();

            ui->listWidget_2->addItem("I   - " + QString::number(hectare1  * 250) + " грн.");
            ui->listWidget_2->addItem("II  - " + QString::number(hectare2 * 367) + " грн.");
            ui->listWidget_2->addItem("III - " + QString::number(hectare3 * 595) + " грн.");

        break;

        }

    }

}

void MainWindow::on_pushButton_2_clicked()
{

    ui->listWidget->setCurrentRow(0);

    ui->lengthEdit->setText("0");
    ui->widthEdit->setText("0");
    ui->countEdit->setText("0");

    ui->listWidget_2->clear();
    ui->listWidget_2->addItem("I   - 0 грн.");
    ui->listWidget_2->addItem("II  - 0 грн.");
    ui->listWidget_2->addItem("III - 0 грн.");

    ui->listWidget_3->clear();

    sArea1 = 0;
    sArea2 = 0;
    sArea3 = 0;

    hectare1 = 0;
    hectare2 = 0;
    hectare3 = 0;

}
