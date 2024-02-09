#include "infoform.h"
#include "ui_infoform.h"

InfoForm::InfoForm(QWidget *parent) : QWidget(parent), ui(new Ui::InfoForm)
{

    ui->setupUi(this);
    setWindowTitle("КущевскийАндрей | lab 09-10");

    model1 = nullptr;
    model2 = nullptr;

    item = nullptr;

    setDefaultParam();
    setTableView();

}

InfoForm::~InfoForm()
{

    delete ui;

    if(this->model1 != nullptr)
        delete model1;

    if(this->model2 != nullptr)
        delete model2;

    if(this->item != nullptr)
        delete item;

}

void InfoForm::closeEvent(QCloseEvent *event)
{

    setDefaultParam();
    emit sendSignalToMainForm();

}

void InfoForm::setDefaultParam()
{

    searchFlightVector.clear();

    QRegularExpression regexForOnlySym("^[а-яА-яа-яА-яІіЇї]{20}");
    regexForOnlySym.setPatternOptions(QRegularExpression::UseUnicodePropertiesOption);
    QValidator *validatorForOnlySym = new QRegularExpressionValidator(regexForOnlySym, this);
    validatorForOnlySym->setLocale(QLocale::AnyLanguage);

    ui->destinationLineEdit->setValidator(validatorForOnlySym);

    ui->groupBox_2->setEnabled(true);
    ui->groupBox_3->setEnabled(true);

    ui->showPushButton->setEnabled(false);
    ui->resetPushButton->setEnabled(false);

    ui->destinationLineEdit->clear();

    ui->firstTimeEdit->clear();
    ui->lastTimeEdit->clear();

    setTableView();

}

void InfoForm::searchByDestination()
{

    for(int i = 0; i < localFlightVector.size(); ++i)
    {

        if(localFlightVector[i].getItemForSearch()[0] == ui->destinationLineEdit->text().toStdString())
        {
            searchFlightVector.push_back(localFlightVector[i]);
        }

    }

    if(searchFlightVector.size() == 0)
    {

        QMessageBox::information(this, "Ошибка!", "Не было найдено рейсов по указанному пункту назначения!");
        return;

    }


    for(int i = 0; i < searchFlightVector.size(); ++i)
    {

        item = new QStandardItem(QString::fromStdString(searchFlightVector[i].getData()[0]));
        model1->setItem(i, 0, item);

        item = new QStandardItem(QString::fromStdString(searchFlightVector[i].getData()[1]));
        model1->setItem(i, 1, item);

        item = new QStandardItem(QString::fromStdString(searchFlightVector[i].getData()[2]));
        model1->setItem(i, 2, item);

        item = new QStandardItem(QString::fromStdString(searchFlightVector[i].getData()[3]));
        model1->setItem(i, 3, item);

    }

    std::vector<Flight>().swap(searchFlightVector);

}

void InfoForm::searchByTime()
{

    for(int i = 0; i < localFlightVector.size(); ++i)
    {

        if(localFlightVector[i].getItemForSearch()[1] >= ui->firstTimeEdit->time().toString().toStdString() && localFlightVector[i].getItemForSearch()[1] <= ui->lastTimeEdit->time().toString().toStdString())
        {
            searchFlightVector.push_back(localFlightVector[i]);
        }

    }

    if(searchFlightVector.size() == 0)
    {

        QMessageBox::information(this, "Ошибка!", "Не было найдено рейсов по указанному временному интервалу!");
        return;

    }


    for(int i = 0; i < searchFlightVector.size(); ++i)
    {

        item = new QStandardItem(QString::fromStdString(searchFlightVector[i].getData()[0]));
        model2->setItem(i, 0, item);

        item = new QStandardItem(QString::fromStdString(searchFlightVector[i].getData()[1]));
        model2->setItem(i, 1, item);

        item = new QStandardItem(QString::fromStdString(searchFlightVector[i].getData()[2]));
        model2->setItem(i, 2, item);

        item = new QStandardItem(QString::fromStdString(searchFlightVector[i].getData()[3]));
        model2->setItem(i, 3, item);

    }

    searchFlightVector.clear();

}

