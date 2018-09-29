/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actSetting;
    QAction *actionLinphone;
    QAction *actionSerial_Port;
    QAction *actionNew;
    QAction *actionEdit_Place;
    QAction *actionInformation;
    QAction *actionRetask_One;
    QAction *actionRetask_All;
    QAction *actionAbout;
    QAction *actionAbout_2;
    QAction *actionServer;
    QAction *actionQuit;
    QAction *actionStartup_Location_Map;
    QAction *actionNew_Zone;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *layConsole;
    QPushButton *btnExit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *layLed;
    QLabel *lblImage;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_3;
    QPushButton *btnView;
    QPushButton *pushButton;
    QComboBox *boxCommand;
    QComboBox *boxSensor;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *btnPrint;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnOpenClose;
    QPushButton *btnClear;
    QPushButton *btngetNearestNode;
    QPushButton *bt_Broadcast;
    QPushButton *btnShowVector;
    QWidget *tab_2;
    QWebView *webView;
    QCheckBox *cbxGps;
    QCheckBox *cbxAllSensor;
    QCheckBox *cbxJoinedSensor;
    QLabel *label_6;
    QLabel *lblMyPlace;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *btnUpdate;
    QWidget *tab_3;
    QCustomPlot *Plot;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelNode;
    QComboBox *nodeBox;
    QDateEdit *dateEdit;
    QPushButton *btDraw;
    QCustomPlot *Plot_hum;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuHome;
    QMenu *menuSensor;
    QMenu *menuRetasking;
    QMenu *menuHelp;
    QMenu *menuUpgrad_Firmware;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(832, 602);
        actSetting = new QAction(MainWindow);
        actSetting->setObjectName(QString::fromUtf8("actSetting"));
        actionLinphone = new QAction(MainWindow);
        actionLinphone->setObjectName(QString::fromUtf8("actionLinphone"));
        actionSerial_Port = new QAction(MainWindow);
        actionSerial_Port->setObjectName(QString::fromUtf8("actionSerial_Port"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionEdit_Place = new QAction(MainWindow);
        actionEdit_Place->setObjectName(QString::fromUtf8("actionEdit_Place"));
        actionInformation = new QAction(MainWindow);
        actionInformation->setObjectName(QString::fromUtf8("actionInformation"));
        actionRetask_One = new QAction(MainWindow);
        actionRetask_One->setObjectName(QString::fromUtf8("actionRetask_One"));
        actionRetask_All = new QAction(MainWindow);
        actionRetask_All->setObjectName(QString::fromUtf8("actionRetask_All"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_2 = new QAction(MainWindow);
        actionAbout_2->setObjectName(QString::fromUtf8("actionAbout_2"));
        actionServer = new QAction(MainWindow);
        actionServer->setObjectName(QString::fromUtf8("actionServer"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionStartup_Location_Map = new QAction(MainWindow);
        actionStartup_Location_Map->setObjectName(QString::fromUtf8("actionStartup_Location_Map"));
        actionNew_Zone = new QAction(MainWindow);
        actionNew_Zone->setObjectName(QString::fromUtf8("actionNew_Zone"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 841, 551));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 50, 541, 451));
        layConsole = new QVBoxLayout(verticalLayoutWidget);
        layConsole->setSpacing(6);
        layConsole->setContentsMargins(11, 11, 11, 11);
        layConsole->setObjectName(QString::fromUtf8("layConsole"));
        layConsole->setContentsMargins(0, 0, 0, 0);
        btnExit = new QPushButton(tab);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setGeometry(QRect(740, 470, 85, 27));
        verticalLayoutWidget_2 = new QWidget(tab);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(580, 170, 41, 41));
        layLed = new QVBoxLayout(verticalLayoutWidget_2);
        layLed->setSpacing(6);
        layLed->setContentsMargins(11, 11, 11, 11);
        layLed->setObjectName(QString::fromUtf8("layLed"));
        layLed->setContentsMargins(0, 0, 0, 0);
        lblImage = new QLabel(tab);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(550, 290, 271, 161));
        line = new QFrame(tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(550, 450, 281, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(tab);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(550, 270, 281, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(570, 230, 67, 17));
        btnView = new QPushButton(tab);
        btnView->setObjectName(QString::fromUtf8("btnView"));
        btnView->setGeometry(QRect(550, 470, 96, 27));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(630, 10, 121, 27));
        boxCommand = new QComboBox(tab);
        boxCommand->setObjectName(QString::fromUtf8("boxCommand"));
        boxCommand->setGeometry(QRect(100, 10, 301, 27));
        boxSensor = new QComboBox(tab);
        boxSensor->setObjectName(QString::fromUtf8("boxSensor"));
        boxSensor->setGeometry(QRect(460, 10, 151, 27));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 20, 81, 17));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(420, 20, 31, 17));
        btnPrint = new QPushButton(tab);
        btnPrint->setObjectName(QString::fromUtf8("btnPrint"));
        btnPrint->setGeometry(QRect(650, 470, 85, 27));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(660, 120, 141, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnOpenClose = new QPushButton(layoutWidget);
        btnOpenClose->setObjectName(QString::fromUtf8("btnOpenClose"));

        verticalLayout->addWidget(btnOpenClose);

        btnClear = new QPushButton(layoutWidget);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        verticalLayout->addWidget(btnClear);

        btngetNearestNode = new QPushButton(layoutWidget);
        btngetNearestNode->setObjectName(QString::fromUtf8("btngetNearestNode"));

        verticalLayout->addWidget(btngetNearestNode);

        bt_Broadcast = new QPushButton(layoutWidget);
        bt_Broadcast->setObjectName(QString::fromUtf8("bt_Broadcast"));

        verticalLayout->addWidget(bt_Broadcast);

        btnShowVector = new QPushButton(layoutWidget);
        btnShowVector->setObjectName(QString::fromUtf8("btnShowVector"));

        verticalLayout->addWidget(btnShowVector);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        webView = new QWebView(tab_2);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setGeometry(QRect(0, 40, 821, 461));
        webView->setUrl(QUrl(QString::fromUtf8("about:blank")));
        cbxGps = new QCheckBox(tab_2);
        cbxGps->setObjectName(QString::fromUtf8("cbxGps"));
        cbxGps->setGeometry(QRect(10, 10, 61, 22));
        cbxAllSensor = new QCheckBox(tab_2);
        cbxAllSensor->setObjectName(QString::fromUtf8("cbxAllSensor"));
        cbxAllSensor->setGeometry(QRect(60, 10, 141, 22));
        cbxJoinedSensor = new QCheckBox(tab_2);
        cbxJoinedSensor->setObjectName(QString::fromUtf8("cbxJoinedSensor"));
        cbxJoinedSensor->setGeometry(QRect(180, 10, 171, 22));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(550, 10, 81, 17));
        lblMyPlace = new QLabel(tab_2);
        lblMyPlace->setObjectName(QString::fromUtf8("lblMyPlace"));
        lblMyPlace->setGeometry(QRect(620, 10, 191, 21));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(330, 10, 208, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        btnUpdate = new QPushButton(layoutWidget1);
        btnUpdate->setObjectName(QString::fromUtf8("btnUpdate"));

        horizontalLayout->addWidget(btnUpdate);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        Plot = new QCustomPlot(tab_3);
        Plot->setObjectName(QString::fromUtf8("Plot"));
        Plot->setGeometry(QRect(20, 140, 381, 351));
        layoutWidget2 = new QWidget(tab_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 60, 331, 33));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelNode = new QLabel(layoutWidget2);
        labelNode->setObjectName(QString::fromUtf8("labelNode"));

        horizontalLayout_2->addWidget(labelNode);

        nodeBox = new QComboBox(layoutWidget2);
        nodeBox->setObjectName(QString::fromUtf8("nodeBox"));

        horizontalLayout_2->addWidget(nodeBox);

        dateEdit = new QDateEdit(layoutWidget2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_2->addWidget(dateEdit);

        btDraw = new QPushButton(layoutWidget2);
        btDraw->setObjectName(QString::fromUtf8("btDraw"));

        horizontalLayout_2->addWidget(btDraw);

        Plot_hum = new QCustomPlot(tab_3);
        Plot_hum->setObjectName(QString::fromUtf8("Plot_hum"));
        Plot_hum->setGeometry(QRect(420, 140, 381, 351));
        label = new QLabel(tab_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 110, 111, 31));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(580, 110, 111, 31));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 832, 19));
        menuHome = new QMenu(menuBar);
        menuHome->setObjectName(QString::fromUtf8("menuHome"));
        menuSensor = new QMenu(menuBar);
        menuSensor->setObjectName(QString::fromUtf8("menuSensor"));
        menuRetasking = new QMenu(menuBar);
        menuRetasking->setObjectName(QString::fromUtf8("menuRetasking"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuUpgrad_Firmware = new QMenu(menuBar);
        menuUpgrad_Firmware->setObjectName(QString::fromUtf8("menuUpgrad_Firmware"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuHome->menuAction());
        menuBar->addAction(menuSensor->menuAction());
        menuBar->addAction(menuRetasking->menuAction());
        menuBar->addAction(menuUpgrad_Firmware->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuHome->addAction(actionLinphone);
        menuHome->addAction(actionSerial_Port);
        menuHome->addAction(actionStartup_Location_Map);
        menuHome->addAction(actionServer);
        menuHome->addAction(actionQuit);
        menuSensor->addAction(actionNew);
        menuSensor->addAction(actionEdit_Place);
        menuSensor->addAction(actionInformation);
        menuSensor->addAction(actionNew_Zone);
        menuRetasking->addAction(actionRetask_One);
        menuRetasking->addAction(actionRetask_All);
        menuHelp->addAction(actionAbout_2);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actSetting->setText(QApplication::translate("MainWindow", "Setting", 0, QApplication::UnicodeUTF8));
        actionLinphone->setText(QApplication::translate("MainWindow", "Linphone", 0, QApplication::UnicodeUTF8));
        actionSerial_Port->setText(QApplication::translate("MainWindow", "Setup Serial Port", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("MainWindow", "New Node", 0, QApplication::UnicodeUTF8));
        actionEdit_Place->setText(QApplication::translate("MainWindow", "Edit Node Place", 0, QApplication::UnicodeUTF8));
        actionInformation->setText(QApplication::translate("MainWindow", "Node Information", 0, QApplication::UnicodeUTF8));
        actionRetask_One->setText(QApplication::translate("MainWindow", "Retask One", 0, QApplication::UnicodeUTF8));
        actionRetask_All->setText(QApplication::translate("MainWindow", "Retask All", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionAbout_2->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionServer->setText(QApplication::translate("MainWindow", "Server", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionStartup_Location_Map->setText(QApplication::translate("MainWindow", "Startup Location Map", 0, QApplication::UnicodeUTF8));
        actionNew_Zone->setText(QApplication::translate("MainWindow", "New Zone", 0, QApplication::UnicodeUTF8));
        btnExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        lblImage->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Image", 0, QApplication::UnicodeUTF8));
        btnView->setText(QApplication::translate("MainWindow", "View Image", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Send", 0, QApplication::UnicodeUTF8));
        boxCommand->clear();
        boxCommand->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Take Tempurature and Humidity", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Take Photo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Request Node Information", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Retasking", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Warning Level 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Warning Level 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Warning Level 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Warning Level 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Warning Level 5", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("MainWindow", "Command", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "To", 0, QApplication::UnicodeUTF8));
        btnPrint->setText(QApplication::translate("MainWindow", "Print Text", 0, QApplication::UnicodeUTF8));
        btnOpenClose->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("MainWindow", "Clear Screen", 0, QApplication::UnicodeUTF8));
        btngetNearestNode->setText(QApplication::translate("MainWindow", "Find Nearest Node", 0, QApplication::UnicodeUTF8));
        bt_Broadcast->setText(QApplication::translate("MainWindow", "Broadcast", 0, QApplication::UnicodeUTF8));
        btnShowVector->setText(QApplication::translate("MainWindow", "Show Direction", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Home", 0, QApplication::UnicodeUTF8));
        cbxGps->setText(QApplication::translate("MainWindow", "GPS", 0, QApplication::UnicodeUTF8));
        cbxAllSensor->setText(QApplication::translate("MainWindow", "Show All Node", 0, QApplication::UnicodeUTF8));
        cbxJoinedSensor->setText(QApplication::translate("MainWindow", "Show Joined Node", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "My Place:", 0, QApplication::UnicodeUTF8));
        lblMyPlace->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "Clear Map", 0, QApplication::UnicodeUTF8));
        btnUpdate->setText(QApplication::translate("MainWindow", "Update Sensor", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Map", 0, QApplication::UnicodeUTF8));
        labelNode->setText(QApplication::translate("MainWindow", "Node", 0, QApplication::UnicodeUTF8));
        nodeBox->clear();
        nodeBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "08", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "36", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "09", 0, QApplication::UnicodeUTF8)
        );
        dateEdit->setDisplayFormat(QApplication::translate("MainWindow", "dd/MM/yyyy", 0, QApplication::UnicodeUTF8));
        btDraw->setText(QApplication::translate("MainWindow", "Draw", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Temperature(oC)", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Humidity(%)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Graph", 0, QApplication::UnicodeUTF8));
        menuHome->setTitle(QApplication::translate("MainWindow", "Home", 0, QApplication::UnicodeUTF8));
        menuSensor->setTitle(QApplication::translate("MainWindow", "Node", 0, QApplication::UnicodeUTF8));
        menuRetasking->setTitle(QApplication::translate("MainWindow", "Retasking", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuUpgrad_Firmware->setTitle(QApplication::translate("MainWindow", "Upgrade", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
