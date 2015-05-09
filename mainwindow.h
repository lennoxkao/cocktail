#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qserialport.h>
#include <QSettings>
#include <QStringList>
#include <Qchar>
#include <QTimer>
#include <QThread>
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

    void timeOut();

    void Bacardi_step1();
    void Bacardi_step2();
    void Bacardi_step3();
    void Bacardi_step4();


    void on_Cuba_Libre_clicked();
    void Cuba_Libre_step1();
    void Cuba_Libre_step2();

    void on_Daiquiri_clicked();
    void Daiquiri_step1();
    void Daiquiri_step2();
    void Daiquiri_step3();


private:
    Ui::MainWindow *ui;
    confirm confirmWindow;
    QTimer clock;
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