void InfoForm::setTableView()
{

    model1 = new QStandardItemModel;
    ui->destinationTableView->setModel(model1);

    //Заголовки столбцов
    QStringList horizontalHeader;
    horizontalHeader.append("Дата");
    horizontalHeader.append("Пункт назначения");
    horizontalHeader.append("Номер рейса");
    horizontalHeader.append("Стоимость");

    model1->setHorizontalHeaderLabels(horizontalHeader);

    ui->destinationTableView->setModel(model1);
    ui->destinationTableView->resizeRowsToContents();
    ui->destinationTableView->resizeColumnsToContents();
    ui->destinationTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->destinationTableView->setColumnWidth(0, 140);
    ui->destinationTableView->setColumnWidth(1, 120);
    ui->destinationTableView->setColumnWidth(2, 100);
    ui->destinationTableView->setColumnWidth(3, 90);

    // Разрешаем выделение строк
    ui->destinationTableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    // Устанавливаем режим выделения лишь одно строки в таблице
    ui->destinationTableView->setSelectionMode(QAbstractItemView::SingleSelection);

    //Устанавливаем сортировку по атрибутам
    ui->destinationTableView->setSortingEnabled(true);

    model2 = new QStandardItemModel;
    ui->timeTableView->setModel(model2);

    //Заголовки столбцов
    QStringList horizontalHeader2;
    horizontalHeader2.append("Дата");
    horizontalHeader2.append("Пункт назначения");
    horizontalHeader2.append("Номер рейса");
    horizontalHeader2.append("Стоимость");

    model2->setHorizontalHeaderLabels(horizontalHeader2);

    ui->timeTableView->setModel(model2);
    ui->timeTableView->resizeRowsToContents();
    ui->timeTableView->resizeColumnsToContents();
    ui->timeTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->timeTableView->setColumnWidth(0, 140);
    ui->timeTableView->setColumnWidth(1, 120);
    ui->timeTableView->setColumnWidth(2, 100);
    ui->timeTableView->setColumnWidth(3, 90);

    // Разрешаем выделение строк
    ui->timeTableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    // Устанавливаем режим выделения лишь одно строки в таблице
    ui->timeTableView->setSelectionMode(QAbstractItemView::SingleSelection);

    //Устанавливаем сортировку по атрибутам
    ui->timeTableView->setSortingEnabled(true);

}

