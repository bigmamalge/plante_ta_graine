#ifndef ONSEENFOUUWHALA_H
#define ONSEENFOUUWHALA_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QtSerialPort/QtSerialPort>
#include <QByteArray>

QT_BEGIN_NAMESPACE
namespace Ui {
class onseenfouuwhala;
}
QT_END_NAMESPACE

class onseenfouuwhala : public QMainWindow
{
    Q_OBJECT

public:
    onseenfouuwhala(QWidget *parent = nullptr);
    ~onseenfouuwhala();

private slots:
    void on_pushButton_clicked();

private:
    Ui::onseenfouuwhala *ui;
    QString fileName;
    QString tout;
};
#endif // ONSEENFOUUWHALA_H
