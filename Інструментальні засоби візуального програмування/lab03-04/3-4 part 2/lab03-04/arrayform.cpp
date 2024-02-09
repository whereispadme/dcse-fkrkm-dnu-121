#include "arrayform.h"
#include "ui_arrayform.h"

arrayform::arrayform(QWidget *parent) : QWidget(parent), ui(new Ui::arrayform)
{

    ui->setupUi(this);

    setWindowTitle("Задание 1");

    setLineEditValidator();
    setDefault();

    intArray = nullptr;

    rangeForm = new rangeform;

    connect(this, &arrayform::sendSignalToRangeForm, rangeForm, &rangeform::getSignalFromArrayForm);
    connect(rangeForm, &rangeform::sendSignalToArrayForm, this, &arrayform::getSignalFromRangeForm);

}

arrayform::~arrayform()
{
    delete ui;

    if(this->intArray != nullptr)
        delete intArray;

}

void arrayform::getSignalFromRangeForm(int first, int last)
{

    rangeForm->hide();

    rangeVector = intArray->getElementsInRange(first, last);

    for(unsigned int i = 0; i < rangeVector.size(); ++i)
    {

        ui->resultArrayListWidget->insertItem(i, QString::number(this->rangeVector[i]));

    }

    if(this->rangeVector.size() == 0)
    {

        ui->resultArrayListWidget->insertItem(0, "Не было найдено значений, которые входят в указанный диапазон!");

    }

}

void arrayform::closeEvent(QCloseEvent *event)
{

    emit sendSignalToMainForm();

}

void arrayform::setDefault()
{

    ui->sizeLabel->setEnabled(true);
    ui->sizeOfArrayLineEdit->setEnabled(true);

    ui->sizeOfArrayLineEdit->clear();
    ui->indexLineEdit->clear();

    ui->indexLabel->setText("Номер элемента [] -->");
    this->currentIndex = 0;

    ui->sizeOfArrayPushButton->setEnabled(false);

    ui->indexLabel->setEnabled(false);
    ui->indexLineEdit->setEnabled(false);
    ui->addNewValuePushButton->setEnabled(false);

    ui->groupBox_2->setEnabled(false);

    ui->resetPushButton->setEnabled(false);

    ui->baseArrayListWidget->clear();
    ui->resultArrayListWidget->clear();

}

void arrayform::setLineEditValidator()
{

    ui->sizeOfArrayLineEdit->setValidator(new QIntValidator(1, 99, this));
    ui->indexLineEdit->setValidator(new QIntValidator(-999, 999, this));

}

void arrayform::setBaseListWidget()
{

    ui->groupBox_2->setEnabled(true);

    intArray = new MyArray(this->intVector.size());
    intArray->setArray(intVector);

    for(unsigned int i = 0; i < intVector.size(); ++i)
    {

        ui->baseArrayListWidget->insertItem(i, QString::number(this->intArray->getIndexArray(i)));

    }

}

void arrayform::setResultArrayListWidget(bool flag)
{

    ui->resultArrayListWidget->clear();

    switch(flag)
    {

    case 0:
    {

        intArray->replaceOnPairedIndexSquare();

        for(unsigned int i = 0; i < intVector.size(); ++i)
        {

            ui->resultArrayListWidget->insertItem(i, QString::number(this->intArray->getIndexArray(i)));

        }

        break;
    }

    }

}

void arrayform::on_sizeOfArrayLineEdit_textEdited(const QString &arg1)
{

    if(ui->sizeOfArrayLineEdit->text().isEmpty() || ui->sizeOfArrayLineEdit->text().toInt() == 0)
    {
        ui->sizeOfArrayPushButton->setEnabled(false);
    }
    else
    {
        ui->sizeOfArrayPushButton->setEnabled(true);
    }

}

void arrayform::on_sizeOfArrayPushButton_clicked()
{

    ui->sizeLabel->setEnabled(false);
    ui->sizeOfArrayLineEdit->setEnabled(false);
    ui->sizeOfArrayPushButton->setEnabled(false);
    ui->indexLabel->setText("Номер элемента [0] -->");

    ui->indexLabel->setEnabled(true);
    ui->indexLineEdit->setEnabled(true);

}

void arrayform::on_indexLineEdit_textEdited(const QString &arg1)
{

    if(ui->indexLineEdit->text().isEmpty() || ui->indexLineEdit->text().toInt() == 0)
    {
        ui->addNewValuePushButton->setEnabled(false);
    }
    else
    {
        ui->addNewValuePushButton->setEnabled(true);
    }

}

void arrayform::on_addNewValuePushButton_clicked()
{

    intVector.push_back(ui->indexLineEdit->text().toInt());

    this->currentIndex++;
    ui->indexLabel->setText("Номер элемента [" + QString::number(currentIndex) + "] -->");

    if(this->currentIndex == ui->sizeOfArrayLineEdit->text().toUInt())
    {
        setDefault();
        setBaseListWidget();

        ui->sizeOfArrayLineEdit->setEnabled(false);
        ui->sizeLabel->setEnabled(false);

        ui->resetPushButton->setEnabled(true);

    }

}

void arrayform::on_comboBoxPushButton_clicked()
{

    switch(ui->comboBox->currentIndex())
    {

    case 0:
    {
        setResultArrayListWidget(false);
        break;
    }

    case 1:
    {

        emit sendSignalToRangeForm();
        setResultArrayListWidget(true);
        break;
    }

    }

}

void arrayform::on_resetPushButton_clicked()
{

    ui->resetPushButton->setEnabled(false);
    setDefault();

    this->intVector.clear();
    this->rangeVector.clear();

    delete intArray;

    intArray = nullptr;

}
