#include "listform.h"
#include "ui_listform.h"

ListForm::ListForm(QWidget *parent) : QWidget(parent), ui(new Ui::ListForm)
{

    ui->setupUi(this);

    setWindowTitle("Кущевский Андрей, ПЗ-19-1");

    setDefaultConfig();

    inputForm = new InputForm;
    connect(inputForm, &InputForm::sendSignalToListForm, this, &ListForm::getSignalFromInputForm);

}

ListForm::~ListForm()
{
    delete ui;
}

void ListForm::closeEvent(QCloseEvent *event)
{
    emit sendSignalToMainForm();
}

void ListForm::setDefaultConfig()
{

    ui->groupBox->setEnabled(true);

    ui->fileRadioButton->setChecked(true);

    ui->groupBox_2->setEnabled(false);
    ui->groupBox_3->setEnabled(false);

    ui->resetPushButton->setEnabled(false);

}

void ListForm::readDataFile()
{

    std::string line;

    std::string check;

    std::ifstream in("C:\\Users\\Professional\\Desktop\\lab05-06 part 2.txt");

    std::ifstream file("C:\\Users\\Professional\\Desktop\\lab05-06 part 2.txt");

    if(in.is_open())
    {

       file.is_open();
       getline(file, check);

        if(file.eof() && check.empty())
        {

            QMessageBox::critical(this, "Ошибка!", "Файл не содержит информации!");
            setDefaultConfig();
            return;

        }

        while (getline(in, line))
        {
            ui->generalListWidget->insertItem(ui->generalListWidget->count(), QString::fromLocal8Bit(line));
        }

    }

    in.close();

}

void ListForm::saveDataFile(bool choice)
{

    std::fstream in("C:\\Users\\Professional\\Desktop\\lab05-06 part 2.txt", std::ios::in);
    in.open("C:\\Users\\Professional\\Desktop\\lab05-06 part 2.txt", std::ios::out | std::ios::in);

    std::ofstream out;
    out.open("C:\\Users\\Professional\\Desktop\\lab05-06 part 2.txt");

    if(choice == false){

    if (out.is_open())
    {

        for(int i = 0; i < ui->generalListWidget->count(); ++i)
        {
            out << ui->generalListWidget->item(i)->text().toStdString() << std::endl;
        }

    }

    }
    else
    {

        if (out.is_open())
        {

            for(int i = 0; i < ui->newListWidget->count(); ++i)
            {
                out << ui->newListWidget->item(i)->text().toStdString() << std::endl;
            }

        }

    }


}

void ListForm::getSignalFromInputForm(std::vector<std::string> arg1)
{

    inputForm->hide();
    this->show();

    for(int i = 0; i < arg1.size(); ++i)
    {

        ui->generalListWidget->insertItem(ui->generalListWidget->count(), QString::fromStdString(arg1[i]));

    }

}

void ListForm::on_uploadApplyPushButton_clicked()
{

    ui->groupBox->setEnabled(false);

    ui->groupBox_2->setEnabled(true);
    ui->saveGeneralListPushButton->setEnabled(true);
    ui->saveNewListPushButton->setEnabled(false);

    ui->groupBox_3->setEnabled(true);

    ui->resetPushButton->setEnabled(true);

    if(ui->fileRadioButton->isChecked())
    {

        readDataFile();

    }
    else
    {

        this->hide();
        inputForm->show();

    }

}

void ListForm::on_addToGenListPushButton_clicked()
{

    this->hide();
    inputForm->show();

}

void ListForm::on_delFromGenListPushButton_clicked()
{

    std::vector<std::string> someVec;

    for(int i = 0; i < ui->generalListWidget->count(); ++i)
    {

        if(ui->generalListWidget->item(i)->text().toStdString() != ui->generalListWidget->currentItem()->text().toStdString())
        {
            someVec.push_back(ui->generalListWidget->item(i)->text().toStdString());
        }

    }

    ui->generalListWidget->clear();

    for(int i = 0; i < someVec.size(); ++i)
    {

        ui->generalListWidget->insertItem(i, QString::fromStdString(someVec[i]));

    }

}

void ListForm::on_comeToNewListPushButton_clicked()
{

    ui->saveNewListPushButton->setEnabled(true);

    if(ui->generalListWidget->count() == 0)
    {
        return;
    }

    ui->newListWidget->insertItem(ui->newListWidget->count(), ui->generalListWidget->currentItem()->text());

    std::vector<std::string> someVec;

    for(int i = 0; i < ui->generalListWidget->count(); ++i)
    {

        if(ui->generalListWidget->item(i)->text().toStdString() != ui->generalListWidget->currentItem()->text().toStdString())
        {
            someVec.push_back(ui->generalListWidget->item(i)->text().toStdString());
        }

    }

    ui->generalListWidget->clear();

    for(int i = 0; i < someVec.size(); ++i)
    {

        ui->generalListWidget->insertItem(i, QString::fromStdString(someVec[i]));

    }

    ui->textBrowser->clear();

    ui->textBrowser->setText("Стоимость всех товаров из нового списка = " + QString::number(ui->newListWidget->count() * 7.41) + "грн.");

}

void ListForm::on_resetPushButton_clicked()
{

    setDefaultConfig();

    ui->generalListWidget->clear();
    ui->newListWidget->clear();

    ui->textBrowser->clear();

}


void ListForm::on_saveGeneralListPushButton_clicked()
{
    saveDataFile(false);
}


void ListForm::on_saveNewListPushButton_clicked()
{
    saveDataFile(true);
}

