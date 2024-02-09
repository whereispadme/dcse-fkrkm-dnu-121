#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "headers.h"
#include "student.h"
#include "studenttableviewaction.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setMainWindowProperty();
    bool setDatabaseConnection();

private slots:

    void on_addGroupPushButton_clicked();

    void on_addPushButton_clicked();

    void on_editPushButton_clicked();

    void on_deletePushButton_clicked();

    void on_filterPushButton_clicked();

    void on_resetPushButton_clicked();

    void on_studentTableView_activated(const QModelIndex &index);

    void on_studentTableView_doubleClicked(const QModelIndex &index);

    void on_diagramPushButton_clicked();

private:
    Ui::MainWindow *ui;

    Student *_student;
    StudentTableViewAction *_studentTableViewAction;

    QSqlDatabase _database;
    QSqlTableModel *_tableModel;
    QSqlQueryModel *_queryModel;

};

#endif
