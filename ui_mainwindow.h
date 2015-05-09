/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QPushButton *Daiquiri;
    QPushButton *Bacardi;
    QPushButton *Cuba_Libre;
    QPushButton *Mojito;
    QPushButton *test;
    QWidget *tab_5;
    QPushButton *Red_Hot_Explosion;
    QPushButton *Cranberry_Lemonade;
    QPushButton *Malibu_Lemon_Fresh;
    QPushButton *Malibu_Cola;
    QWidget *tab_6;
    QPushButton *Screwdriver;
    QPushButton *Vodka_Gimlet;
    QWidget *tab_7;
    QPushButton *Cosmopolitan;
    QPushButton *Lemon_Drop_Martini;
    QWidget *tab_8;
    QPushButton *Tequila_Sunrise;
    QWidget *tab_9;
    QPushButton *Margarita;
    QWidget *tab_11;
    QPushButton *Cointreau_Fizz;
    QPushButton *Cointreau_Fizz_Grenadine;
    QWidget *tab_10;
    QPushButton *White_Lady;
    QWidget *tab_12;
    QPushButton *John_Collins;
    QPushButton *Orange_Blossom;
    QPushButton *Gin_Rickey;
    QPushButton *Gin_Fizz;
    QWidget *tab_13;
    QPushButton *Silver_Bullet;
    QWidget *tab_14;
    QPushButton *Whisky_Sour;
    QPushButton *Whisky_Highball;
    QPushButton *Whisky_Cokeutton;
    QWidget *tab_3;
    QWidget *tab_2;
    QComboBox *motor_comboBox;
    QPushButton *connect_motor;
    QPushButton *test_motor;
    QComboBox *arduino_comboBox;
    QPushButton *connect_arduino;
    QPushButton *test_arduino;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(761, 587);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 761, 520));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setIconSize(QSize(16, 16));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 751, 491));
        tabWidget_2->setTabShape(QTabWidget::Triangular);
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        Daiquiri = new QPushButton(tab_4);
        Daiquiri->setObjectName(QStringLiteral("Daiquiri"));
        Daiquiri->setGeometry(QRect(420, 190, 100, 60));
        Bacardi = new QPushButton(tab_4);
        Bacardi->setObjectName(QStringLiteral("Bacardi"));
        Bacardi->setGeometry(QRect(65, 178, 100, 100));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Bacardi->sizePolicy().hasHeightForWidth());
        Bacardi->setSizePolicy(sizePolicy);
        Bacardi->setMinimumSize(QSize(60, 100));
        Cuba_Libre = new QPushButton(tab_4);
        Cuba_Libre->setObjectName(QStringLiteral("Cuba_Libre"));
        Cuba_Libre->setGeometry(QRect(240, 190, 100, 60));
        Mojito = new QPushButton(tab_4);
        Mojito->setObjectName(QStringLiteral("Mojito"));
        Mojito->setGeometry(QRect(600, 190, 100, 60));
        test = new QPushButton(tab_4);
        test->setObjectName(QStringLiteral("test"));
        test->setGeometry(QRect(130, 90, 75, 23));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        Red_Hot_Explosion = new QPushButton(tab_5);
        Red_Hot_Explosion->setObjectName(QStringLiteral("Red_Hot_Explosion"));
        Red_Hot_Explosion->setGeometry(QRect(580, 190, 121, 91));
        Cranberry_Lemonade = new QPushButton(tab_5);
        Cranberry_Lemonade->setObjectName(QStringLiteral("Cranberry_Lemonade"));
        Cranberry_Lemonade->setGeometry(QRect(20, 190, 141, 71));
        Malibu_Lemon_Fresh = new QPushButton(tab_5);
        Malibu_Lemon_Fresh->setObjectName(QStringLiteral("Malibu_Lemon_Fresh"));
        Malibu_Lemon_Fresh->setGeometry(QRect(380, 190, 121, 81));
        Malibu_Cola = new QPushButton(tab_5);
        Malibu_Cola->setObjectName(QStringLiteral("Malibu_Cola"));
        Malibu_Cola->setGeometry(QRect(220, 190, 101, 71));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        Screwdriver = new QPushButton(tab_6);
        Screwdriver->setObjectName(QStringLiteral("Screwdriver"));
        Screwdriver->setGeometry(QRect(110, 210, 100, 60));
        Vodka_Gimlet = new QPushButton(tab_6);
        Vodka_Gimlet->setObjectName(QStringLiteral("Vodka_Gimlet"));
        Vodka_Gimlet->setGeometry(QRect(445, 217, 100, 60));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        Cosmopolitan = new QPushButton(tab_7);
        Cosmopolitan->setObjectName(QStringLiteral("Cosmopolitan"));
        Cosmopolitan->setGeometry(QRect(126, 183, 100, 60));
        Lemon_Drop_Martini = new QPushButton(tab_7);
        Lemon_Drop_Martini->setObjectName(QStringLiteral("Lemon_Drop_Martini"));
        Lemon_Drop_Martini->setGeometry(QRect(440, 180, 141, 60));
        tabWidget_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        Tequila_Sunrise = new QPushButton(tab_8);
        Tequila_Sunrise->setObjectName(QStringLiteral("Tequila_Sunrise"));
        Tequila_Sunrise->setGeometry(QRect(290, 180, 100, 60));
        tabWidget_2->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        Margarita = new QPushButton(tab_9);
        Margarita->setObjectName(QStringLiteral("Margarita"));
        Margarita->setGeometry(QRect(230, 160, 100, 60));
        tabWidget_2->addTab(tab_9, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        Cointreau_Fizz = new QPushButton(tab_11);
        Cointreau_Fizz->setObjectName(QStringLiteral("Cointreau_Fizz"));
        Cointreau_Fizz->setGeometry(QRect(140, 170, 100, 60));
        Cointreau_Fizz_Grenadine = new QPushButton(tab_11);
        Cointreau_Fizz_Grenadine->setObjectName(QStringLiteral("Cointreau_Fizz_Grenadine"));
        Cointreau_Fizz_Grenadine->setGeometry(QRect(359, 170, 131, 60));
        tabWidget_2->addTab(tab_11, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        White_Lady = new QPushButton(tab_10);
        White_Lady->setObjectName(QStringLiteral("White_Lady"));
        White_Lady->setGeometry(QRect(310, 160, 100, 60));
        tabWidget_2->addTab(tab_10, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        John_Collins = new QPushButton(tab_12);
        John_Collins->setObjectName(QStringLiteral("John_Collins"));
        John_Collins->setGeometry(QRect(390, 180, 100, 60));
        Orange_Blossom = new QPushButton(tab_12);
        Orange_Blossom->setObjectName(QStringLiteral("Orange_Blossom"));
        Orange_Blossom->setGeometry(QRect(600, 180, 100, 61));
        Gin_Rickey = new QPushButton(tab_12);
        Gin_Rickey->setObjectName(QStringLiteral("Gin_Rickey"));
        Gin_Rickey->setGeometry(QRect(220, 180, 100, 60));
        Gin_Fizz = new QPushButton(tab_12);
        Gin_Fizz->setObjectName(QStringLiteral("Gin_Fizz"));
        Gin_Fizz->setGeometry(QRect(70, 180, 100, 60));
        tabWidget_2->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        Silver_Bullet = new QPushButton(tab_13);
        Silver_Bullet->setObjectName(QStringLiteral("Silver_Bullet"));
        Silver_Bullet->setGeometry(QRect(220, 130, 191, 101));
        tabWidget_2->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        Whisky_Sour = new QPushButton(tab_14);
        Whisky_Sour->setObjectName(QStringLiteral("Whisky_Sour"));
        Whisky_Sour->setGeometry(QRect(520, 240, 100, 60));
        Whisky_Highball = new QPushButton(tab_14);
        Whisky_Highball->setObjectName(QStringLiteral("Whisky_Highball"));
        Whisky_Highball->setGeometry(QRect(300, 230, 100, 60));
        Whisky_Cokeutton = new QPushButton(tab_14);
        Whisky_Cokeutton->setObjectName(QStringLiteral("Whisky_Cokeutton"));
        Whisky_Cokeutton->setGeometry(QRect(140, 230, 100, 60));
        tabWidget_2->addTab(tab_14, QString());
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        motor_comboBox = new QComboBox(tab_2);
        motor_comboBox->setObjectName(QStringLiteral("motor_comboBox"));
        motor_comboBox->setGeometry(QRect(70, 60, 121, 61));
        connect_motor = new QPushButton(tab_2);
        connect_motor->setObjectName(QStringLiteral("connect_motor"));
        connect_motor->setGeometry(QRect(230, 60, 131, 61));
        test_motor = new QPushButton(tab_2);
        test_motor->setObjectName(QStringLiteral("test_motor"));
        test_motor->setGeometry(QRect(430, 60, 141, 61));
        arduino_comboBox = new QComboBox(tab_2);
        arduino_comboBox->setObjectName(QStringLiteral("arduino_comboBox"));
        arduino_comboBox->setGeometry(QRect(70, 160, 121, 61));
        connect_arduino = new QPushButton(tab_2);
        connect_arduino->setObjectName(QStringLiteral("connect_arduino"));
        connect_arduino->setGeometry(QRect(230, 160, 131, 61));
        test_arduino = new QPushButton(tab_2);
        test_arduino->setObjectName(QStringLiteral("test_arduino"));
        test_arduino->setGeometry(QRect(440, 160, 131, 61));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 761, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(10);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Daiquiri->setText(QApplication::translate("MainWindow", "Daiquiri", 0));
        Bacardi->setText(QApplication::translate("MainWindow", "bacardi", 0));
        Cuba_Libre->setText(QApplication::translate("MainWindow", "cubalibre", 0));
        Mojito->setText(QApplication::translate("MainWindow", "Mojito", 0));
        test->setText(QApplication::translate("MainWindow", "test", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Rum", 0));
        Red_Hot_Explosion->setText(QApplication::translate("MainWindow", "Red_Hot_Explosion", 0));
        Cranberry_Lemonade->setText(QApplication::translate("MainWindow", "Cranberry Lemonade", 0));
        Malibu_Lemon_Fresh->setText(QApplication::translate("MainWindow", "Malibu_Lemon_Fresh", 0));
        Malibu_Cola->setText(QApplication::translate("MainWindow", " Malibu Cola", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "Malibu", 0));
        Screwdriver->setText(QApplication::translate("MainWindow", "Screwdriver", 0));
        Vodka_Gimlet->setText(QApplication::translate("MainWindow", "Vodka_Gimlet", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "Vodka", 0));
        Cosmopolitan->setText(QApplication::translate("MainWindow", "Cosmopolitan", 0));
        Lemon_Drop_Martini->setText(QApplication::translate("MainWindow", "Lemon_Drop_Martini", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "Vodka+Cointreau", 0));
        Tequila_Sunrise->setText(QApplication::translate("MainWindow", "Tequila_Sunrise", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("MainWindow", "Tequila", 0));
        Margarita->setText(QApplication::translate("MainWindow", "Margarita", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QApplication::translate("MainWindow", "Tequila+Cointreau", 0));
        Cointreau_Fizz->setText(QApplication::translate("MainWindow", "Cointreau_Fizz", 0));
        Cointreau_Fizz_Grenadine->setText(QApplication::translate("MainWindow", "Cointreau_Fizz_Grenadine", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_11), QApplication::translate("MainWindow", "Cointreau", 0));
        White_Lady->setText(QApplication::translate("MainWindow", "White_Lady", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QApplication::translate("MainWindow", "Gin+Cointreau", 0));
        John_Collins->setText(QApplication::translate("MainWindow", "John_Collins", 0));
        Orange_Blossom->setText(QApplication::translate("MainWindow", "Orange_Blossom", 0));
        Gin_Rickey->setText(QApplication::translate("MainWindow", "Gin_Rickey", 0));
        Gin_Fizz->setText(QApplication::translate("MainWindow", "Gin_Fizz", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_12), QApplication::translate("MainWindow", "Gin", 0));
        Silver_Bullet->setText(QApplication::translate("MainWindow", "Silver_Bullet", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_13), QApplication::translate("MainWindow", "Gin+Whiskey", 0));
        Whisky_Sour->setText(QApplication::translate("MainWindow", "Whisky_Sour", 0));
        Whisky_Highball->setText(QApplication::translate("MainWindow", "Whisky_Highball", 0));
        Whisky_Cokeutton->setText(QApplication::translate("MainWindow", "Whisky_Coke", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_14), QApplication::translate("MainWindow", "Whiskey", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "cocktail", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "shots", 0));
        motor_comboBox->clear();
        motor_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "com1", 0)
         << QApplication::translate("MainWindow", "com2", 0)
         << QApplication::translate("MainWindow", "com3", 0)
         << QApplication::translate("MainWindow", "com4", 0)
         << QApplication::translate("MainWindow", "com5", 0)
         << QApplication::translate("MainWindow", "com6", 0)
         << QApplication::translate("MainWindow", "com7", 0)
         << QApplication::translate("MainWindow", "com8", 0)
         << QApplication::translate("MainWindow", "com9", 0)
         << QApplication::translate("MainWindow", "com10", 0)
        );
        connect_motor->setText(QApplication::translate("MainWindow", "connect_motor", 0));
        test_motor->setText(QApplication::translate("MainWindow", "test_motor", 0));
        arduino_comboBox->clear();
        arduino_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "com1", 0)
         << QApplication::translate("MainWindow", "com2", 0)
         << QApplication::translate("MainWindow", "com3", 0)
         << QApplication::translate("MainWindow", "com4", 0)
         << QApplication::translate("MainWindow", "com5", 0)
         << QApplication::translate("MainWindow", "com6", 0)
         << QApplication::translate("MainWindow", "com7", 0)
         << QApplication::translate("MainWindow", "com8", 0)
         << QApplication::translate("MainWindow", "com9", 0)
         << QApplication::translate("MainWindow", "com10", 0)
        );
        connect_arduino->setText(QApplication::translate("MainWindow", "connect_arduino", 0));
        test_arduino->setText(QApplication::translate("MainWindow", "test_arduino", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "setting", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
