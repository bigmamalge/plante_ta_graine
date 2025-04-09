#include "onseenfouuwhala.h"
#include "ui_onseenfouuwhala.h"
#include <QDebug>
#include <QChar>
#include <QByteArray>
#include <QFile>
#include <QFileDialog>
#include <iostream>
#include <stdio.h>
#include <QMessageBox>
#include <QTextStream>
#include <QString>
onseenfouuwhala::onseenfouuwhala(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::onseenfouuwhala)
{
    ui->setupUi(this);
}

onseenfouuwhala::~onseenfouuwhala()
{
    delete ui;
}

void onseenfouuwhala::on_pushButton_clicked()
{
    fileName = QFileDialog::getOpenFileName(this,
                                            tr("Open Txt"), "U:/Documents/", tr("Text files (*.txt)"));

    ui->lineEdit->setText(fileName);


    QFile fichier(fileName);
    fichier.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream flux(&fichier);

    tout = flux.readAll();
    ui->textEdit->setText(tout);
}

