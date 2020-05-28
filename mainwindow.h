#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "viewwork.h"
#include <QTimer>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();


private slots:
    void on_actionNew_triggered();

    void on_actionWire_triggered();


    void on_actionExit_triggered();

    void on_Simulate_released();

    void on_Wire_released();

    void on_Components_released();

private:

    Ui::MainWindow *ui;
    ViewWork *view;

};

#endif // MAINWINDOW_H
