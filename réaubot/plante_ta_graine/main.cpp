#include "plante.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    plante w;
    w.show();
    return a.exec();
}
