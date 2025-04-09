/********************************************************************************
** Form generated from reading UI file 'plante.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANTE_H
#define UI_PLANTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_plante
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *capteur1;
    QLineEdit *capteur2;
    QLineEdit *tempext;
    QLineEdit *humidext;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *plante)
    {
        if (plante->objectName().isEmpty())
            plante->setObjectName("plante");
        plante->resize(810, 477);
        centralwidget = new QWidget(plante);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 190, 181, 61));
        capteur1 = new QLineEdit(centralwidget);
        capteur1->setObjectName("capteur1");
        capteur1->setGeometry(QRect(540, 70, 151, 41));
        capteur2 = new QLineEdit(centralwidget);
        capteur2->setObjectName("capteur2");
        capteur2->setGeometry(QRect(540, 130, 151, 41));
        tempext = new QLineEdit(centralwidget);
        tempext->setObjectName("tempext");
        tempext->setGeometry(QRect(540, 260, 151, 41));
        humidext = new QLineEdit(centralwidget);
        humidext->setObjectName("humidext");
        humidext->setGeometry(QRect(540, 310, 151, 41));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(460, 80, 81, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(460, 140, 49, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(410, 270, 131, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(410, 320, 131, 20));
        plante->setCentralWidget(centralwidget);
        menubar = new QMenuBar(plante);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 810, 21));
        plante->setMenuBar(menubar);
        statusbar = new QStatusBar(plante);
        statusbar->setObjectName("statusbar");
        plante->setStatusBar(statusbar);

        retranslateUi(plante);

        QMetaObject::connectSlotsByName(plante);
    } // setupUi

    void retranslateUi(QMainWindow *plante)
    {
        plante->setWindowTitle(QCoreApplication::translate("plante", "plante", nullptr));
        pushButton->setText(QCoreApplication::translate("plante", "prendre les donn\303\251es", nullptr));
        label->setText(QCoreApplication::translate("plante", "capteur 1", nullptr));
        label_2->setText(QCoreApplication::translate("plante", "capteur 2", nullptr));
        label_3->setText(QCoreApplication::translate("plante", "Temp\303\251rature exterieure", nullptr));
        label_4->setText(QCoreApplication::translate("plante", "Humidit\303\251 exterieure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class plante: public Ui_plante {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANTE_H
