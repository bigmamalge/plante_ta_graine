/********************************************************************************
** Form generated from reading UI file 'onseenfouuwhala.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONSEENFOUUWHALA_H
#define UI_ONSEENFOUUWHALA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_onseenfouuwhala
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *onseenfouuwhala)
    {
        if (onseenfouuwhala->objectName().isEmpty())
            onseenfouuwhala->setObjectName("onseenfouuwhala");
        onseenfouuwhala->resize(800, 600);
        centralwidget = new QWidget(onseenfouuwhala);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 260, 211, 81));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(40, 40, 351, 31));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(380, 170, 341, 281));
        onseenfouuwhala->setCentralWidget(centralwidget);
        menubar = new QMenuBar(onseenfouuwhala);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        onseenfouuwhala->setMenuBar(menubar);
        statusbar = new QStatusBar(onseenfouuwhala);
        statusbar->setObjectName("statusbar");
        onseenfouuwhala->setStatusBar(statusbar);

        retranslateUi(onseenfouuwhala);

        QMetaObject::connectSlotsByName(onseenfouuwhala);
    } // setupUi

    void retranslateUi(QMainWindow *onseenfouuwhala)
    {
        onseenfouuwhala->setWindowTitle(QCoreApplication::translate("onseenfouuwhala", "onseenfouuwhala", nullptr));
        pushButton->setText(QCoreApplication::translate("onseenfouuwhala", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class onseenfouuwhala: public Ui_onseenfouuwhala {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONSEENFOUUWHALA_H
