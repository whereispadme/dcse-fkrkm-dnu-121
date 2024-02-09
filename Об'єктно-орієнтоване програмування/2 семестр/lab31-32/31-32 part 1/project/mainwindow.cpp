#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("КущевскийАндрей, ПЗ-19-1 | 31-32 part 1");

    this->mainLand = nullptr;

    setLineEditValidator();
    setDefaultValues();

}

MainWindow::~MainWindow()
{
    delete ui;

    if(this->mainLand != nullptr)
        delete this->mainLand;
}

void MainWindow::setLineEditValidator()
{

    ui->lengthLineEdit->setValidator(new QIntValidator(1, 1000));
    ui->widthLineEdit->setValidator(new QIntValidator(1, 1000));
    ui->countLineEdit->setValidator(new QIntValidator(1, 100));

}

void MainWindow::setDefaultValues()
{

    this->summaryTax[0] = 0;
    this->summaryTax[1] = 0;
    this->summaryTax[2] = 0;

    ui->comboBox->setCurrentIndex(0);

    ui->lengthLineEdit->clear();
    ui->widthLineEdit->clear();
    ui->countLineEdit->clear();

    ui->listWidget->clear();
    ui->listWidget_2->clear();

    ui->applyPushButton->setEnabled(false);
    ui->clearPushButton->setEnabled(false);

    if(this->mainLand != nullptr)
    {
        delete this->mainLand;
        this->landVector.clear();
    }

}

void MainWindow::checkLineEdit()
{

    if(ui->lengthLineEdit->text().isEmpty() || ui->widthLineEdit->text().isEmpty() || ui->countLineEdit->text().isEmpty())
    {
        ui->applyPushButton->setEnabled(false);
    }
    else
    {
        ui->applyPushButton->setEnabled(true);
    }

}

void MainWindow::setListWidget()
{
    ui->listWidget->addItem("Тип участка: " + QString::number(mainLand->getType()) + ", площадь: " + QString::number(mainLand->getArea()) + ", кол-во: " + QString::number(mainLand->getCount()) + ".");
}

void MainWindow::setListWidget_2()
{

    ui->listWidget_2->clear();

    ui->listWidget_2->addItem("I   - " + QString::number(this->summaryTax[0]) + " грн.");
    ui->listWidget_2->addItem("II  - " + QString::number(this->summaryTax[1]) + " грн.");
    ui->listWidget_2->addItem("III - " + QString::number(this->summaryTax[2]) + " грн.");

}

void MainWindow::on_lengthLineEdit_textChanged(const QString &arg1)
{
    checkLineEdit();
}


void MainWindow::on_widthLineEdit_textEdited(const QString &arg1)
{
    checkLineEdit();
}


void MainWindow::on_countLineEdit_textChanged(const QString &arg1)
{
    checkLineEdit();
}


void MainWindow::on_applyPushButton_clicked()
{

    ui->clearPushButton->setEnabled(true);

    mainLand = new Land(ui->comboBox->currentIndex() + 1, ui->countLineEdit->text().toInt(), ui->lengthLineEdit->text().toInt(), ui->widthLineEdit->text().toInt());
    landVector.push_back(*mainLand);

    setListWidget();

    switch(ui->comboBox->currentIndex())
    {

    case 0:
    {
        this->summaryTax[0] += mainLand->getTax();
        break;
    }

    case 1:
    {
        this->summaryTax[1] += mainLand->getTax();
        break;
    }

    case 2:
    {
        this->summaryTax[2] += mainLand->getTax();
        break;
    }

    }

    setListWidget_2();

}


void MainWindow::on_clearPushButton_clicked()
{

    ui->clearPushButton->setEnabled(false);
    setDefaultValues();

}

