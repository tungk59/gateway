#include "tranceiverlora.h"

tranceiverlora::tranceiverlora(QObject *parent):QObject(parent)
{
    timer = new QTimer(this);
    timer->setInterval(1000);

    PortSettings settings = {BAUD9600, DATA_8, PAR_NONE, STOP_1, FLOW_OFF, 10};
    port = new QextSerialPort("ttyS0", settings, QextSerialPort::Polling);
    enumerator = new QextSerialEnumerator(this);
    enumerator->setUpNotifications();
    connect(timer, SIGNAL(timeout()), SLOT(readDataLR()));
    connect(port, SIGNAL(readyRead()), SLOT(readDataLR()));
}

void tranceiverlora::requestWorkLR()
{
    emit workRequestedLR();
}
void tranceiverlora::doWorkLR()
{
    if(!port->isOpen())
    {
        port->open(QIODevice::ReadWrite);
    }
    if (port->isOpen() && port->queryMode() == QextSerialPort::Polling)
        timer->start();
    else
        timer->stop();
}

void tranceiverlora::writeData(QString cmd)
{
    int N = cmd.length();
    int hex_len = N/2;
    int hex_val;
    QString tmp;
    //qDebug() << N << cmd << endl;
    QByteArray ba;
    for(int i = 0; i < hex_len; i++)
    {
        tmp = cmd.mid(i*2, 2);
        bool ok;
        hex_val = tmp.toInt(&ok, 16);
        ba[i] = (char)hex_val;
        qDebug() << ba[i] << endl;
    }
    //qDebug();
    port->write(cmd.toLocal8Bit());
    //port->write(ba);

}
void tranceiverlora::readDataLR()
{
    //readfile x;
    int t = port->bytesAvailable();
    if (t) {
        QString Code, Start, End, Image, my_Imgage;
        QByteArray ba = port->readAll();
        QString test(ba);
        //WriteTextAppend(x.LOG_FILE,test + "------------------------------------------\n");
        char* tmp = ba.data();
        char line[1024];
        QString Line;
        int i;
        int j = 0;
        for(i=0;i<t;i++){
            if(tmp[i] == '\n'){
                qDebug()<<"xxx";
                line[j] = '\0';
                Line = QString::fromLocal8Bit(line);
                if(j > 1){
                    emit receivedDataLR(Line);
                }
                //WriteTextAppend(x.LOG_FILE, Line + "***************************************\n");
                //qDebug()<< "Line:  "<< Line;
                Code = Line.mid(0,3);
            }
            else{
                line[j] = tmp[i];
                j++;
            }
        }
    }
}
