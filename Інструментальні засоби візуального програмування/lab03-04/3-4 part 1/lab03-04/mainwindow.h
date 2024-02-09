#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDoubleValidator>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setValidatorLineEdit();
    void calculateStrumMethod();

private slots:
    void on_tempLineEdit_textChanged(const QString &arg1);

    void on_inchesLineEdit_textChanged(const QString &arg1);

    void on_woltLineEdit_textChanged(const QString &arg1);

    void on_suspensionLineEdit_textChanged(const QString &arg1);

    void on_calculatePushButton_clicked();

private:
    Ui::MainWindow *ui;

    QDoubleValidator doubleValidator;

};
#endif // MAINWINDOW_H
