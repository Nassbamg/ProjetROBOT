#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myrobot.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    robot.doConnect();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_BUT1_pressed()
{
    ui->label->setText("1");
    robot.SetRobot1(170,170,80);
}


void MainWindow::on_BUT1_released()
{
    ui->label->setText("0");
    robot.SetRobot1(0,0,80);
}

