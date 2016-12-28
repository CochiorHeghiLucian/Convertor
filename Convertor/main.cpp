#include "convertor.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Convertor w;
    w.setFixedSize(1000,500);
    w.show();

    return a.exec();
}
