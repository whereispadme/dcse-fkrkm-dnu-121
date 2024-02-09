#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Кущевский Андрей, ПЗ-19-1");

    this->mainCatalogue = new Catalogue(100);
    this->tempBook = nullptr;
    this->model = nullptr;

    this->_form = new form();
    connect(this, &MainWindow::signalToForm, _form, &form::getSignalFromMain);
    connect(_form, &form::signalToMain, this, &MainWindow::getSignalFromForm);

    setLineEditValidator();
    setDefaultValues();
    setTableView();

}

MainWindow::~MainWindow()
{
    delete ui;

    if(this->mainCatalogue != nullptr)
        delete this->mainCatalogue;

    if(this->tempBook != nullptr)
        delete this->tempBook;

}

void MainWindow::setLineEditValidator()
{

    QRegularExpression regexForOnlySym("^[а-яА-яа-яА-яІіЇї. ]{20}");
    regexForOnlySym.setPatternOptions(QRegularExpression::UseUnicodePropertiesOption);
    QValidator *validatorForOnlySym = new QRegularExpressionValidator(regexForOnlySym, this);
    validatorForOnlySym->setLocale(QLocale::AnyLanguage);

    ui->authorLineEdit->setValidator(validatorForOnlySym);
    ui->titleLineEdit->setValidator(validatorForOnlySym);
    ui->yearLineEdit->setValidator(new QIntValidator(1900, 2022, this));

}

void MainWindow::setDefaultValues()
{
    ui->authorLineEdit->clear();
    ui->titleLineEdit->clear();
    ui->yearLineEdit->clear();

    ui->uploadPushButton->setEnabled(false);
    ui->sortingPushButton->setEnabled(false);
    ui->addBookPushButton->setEnabled(false);
    ui->resetPushButton->setEnabled(false);
    ui->findPushButton->setEnabled(false);
    ui->deletePushButton->setEnabled(false);

    setTableView();

}

void MainWindow::checkLineEdit()
{

    if(ui->titleLineEdit->text().isEmpty() || ui->authorLineEdit->text().isEmpty() || ui->yearLineEdit->text().isEmpty()
       || ui->yearLineEdit->text().toInt() > 2022 || ui->yearLineEdit->text().toInt() < 1700)
    {
        ui->addBookPushButton->setEnabled(false);
    }
    else
    {
       ui->addBookPushButton->setEnabled(true);
    }

}

void MainWindow::setTableView()
{

    model = new QStandardItemModel;
    ui->tableView->setModel(model);

    //Заголовки столбцов
    QStringList horizontalHeader;
    horizontalHeader.append("Название");
    horizontalHeader.append("Автор");
    horizontalHeader.append("Год издания");

    model->setHorizontalHeaderLabels(horizontalHeader);
    ui->tableView->setModel(model);
    ui->tableView->resizeRowsToContents();
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableView->setColumnWidth(0, 110);
    ui->tableView->setColumnWidth(1, 100);
    ui->tableView->setColumnWidth(2, 110);

    // Разрешаем выделение строк
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    // Устанавливаем режим выделения лишь одной строки в таблице
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);

    //Устанавливаем сортировку по атрибутам
    ui->tableView->setSortingEnabled(true);

}

void MainWindow::setTableModel()
{

    model->clear();
    setTableView();

    for(int i = 0; i < mainCatalogue->getCurrentIndex(); ++i)
    {

        model->setItem(i, 0, new QStandardItem(QString::fromStdString(mainCatalogue->getBookIndex(i).getData()[0])));
        model->setItem(i, 1, new QStandardItem(QString::fromStdString(mainCatalogue->getBookIndex(i).getData()[1])));
        model->setItem(i, 2, new QStandardItem(QString::fromStdString(mainCatalogue->getBookIndex(i).getData()[2])));
    }

}

void MainWindow::on_titleLineEdit_textChanged(const QString &arg1)
{
    checkLineEdit();
}


void MainWindow::on_authorLineEdit_textChanged(const QString &arg1)
{
    checkLineEdit();
}


void MainWindow::on_yearLineEdit_textChanged(const QString &arg1)
{
    checkLineEdit();
}


void MainWindow::on_addBookPushButton_clicked()
{

    ui->uploadPushButton->setEnabled(true);
    ui->sortingPushButton->setEnabled(true);
    ui->addBookPushButton->setEnabled(true);
    ui->resetPushButton->setEnabled(true);
    ui->findPushButton->setEnabled(true);
    ui->deletePushButton->setEnabled(true);

    this->tempBook = new Book(ui->titleLineEdit->text().toStdString(), ui->authorLineEdit->text().toStdString(), ui->yearLineEdit->text().toStdString());
    this->mainCatalogue->addNewBookToCatalogue(this->tempBook);

    setTableModel();

}

void MainWindow::on_sortingPushButton_clicked()
{

    this->mainCatalogue->sortBookInCatalogue();
    setTableModel();

}

void MainWindow::getSignalFromForm(bool status, QString key)
{

    _form->hide();

    if(status == false)
    {

        int index = this->mainCatalogue->findBookInCatalogue(key.toStdString());

        if(index != -1)
        {
            model->clear();
            setTableView();

            model->setItem(0, 0, new QStandardItem(QString::fromStdString(mainCatalogue->getBookIndex(index).getData()[0])));
            model->setItem(0, 1, new QStandardItem(QString::fromStdString(mainCatalogue->getBookIndex(index).getData()[1])));
            model->setItem(0, 2, new QStandardItem(QString::fromStdString(mainCatalogue->getBookIndex(index).getData()[2])));

        }
        else
        {

            model->clear();
            setTableView();

        }

    }
    else
    {

        this->mainCatalogue->deleteBookFromCatalogue(key.toStdString());
        setTableModel();

        if(this->mainCatalogue->getCurrentIndex() == 0)
        {

            MainWindow::on_resetPushButton_clicked();

        }

    }

}

void MainWindow::on_findPushButton_clicked()
{

    emit signalToForm(false);

}

void MainWindow::on_deletePushButton_clicked()
{

    emit signalToForm(true);

}

void MainWindow::on_resetPushButton_clicked()
{

    setDefaultValues();

    this->mainCatalogue = new Catalogue(100);

    if(this->tempBook != nullptr)
        delete this->tempBook;

    ui->resetPushButton->setEnabled(false);

}

void MainWindow::on_uploadPushButton_clicked()
{
    setTableModel();
}

