#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qserialport.h>
#include <QSettings>
#include <QStringList>
#include <Qchar>
#include <QTimer>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>
#include <QLineEdit>
#include <QWidget>
#include <QString>
#include <QByteArray>
#include <iostream>
#include <time.h>
#include <ctime>
#include <Windows.h>
#include <confirm.h>
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
    void on_connect_motor_clicked();

    void on_test_motor_clicked();

    void on_connect_arduino_clicked();

    void on_test_arduino_clicked();

    void on_Bacardi_clicked();

    void on_test_clicked();

    void receiveMsg(const int msg);

private:
    Ui::MainWindow *ui;
    confirm confirmWindow;
    void send_arduino_command();
    void go_to_pourer_1();
    void go_to_pourer_2();
    void go_to_pourer_3();
    void go_to_pourer_4();
    void go_to_pourer_5();
    void go_to_pourer_6();
    void go_to_pourer_7();
};

#endif // MAINWINDOW_H
