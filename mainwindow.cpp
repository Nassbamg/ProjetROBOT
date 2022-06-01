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

void MainWindow::AfficheVitesse(){

        ui->label1->setText(QString(robot.VitesseFromRobot1()));
        ui->label2->setText(QString(robot.VitesseFromRobot2()));


}

//Fonction connexion
/*void MainWindow::on_ButConnect_pressed(){
    robot.doConnect();


}

//Fonction deconnexion
void MainWindow::on_ButDisconnect_pressed(){

    robot.disConnect();

}*/


//Bouton Avancer
void MainWindow::on_ButUp_pressed()
{

    robot.SetRobot1(170,170,80);
    Mouvement=true;

}


void MainWindow::on_ButUp_released()
{

    robot.SetRobot1(0,0,80);
    Mouvement=false;
}

//Bouton Droite
void MainWindow::on_ButRight_pressed()
{

    robot.SetRobot1(170,15,80);
    Mouvement=true;
}


void MainWindow::on_ButRight_released()
{

    robot.SetRobot1(0,0,80);
    Mouvement=false;
}

//Bouton Reculer
void MainWindow::on_ButDown_pressed()
{

    robot.SetRobot1(170,170,0);
    Mouvement=true;
}


void MainWindow::on_ButDown_released()
{

    robot.SetRobot1(0,0,0);
    Mouvement=false;
}

//Bouton Gauche
void MainWindow::on_ButLeft_pressed()
{

    robot.SetRobot1(15,170,80);
    Mouvement=true;
}


void MainWindow::on_ButLeft_released()
{

    robot.SetRobot1(0,0,80);
    Mouvement=false;
}






