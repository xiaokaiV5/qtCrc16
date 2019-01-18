#include "crc16.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    crc16 w;
    w.show();

    return a.exec();
}
