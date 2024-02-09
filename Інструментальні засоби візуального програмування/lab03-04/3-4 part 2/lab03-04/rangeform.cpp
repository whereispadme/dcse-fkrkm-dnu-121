#include "rangeform.h"
#include "ui_rangeform.h"

rangeform::rangeform(QWidget *parent) : QWidget(parent), ui(new Ui::rangeform)
{
    ui->setupUi(this);

    setWindowTitle("Границы диапазона");

    ui->applyPushButton->setEnabled(false);

    setLineEditValidator();

}

rangeform::~rangeform()
{
    delete ui;
}

void rangeform::checkLineEdit()
{

    if(ui->firstLineEdit->text().isEmpty() || ui->lastLineEdit->text().isEmpty())
    {
        ui->applyPushButton->setEnabled(false);
    }
    else
    {
        ui->applyPushButton->setEnabled(true);
    }

    if(ui->firstLineEdit->text().toInt() > ui->lastLineEdit->text().toInt())
    {
        ui->applyPushButton->setEnabled(false);
    }
    else
    {
        ui->applyPushButton->setEnabled(true);
    }

}

void rangeform::setLineEditValidator()
{

    ui->firstLineEdit->setValidator(new QIntValidator(-999, 999, this));
    ui->lastLineEdit->setValidator(new QIntValidator(-999, 999, this));

}

void rangeform::getSignalFromArrayForm()
{
    this->show();
}

void rangeform::on_firstLineEdit_textEdited(const QString &arg1)
{
    checkLineEdit();
}

void rangeform::on_lastLineEdit_textEdited(const QString &arg1)
{
    checkLineEdit();
}

void rangeform::on_applyPushButton_clicked()
{

    int first = ui->firstLineEdit->text().toInt();
    int last = ui->lastLineEdit->text().toInt();

    emit sendSignalToArrayForm(first, last);

}
