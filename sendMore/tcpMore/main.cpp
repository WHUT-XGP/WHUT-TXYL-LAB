#include "serverwidget.h"
#include "clientwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ServerWidget w;
    w.show();
    ClientWidget c1;
    c1.show();
    ClientWidget c2;
    c2.show();
    ClientWidget c3;
    c3.show();
    ClientWidget c4;
    c4.show();
    return a.exec();
}
