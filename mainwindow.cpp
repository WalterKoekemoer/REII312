#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->frame->setGeometry(10,10,500,81);

    ui->Simulate->setIcon(QIcon(":/images/icons8-electronics-50.png"));
    ui->Simulate->setIconSize(QSize(51,51));
    ui->Wire->setIcon(QIcon(":/images/icons8-heater-resistor-50.png"));
    ui->Wire->setIconSize(QSize(51,51));
    ui->Components->setIcon(QIcon(":/images/icons8-wire-50.png"));
    ui->Components->setIconSize(QSize(51,51));

    view = nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    view = new ViewWork(centralWidget());

}

void MainWindow::on_actionWire_triggered()
{
    if(view != nullptr)
    {
        if(view->myLab->wiring == false) view->myLab->wiring = true;

        else view->myLab->wiring = false;

    }
}


void MainWindow::on_actionExit_triggered()
{
    close();
}

void MainWindow::on_Simulate_released()
{

}

void MainWindow::on_Wire_released()
{
    on_actionWire_triggered();
}

void MainWindow::on_Components_released()
{

}
