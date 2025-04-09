#include "plante.h"
#include "ui_plante.h"
#include <QDebug>
#include <QChar>
#include <QByteArray>
#include <QFile>


plante::plante(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::plante)
{
    ui->setupUi(this);

    for (const QSerialPortInfo &portinfor : QSerialPortInfo::availablePorts())
    {
        qDebug() << "Port Name : " << portinfor.portName();
        qDebug() << "Port Location : " << portinfor.systemLocation();
        qDebug() << "Port Description : " << portinfor.description();

        desc = portinfor.description();

        if (desc == "Arduino Uno" || "Périphérique série USB")
        {
            port = portinfor.portName();
        }

    }





    COMPORT = new QSerialPort();
    COMPORT->setPortName(port);
    COMPORT->setBaudRate(QSerialPort::BaudRate::Baud9600);
    COMPORT->setParity(QSerialPort::Parity::NoParity);
    COMPORT->setDataBits(QSerialPort::DataBits::Data8);
    COMPORT->setStopBits(QSerialPort::StopBits::OneStop);
    COMPORT->setFlowControl(QSerialPort::FlowControl::NoFlowControl);
    COMPORT->open(QIODevice::ReadWrite);


    if (COMPORT->isOpen())
    {
        qDebug() << "Serial Port Is Connected to port : " << port;
    }
    else
    {
        qDebug() << "Serial Port Is Not Connected";
        qDebug() << COMPORT->error();
    }

    connect(COMPORT,SIGNAL(readyRead()),this,SLOT(Read_Data()));







}

plante::~plante()
{
    delete ui;
}

void plante::on_pushButton_clicked()
{
    if(COMPORT->isOpen())
    {
    push.clear();
    push.append(0b00000001);
    COMPORT->write(push);
    COMPORT->flush();
    searchvalue = 1;
    }
}

void plante::Read_Data()
{
    if (COMPORT->isOpen())
    {
        while(COMPORT->bytesAvailable())
        {
            Data_From_SerialPort += COMPORT->readAll();
            if(Data_From_SerialPort.at(Data_From_SerialPort.length() - 1) == char(10)){
                IS_DATA_Recevied = true;
            }
        }

        if  ( IS_DATA_Recevied == true)
        {
            qDebug() << Data_From_SerialPort;


            if (searchvalue == 4)
            {
                ui->humidext->setText(Data_From_SerialPort.slice(0, 2));
                qDebug() << Data_From_SerialPort;





                searchvalue = 0;

            }

            if (searchvalue == 3)
            {
                ui->tempext->setText(Data_From_SerialPort.slice(0, 2));
                qDebug() << Data_From_SerialPort;



                push.clear();
                push.append(0b00000100);
                COMPORT->write(push);
                COMPORT->flush();
                searchvalue = 4;


            }

            if (searchvalue == 2)
            {
                ui->capteur2->setText(Data_From_SerialPort.slice(0, 6));
                qDebug() << Data_From_SerialPort;



                push.clear();
                push.append(0b00000011);
                COMPORT->write(push);
                COMPORT->flush();
                searchvalue = 3;


            }

            if (searchvalue == 1)
            {
                ui->capteur1->setText(Data_From_SerialPort.slice(0, 4));
                qDebug() << Data_From_SerialPort;


                push.clear();
                push.append(0b00000010);
                COMPORT->write(push);
                COMPORT->flush();
                searchvalue = 2;

            }
             IS_DATA_Recevied = false;
             Data_From_SerialPort = "";


        }
    }
}

