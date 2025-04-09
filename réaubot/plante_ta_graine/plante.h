#ifndef PLANTE_H
#define PLANTE_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QtSerialPort/QtSerialPort>
#include <QByteArray>

QT_BEGIN_NAMESPACE
namespace Ui {
class plante;
}
QT_END_NAMESPACE

class plante : public QMainWindow
{
    Q_OBJECT

public:
    plante(QWidget *parent = nullptr);
    ~plante();

private slots:
    void on_pushButton_clicked();
    void Read_Data();

private:
    Ui::plante *ui;
    QSerialPort* COMPORT;

    QString desc;
    QString port;
    QString Data_From_SerialPort;
    bool IS_DATA_Recevied = false;
    QByteArray push;

    int searchvalue = 0;
};
#endif // PLANTE_H
