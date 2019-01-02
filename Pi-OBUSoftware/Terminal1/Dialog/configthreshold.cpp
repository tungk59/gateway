#include "configthreshold.h"
#include "ui_configthreshold.h"
#include <QDebug>
configThreshold::configThreshold(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::configThreshold)
{
    ui->setupUi(this);
}

configThreshold::~configThreshold()
{
    delete ui;
}

void configThreshold::on_btn_accept_clicked()
{
    DATA::temp_t=ui->dsb_Temp->value();
    qDebug()<<DATA::temp_t;
}
