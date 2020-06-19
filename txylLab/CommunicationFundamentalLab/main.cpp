#include "serverwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ServerWidget w;
    w.init("5000");
    w.show();


    ServerWidget w1;
    w1.init("6000");
    w1.show();
    return a.exec();
}
