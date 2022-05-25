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


//Bouton Avancer
void MainWindow::on_ButUp_pressed()
{

    robot.SetRobot1(170,170,80);
}


void MainWindow::on_ButUp_released()
{

    robot.SetRobot1(0,0,80);
}

//Bouton Droite
void MainWindow::on_ButRight_pressed()
{

    robot.SetRobot1(170,15,80);
}


void MainWindow::on_ButRight_released()
{

    robot.SetRobot1(0,0,80);
}

//Bouton Reculer
void MainWindow::on_ButDown_pressed()
{

    robot.SetRobot1(170,170,0);
}


void MainWindow::on_ButDown_released()
{

    robot.SetRobot1(0,0,0);
}

//Bouton Gauche
void MainWindow::on_ButLeft_pressed()
{

    robot.SetRobot1(15,170,80);
}


void MainWindow::on_ButLeft_released()
{

    robot.SetRobot1(0,0,80);
}



