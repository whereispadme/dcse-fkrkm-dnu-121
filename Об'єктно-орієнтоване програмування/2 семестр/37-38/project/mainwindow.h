#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "pyramidform.h"
#include "hemisphereform.h"

#include <QMainWindow>
#include <QStandardItemModel>

#include <vector>

#include "quadrangularpyramid.h"
#include "hemisphere.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

signals:
    void signalToPyramidForm();
    void signalToHemisphereForm();

public slots:
    void getSignalFromPyramidForm(float length, float height, float side);
    void getSignalFromHemisphereForm(float radius);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setTable();

private slots:
    void on_polyhedronRadioButton_clicked();

    void on_roundRadioButton_clicked();

    void on_applyTypeFigurePushButton_clicked();

    void on_resetPushButon_clicked();

private:
    Ui::MainWindow *ui;

    QStandardItemModel *model;

    pyramidForm *pForm;
    hemisphereForm *hForm;

    QuadrangularPyramid *pyramid;
    std::vector<QuadrangularPyramid> pyramidVector;

    Hemisphere *hemisphere;
    std::vector<Hemisphere> hemisphereVector;

    int currentRow;

};
#endif // MAINWINDOW_H
