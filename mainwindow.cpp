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
int arduino_check=0;
int pourtime=0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(&confirmWindow,SIGNAL(sentMsg(int)),this,SLOT(receiveMsg(int)));
//    connect(&clock,SIGNAL(timeout()),this,SLOT(timeOut()));
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
    connect(&clock,SIGNAL(timeout()),this,SLOT(timeOut()));
    clock.start();
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
    ui->Bacardi->setEnabled(1);
    go_to_pourer_2();
    clock.setInterval(3500);/*
    disconnect(&clock,SIGNAL(timeout()),this,SLOT(timeout()));*/
    connect(&clock,SIGNAL(timeout()),this,SLOT(Bacardi_step1()));
    clock.start();

}
void MainWindow::Bacardi_step1()
{
    clock.stop();
    disconnect(&clock,SIGNAL(timeout()),this,SLOT(Bacardi_step1()));
    arduino_command[0]=2;
    arduino_command[1]=6;
    send_arduino_command();//pour rum
    qDebug()<<"pour rum";
    pourtime=arduino_command[1];
    clock.setInterval((pourtime+1)*1000);
    connect(&clock,SIGNAL(timeout()),this,SLOT(Bacardi_step2()));
    clock.start();
//    if(arduino_check==20)
//      {
//        arduino_check=0;
//        go_to_pourer_4();
//        connect(&clock,SIGNAL(timeout()),this,SLOT(Bacardi_step2()));
//        clock.start();
//      }

}
void MainWindow::Bacardi_step2()
{
    clock.stop();
    disconnect(&clock,SIGNAL(timeout()),this,SLOT(Bacardi_step2()));
    arduino_serial.readyRead();
    arduino_serial.waitForReadyRead(1000);
    arduino_serial.readLine(arduino_sendback,2);
    arduino_check = arduino_sendback[0];
    qDebug()<<"aruino_check"<<arduino_check;
    if(arduino_check==20)
    {   arduino_check=0;
        arduino_command[0]=9;
        arduino_command[1]=5;
        pourtime=arduino_command[1];
//        arduino_serial.write(arduino_command);
        send_arduino_command();//pour Grenadine
        qDebug()<<"pour grean";
        clock.setInterval((pourtime+1)*1000);
        connect(&clock,SIGNAL(timeout()),this,SLOT(Bacardi_step3()));
        clock.start();
    }
}
void MainWindow::Bacardi_step3()
{
    clock.stop();
    disconnect(&clock,SIGNAL(timeout()),this,SLOT(Bacardi_step3()));
    arduino_serial.readyRead();
    arduino_serial.waitForReadyRead(1000);
    arduino_serial.readLine(arduino_sendback,2);
    arduino_check = arduino_sendback[0];
    qDebug()<<"aruino_check"<<arduino_check;
    if(arduino_check==20)
    {
        go_to_pourer_4();
        clock.setInterval(3500);
        connect(&clock,SIGNAL(timeout()),this,SLOT(Bacardi_step4()));
        clock.start();
    }

}
void MainWindow::Bacardi_step4()
{
    clock.stop();
    disconnect(&clock,SIGNAL(timeout()),this,SLOT(Bacardi_step4()));
    arduino_command[0]=11;
    arduino_command[1]=10;
//    arduino_serial.write(arduino_command);
    send_arduino_command();
    qDebug()<<"pour lime juice";
}
//    clock.stop();
//    disconnect(&clock,SIGNAL(timeout()),this,SLOT(Bacardi_step2()));
//    arduino_command[0]=11;
//    arduino_command[1]=10;
//    send_arduino_command();//pour lime juice
//    qDebug()<<"pour lime";
//    if(arduino_check==20)
//    {
//         arduino_check=0;
//         ui->Bacardi->setEnabled(1);//done
//         qDebug()<<"done";
//    }



void MainWindow::send_arduino_command()
{
  arduino_serial.write(arduino_command);
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

void MainWindow::timeOut()
{
    disconnect(&clock,SIGNAL(timeout()),this,SLOT(timeout()));
    motor_serial.write("ma 0 \n");
    qDebug() << "asshole";
    clock.stop();
}

void MainWindow::on_Cuba_Libre_clicked()
{
    ui->Bacardi->setEnabled(0);
    go_to_pourer_2();
    clock.setInterval(3000);
    disconnect(&clock,SIGNAL(timeout()),this,SLOT(timeout()));
    connect(&clock,SIGNAL(timeout()),this,SLOT(Cuba_Libre_step1()));
    clock.start();
}
void MainWindow::Cuba_Libre_step1()
{
    clock.stop();
    disconnect(&clock,SIGNAL(timeout()),this,SLOT(Cuba_Libre_step1()));
    arduino_command[0]=2;
    arduino_command[1]=18;
    send_arduino_command();//pour rum
    if(arduino_check=20)
    {
        go_to_pourer_7();
        connect(&clock,SIGNAL(timeout()),this,SLOT(Cuba_Libre_step2()));
        clock.start();
    }

}
void MainWindow::Cuba_Libre_step2()
{
    clock.stop();
    disconnect(&clock,SIGNAL(timeout()),this,SLOT(Bacardi_step2()));
    arduino_command[0]=14;
    arduino_command[1]=5;
    send_arduino_command();//pour coke
    if(arduino_check=20)
    {
        go_to_pourer_4();//done
    }
}
void MainWindow::on_Daiquiri_clicked()
{
    ui->Bacardi->setEnabled(0);
    go_to_pourer_2();
    clock.setInterval(3000);
    disconnect(&clock,SIGNAL(timeout()),this,SLOT(timeout()));
    connect(&clock,SIGNAL(timeout()),this,SLOT(Daiquiri_step1()));
    clock.start();
}
void MainWindow::Daiquiri_step1()
{
    clock.stop();
    disconnect(&clock,SIGNAL(timeout()),this,SLOT(Daiquiri_step1()));
    arduino_command[0]=2;
    arduino_command[1]=27;
    send_arduino_command();//pour rum;
    if(arduino_check=20)
    {
        go_to_pourer_3();
        connect(&clock,SIGNAL(timeout()),this,SLOT(Daiquiri_step2()));
        clock.start();
    }
}
void MainWindow::Daiquiri_step2()
{
    clock.stop();
    disconnect(&clock,SIGNAL(timeout()),this,SLOT(Daiquiri_step2()));
    arduino_command[0]=14;
    arduino_command[1]=5;
    send_arduino_command();//pour simple syrump
    if(arduino_check=20)
    {
        go_to_pourer_3();
        connect(&clock,SIGNAL(timeout()),this,SLOT(Daiquiri_step3()));
        clock.start();
    }
}
void MainWindow::Daiquiri_step3()
{
    clock.stop();
    disconnect(&clock,SIGNAL(timeout()),this,SLOT(Daiquiri_step3()));
    arduino_command[0]=11;
    arduino_command[1]=5;
    send_arduino_command();//pour lime juice
    if(arduino_check=20)
    {
        ui->Bacardi->setEnabled(1);//done
    }
}
