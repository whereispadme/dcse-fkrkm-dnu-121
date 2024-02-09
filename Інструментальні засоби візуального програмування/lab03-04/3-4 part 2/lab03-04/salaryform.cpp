#include "salaryform.h"
#include "ui_salaryform.h"

salaryform::salaryform(QWidget *parent) : QWidget(parent), ui(new Ui::salaryform)
{

    ui->setupUi(this);

    setWindowTitle("Задание 2");

    setDefault();

    ui->lineEdit->setValidator(new QIntValidator(500, 10000, this));

}

salaryform::~salaryform()
{
    delete ui;
}

void salaryform::closeEvent(QCloseEvent *event)
{

    emit sendSignalToMainForm();

}

void salaryform::setDefault()
{

    vectorSalary.clear();
    currentIndexMounth = 0;

    ui->firstComboBox->setCurrentIndex(0);
    ui->lastComboBox->setCurrentIndex(0);

    ui->lineEdit->clear();

    ui->label_3->setText("Месяц");

    ui->listWidget->clear();

    ui->groupBox->setEnabled(true);

    ui->groupBox_2->setEnabled(false);

    ui->groupBox_3->setEnabled(false);

    ui->resetPushButton->setEnabled(false);

}

void salaryform::checkComboBox()
{

    if(ui->firstComboBox->currentIndex() <= ui->lastComboBox->currentIndex())
    {

        ui->comboxApplyPushButton->setEnabled(true);

    }
    else
    {

        ui->comboxApplyPushButton->setEnabled(false);

    }

}

std::string salaryform::isMounth(int index)
{

    if(index == 1)  return "Январь";
    if(index == 2)  return "Февраль";
    if(index == 3)  return "Март";
    if(index == 4)  return "Апрель";
    if(index == 5)  return "Май";
    if(index == 6)  return "Июнь";
    if(index == 7)  return "Июль";
    if(index == 8)  return "Август";
    if(index == 9)  return "Сентябрь";
    if(index == 10) return "Октябрь";
    if(index == 11) return "Ноябрь";
    if(index >= 12) return "Декабрь";

}

float salaryform::avarageSalary()
{

    int sum = 0;

    for(int i = 0; i < this->vectorSalary.size(); ++i)
    {
        sum += vectorSalary[i];
    }

    return sum / vectorSalary.size();

}

void salaryform::on_firstComboBox_currentIndexChanged(int index)
{

    checkComboBox();

}


void salaryform::on_lastComboBox_currentIndexChanged(int index)
{

    checkComboBox();

}

void salaryform::on_comboxApplyPushButton_clicked()
{

    ui->groupBox->setEnabled(false);
    ui->groupBox_2->setEnabled(true);
    ui->applyPushButton->setEnabled(false);

    currentIndexMounth = ui->firstComboBox->currentIndex();

    ui->label_3->setText(QString().fromStdString(isMounth(ui->firstComboBox->currentIndex() + 1)));

}

void salaryform::on_lineEdit_textChanged(const QString &arg1)
{

    if(ui->lineEdit->text().isEmpty() || ui->lineEdit->text().toInt() <= 999)
    {
        ui->applyPushButton->setEnabled(false);
    }
    else
    {
        ui->applyPushButton->setEnabled(true);
    }

}

void salaryform::on_applyPushButton_clicked()
{

    ui->listWidget->insertItem(ui->listWidget->count(), QString(ui->label_3->text()) + " - " + QString::number(ui->lineEdit->text().toInt()));

    vectorSalary.push_back(ui->lineEdit->text().toInt());

    currentIndexMounth++;

    ui->label_3->setText(QString().fromStdString(isMounth(currentIndexMounth + 1)));

    if(currentIndexMounth == ui->lastComboBox->currentIndex() + 1)
    {
        ui->groupBox_2->setEnabled(false);
        ui->groupBox_3->setEnabled(true);

        ui->resetPushButton->setEnabled(true);

        ui->listWidget->insertItem(ui->listWidget->count(), QString("Средняя зарплата сотрудника") + " - " + QString::number(avarageSalary()));

    }

}

void salaryform::on_resetPushButton_clicked()
{

    setDefault();

}

