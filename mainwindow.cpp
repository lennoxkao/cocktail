#include "mainwindow.h"
#include "ui_mainwindow.h"
QSerialPort motor_serial;
QSerialPort arduino_serial;
char *arduino_command = new char[2];
char *arduino_sendback = new char[1];
int tequila=1;
int rum=2;
int vodka=3;
int gin=4;
int cointreau=5;
int malibu=6;
int whisky=7;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(&confirmWindow,SIGNAL(sentMsg(int)),this,SLOT(receiveMsg(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
//    delete confirmWindow;
}

void MainWindow::on_connect_motor_clicked()
{
    motor_serial.setBaudRate(QSerialPort::Baud9600);
    motor_serial.setPortName(ui->motor_comboBox->currentText());
    motor_serial.setDataBits(QSerialPort::Data8);
    motor_serial.setParity(QSerialPort::NoParity);
    motor_serial.setFlowControl(QSerialPort::NoFlowControl);
    motor_serial.open(QIODevice::ReadWrite);

}

void MainWindow::on_test_motor_clicked()
{
    motor_serial.write("ma 500 \n");
    motor_serial.write("ma 0 \n");
}

void MainWindow::on_connect_arduino_clicked()
{
    arduino_serial.setBaudRate(QSerialPort::Baud9600);
    arduino_serial.setPortName(ui->arduino_comboBox->currentText());
    arduino_serial.setDataBits(QSerialPort::Data8);
    arduino_serial.setParity(QSerialPort::NoParity);
    arduino_serial.setFlowControl(QSerialPort::NoFlowControl);
    arduino_serial.open(QIODevice::ReadWrite);

}

void MainWindow::on_test_arduino_clicked()
{
    char *ptr = new char[2];
    ptr[0]=20;
    ptr[1]=4;
    arduino_serial.write(ptr);
//    arduino_serial.write(&(ba.data()[1]),5);
//    char ca;
//    arduino_serial.read(ca);
//    qDebug() << "Byte is "<< static_cast<quint8>(ca[5]);
//    qDebug()<<ba;
    char *read = new char[1];
    arduino_serial.readyRead();
    arduino_serial.waitForReadyRead((ptr[1]+1)*1000);
//    arduino_serial.read(read,1);
    arduino_serial.readLine(read,20);
    int a = read[0];
    qDebug()<<a;
}


void MainWindow::on_Bacardi_clicked()
{

    go_to_pourer_1();
//    sleep(3000);
    arduino_command[0]=1;
    arduino_command[1]=26.1;
    send_arduino_command();

}
void MainWindow::send_arduino_command()
{
  arduino_serial.write(arduino_command);
  arduino_serial.readyRead();
  arduino_serial.waitForReadyRead((arduino_command[1]+1)*1000);
  arduino_serial.readLine(arduino_sendback,20);
  int check = arduino_sendback[0];
  qDebug()<<check;

}

void MainWindow::go_to_pourer_1()
{
   motor_serial.write("ma -187.5 \n");
}

void MainWindow::go_to_pourer_2()
{
   motor_serial.write("ma -125 \n");

}
void MainWindow::go_to_pourer_3()
{
   motor_serial.write("ma -62.5 \n");

}
void MainWindow::go_to_pourer_4()
{
   motor_serial.write("ma 0 \n");

}

void MainWindow::go_to_pourer_5()
{
   motor_serial.write("ma 62.5 \n");

}

void MainWindow::go_to_pourer_6()
{
   motor_serial.write("ma 125 \n");
}

void MainWindow::go_to_pourer_7()
{
   motor_serial.write("ma 190 \n");
}

void MainWindow::on_test_clicked()
{
//    confirmWindow = new confirm;
    confirmWindow.setModal(true);
    confirmWindow.exec();

//        qDebug<<check_alcohol;
}

void MainWindow::receiveMsg(const int msg)
{
 qDebug() << msg;
}
