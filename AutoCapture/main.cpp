#include "stdafx.h"
#include "AutoCapture.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AutoCapture w;
    w.show();
    return a.exec();
}
