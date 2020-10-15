#include "PrimeNumberCalculator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PrimeNumberCalculator w;
    w.show();
    return a.exec();
}
