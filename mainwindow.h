#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "myrobot.h"
#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    MyRobot robot;


private slots:
    void on_ButUp_pressed();
    void on_ButUp_released();
    void on_ButRight_pressed();
    void on_ButRight_released();
    void on_ButDown_pressed();
    void on_ButDown_released();
    void on_ButLeft_pressed();
    void on_ButLeft_released();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
