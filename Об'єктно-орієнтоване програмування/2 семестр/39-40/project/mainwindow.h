#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "catalogue.h"
#include "book.h"
#include "form.h"

#include <QMainWindow>
#include <QStandardItemModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setLineEditValidator();

    void setDefaultValues();

    void checkLineEdit();

    void setTableView();

    void setTableModel();

private slots:
    void on_titleLineEdit_textChanged(const QString &arg1);

    void on_authorLineEdit_textChanged(const QString &arg1);

    void on_yearLineEdit_textChanged(const QString &arg1);

    void on_addBookPushButton_clicked();

    void on_resetPushButton_clicked();

    void on_sortingPushButton_clicked();

    void on_findPushButton_clicked();

    void on_deletePushButton_clicked();

    void on_uploadPushButton_clicked();

signals:
    void signalToForm(bool status);

public slots:
    void getSignalFromForm(bool status, QString);

private:
    Ui::MainWindow *ui;
    form *_form;

    QStandardItemModel *model;

    Catalogue *mainCatalogue;
    Book *tempBook;

};
#endif // MAINWINDOW_H
