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
    void on_BUT1_pressed();

    void on_BUT1_released();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
