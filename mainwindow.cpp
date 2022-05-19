#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myrobot.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    robot.doConnect();
    robot.SetRobot1(200,200,80);
}

MainWindow::~MainWindow()
{
    delete ui;
}