void InfoForm::saveTableViewRowInFile(bool flag)
{

    QModelIndex myIndex;
    QVariant myData;

    QFile file("C:\\Users\\Professional\\Desktop\\lab09-10.txt");
    QTextStream out(&file);

    std::string string;

    if(flag == false)
    {

        myIndex = ui->destinationTableView->model()->index(ui->destinationTableView->currentIndex().row(), 0, QModelIndex());
        myData = ui->destinationTableView->model()->data(myIndex, Qt::DisplayRole);

        if(file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
        {

            for(int i = 0; i < 4; ++i)
            {

                myIndex = ui->destinationTableView->model()->index(ui->destinationTableView->currentIndex().row(), i, QModelIndex());
                myData = ui->destinationTableView->model()->data(myIndex);

                out << myData.toString() + "\t\t";

            }

            out << "\n";

            file.close();

        }

    }
    else
    {

        myIndex = ui->destinationTableView->model()->index(ui->destinationTableView->currentIndex().row(), 0, QModelIndex());
        myData = ui->destinationTableView->model()->data(myIndex, Qt::DisplayRole);

        if(file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
        {

            for(int i = 0; i < 4; ++i)
            {

                myIndex = ui->timeTableView->model()->index(ui->destinationTableView->currentIndex().row(), i, QModelIndex());
                myData = ui->timeTableView->model()->data(myIndex);

                out << myData.toString() + "\t\t";

            }

            out << "\n";

            file.close();

        }

    }

}

void InfoForm::on_exitToMainPushButton_clicked()
{

    setDefaultParam();
    emit sendSignalToMainForm();

}


void InfoForm::on_destinationRadioButton_clicked()
{

    ui->groupBox_2->setEnabled(true);
    ui->groupBox_3->setEnabled(false);

}


void InfoForm::on_timeRadioButton_clicked()
{

    ui->groupBox_2->setEnabled(false);
    ui->groupBox_3->setEnabled(true);

}


void InfoForm::on_destinationLineEdit_textEdited(const QString &arg1)
{

    if(ui->destinationLineEdit->text().isEmpty())
    {
        ui->showPushButton->setEnabled(false);
    }
    else
    {
        ui->showPushButton->setEnabled(true);
    }

}


void InfoForm::on_firstTimeEdit_userTimeChanged(const QTime &time)
{

    if(ui->firstTimeEdit->time() >= ui->lastTimeEdit->time())
    {

        ui->showPushButton->setEnabled(false);

    }
    else
    {

        ui->showPushButton->setEnabled(true);

    }

}

void InfoForm::on_lastTimeEdit_userTimeChanged(const QTime &time)
{

    if(ui->firstTimeEdit->time() >= ui->lastTimeEdit->time())
    {

        ui->showPushButton->setEnabled(false);

    }
    else
    {

        ui->showPushButton->setEnabled(true);

    }

}

void InfoForm::getSignalFromMainForm(std::vector<Flight> vectorFlight)
{

    this->localFlightVector = vectorFlight;

}

void InfoForm::on_showPushButton_clicked()
{

    ui->resetPushButton->setEnabled(true);
    setTableView();

    if(ui->tabWidget->currentIndex() == 0)
    {

        searchByDestination();

    }

    if(ui->tabWidget->currentIndex() == 1)
    {

        searchByTime();

    }

}

void InfoForm::on_resetPushButton_clicked()
{

    ui->resetPushButton->setEnabled(false);
    setDefaultParam();

}


void InfoForm::on_tabWidget_currentChanged(int index)
{

    if(index == 0)
    {

        if(ui->destinationLineEdit->text().isEmpty())
        {

            ui->showPushButton->setEnabled(false);

        }
        else
        {

            ui->showPushButton->setEnabled(true);

        }

    }

    if(index == 1)
    {

        if(ui->firstTimeEdit->time() >= ui->lastTimeEdit->time())
        {

            ui->showPushButton->setEnabled(false);

        }
        else
        {

            ui->showPushButton->setEnabled(true);

        }

    }

}


void InfoForm::on_destinationTableView_doubleClicked(const QModelIndex &index)
{

    QMessageBox messageBox;
    messageBox.setWindowTitle("Сохранение!");
    messageBox.setText("Сохранение выбранных данных в файл!");
    messageBox.setInformativeText("Ок - Сохранить в файл на рабочем столе\nCancel - Прервать сохранение");
    messageBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    messageBox.setIcon(QMessageBox::Information);
    messageBox.setDefaultButton(QMessageBox::Ok);
    int res = messageBox.exec();

    if (res == QMessageBox::Ok)
    {
        saveTableViewRowInFile(false);
    }
    else
    {
        messageBox.close();
    }

}

void InfoForm::on_timeTableView_doubleClicked(const QModelIndex &index)
{

    QMessageBox messageBox;
    messageBox.setWindowTitle("Сохранение!");
    messageBox.setText("Сохранение выбранных данных в файл!");
    messageBox.setInformativeText("Ок - Сохранить в файл на рабочем столе\nCancel - Прервать сохранение");
    messageBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    messageBox.setIcon(QMessageBox::Information);
    messageBox.setDefaultButton(QMessageBox::Ok);
    int res = messageBox.exec();

    if (res == QMessageBox::Ok)
    {
        saveTableViewRowInFile(true);
    }
    else
    {
        messageBox.close();
    }

}


void InfoForm::on_destinationTableView_customContextMenuRequested(const QPoint &pos)
{

    ui->destinationTableView->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->destinationTableView, SIGNAL(customContextMenuRequested(pos)), this, SLOT(showContextMenu(pos)));

    QMessageBox messageBox;
    messageBox.setWindowTitle("Сохранение!");
    messageBox.setText("Сохранение выбранных данных в файл!");
    messageBox.setInformativeText("Ок - Сохранить в файл на рабочем столе\nCancel - Прервать сохранение");
    messageBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    messageBox.setIcon(QMessageBox::Information);
    messageBox.setDefaultButton(QMessageBox::Ok);
    int res = messageBox.exec();

    if (res == QMessageBox::Ok)
    {
        saveTableViewRowInFile(false);
    }
    else
    {
        messageBox.close();
    }

}



