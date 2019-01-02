/********************************************************************************
** Form generated from reading UI file 'configthreshold.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGTHRESHOLD_H
#define UI_CONFIGTHRESHOLD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_configThreshold
{
public:
    QFrame *line;
    QLabel *label;
    QLabel *label_2;
    QDoubleSpinBox *dsb_Temp;
    QDoubleSpinBox *dsb_Humi;
    QDoubleSpinBox *dsb_Light;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *btn_accept;
    QPushButton *pushButton_2;

    void setupUi(QDialog *configThreshold)
    {
        if (configThreshold->objectName().isEmpty())
            configThreshold->setObjectName(QString::fromUtf8("configThreshold"));
        configThreshold->resize(477, 312);
        line = new QFrame(configThreshold);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(230, 20, 20, 191));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(configThreshold);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 20, 59, 14));
        label_2 = new QLabel(configThreshold);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 20, 59, 14));
        dsb_Temp = new QDoubleSpinBox(configThreshold);
        dsb_Temp->setObjectName(QString::fromUtf8("dsb_Temp"));
        dsb_Temp->setGeometry(QRect(120, 80, 66, 23));
        dsb_Humi = new QDoubleSpinBox(configThreshold);
        dsb_Humi->setObjectName(QString::fromUtf8("dsb_Humi"));
        dsb_Humi->setGeometry(QRect(120, 140, 66, 23));
        dsb_Light = new QDoubleSpinBox(configThreshold);
        dsb_Light->setObjectName(QString::fromUtf8("dsb_Light"));
        dsb_Light->setGeometry(QRect(350, 80, 66, 23));
        label_3 = new QLabel(configThreshold);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 80, 81, 21));
        label_4 = new QLabel(configThreshold);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 140, 61, 21));
        label_5 = new QLabel(configThreshold);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(278, 80, 61, 20));
        label_6 = new QLabel(configThreshold);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(200, 80, 31, 21));
        label_7 = new QLabel(configThreshold);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(200, 140, 21, 21));
        label_8 = new QLabel(configThreshold);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(430, 80, 31, 21));
        btn_accept = new QPushButton(configThreshold);
        btn_accept->setObjectName(QString::fromUtf8("btn_accept"));
        btn_accept->setGeometry(QRect(220, 260, 80, 22));
        pushButton_2 = new QPushButton(configThreshold);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 260, 80, 22));

        retranslateUi(configThreshold);

        QMetaObject::connectSlotsByName(configThreshold);
    } // setupUi

    void retranslateUi(QDialog *configThreshold)
    {
        configThreshold->setWindowTitle(QApplication::translate("configThreshold", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("configThreshold", "Pump", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("configThreshold", "Light", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("configThreshold", "Temperature", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("configThreshold", "Humidity", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("configThreshold", "lumineux", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("configThreshold", "\302\260C", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("configThreshold", "%", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("configThreshold", "Lux", 0, QApplication::UnicodeUTF8));
        btn_accept->setText(QApplication::translate("configThreshold", "Accept", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("configThreshold", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class configThreshold: public Ui_configThreshold {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGTHRESHOLD_H
