/*
Temat projektu: Kalkulator liczb pierwszych
Opis: Aplikacja s³u¿y do wyznaczania liczb pierwszych z zakresu podanego przez u¿ytkownika.
Semestr 5, Rok akademicki 2020/2021
Hanzel B³a¿ej gr. 2
*/

#include "PrimeNumberCalculator.h"
#include <QtWidgets/QApplication>

// G³ówna metoda programu
// S³u¿y uruchamieniu interfejsu
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PrimeNumberCalculator w;
    w.show();
    return a.exec();
}
