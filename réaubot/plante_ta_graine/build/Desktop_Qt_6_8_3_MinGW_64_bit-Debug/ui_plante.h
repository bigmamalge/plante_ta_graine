/********************************************************************************
** Form generated from reading UI file 'plante.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANTE_H
#define UI_PLANTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_plante
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *plante)
    {
        if (plante->objectName().isEmpty())
            plante->setObjectName("plante");
        plante->resize(800, 600);
        centralwidget = new QWidget(plante);
        centralwidget->setObjectName("centralwidget");
        plante->setCentralWidget(centralwidget);
        menubar = new QMenuBar(plante);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
    } // retranslateUi

};

namespace Ui {
    class plante: public Ui_plante {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANTE_H
