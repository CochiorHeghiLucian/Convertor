#include "convertor.h"
#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Convertor w;
    w.setFixedSize(910,550);
    w.show();
    w.move(QApplication::desktop()->screen()->rect().center()-w.rect().center());

    return a.exec();
}
