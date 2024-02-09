#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QIntValidator>

#include "land.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void checkLineEdit();

    void setLineEditValidator();

    void setDefaultValues();

    void setListWidget();
    void setListWidget_2();
private slots:
    void on_lengthLineEdit_textChanged(const QString &arg1);

    void on_widthLineEdit_textEdited(const QString &arg1);

    void on_countLineEdit_textChanged(const QString &arg1);

    void on_applyPushButton_clicked();

    void on_clearPushButton_clicked();

private:
    Ui::MainWindow *ui;
    Land *mainLand;

    std::vector<Land> landVector;

    int summaryTax[3];

};
#endif // MAINWINDOW_H
