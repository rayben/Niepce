#include <QtGui/QApplication>
#include "niepcemain.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NiepceMain w;
    w.show();
    return a.exec();
}
