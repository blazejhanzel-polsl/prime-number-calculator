/*
Temat projektu: Kalkulator liczb pierwszych
Opis: Aplikacja s�u�y do wyznaczania liczb pierwszych z zakresu podanego przez u�ytkownika.
Semestr 5, Rok akademicki 2020/2021
Hanzel B�a�ej gr. 2
*/

#include "pch.h"
#include <cstdlib>

// Wersja 2.0 z dnia 2020-12-20
/* W tej wersji zosta�o usuni�te sprawdzanie czy liczba przez kt�r� dzielimy inn� sprawdzan� liczb� jest liczb� pierwsz�.
   Oryginalny algorytm obliczania liczb pierwszych zak�ada takie sprawdzenie, poniewa� szukaj�c liczb pierwszych metod� tradycyjn�,
   tj. wykre�laj�c odpowiednie cyfry na kartce, ta metoda faktycznie jest wygodniejsza i pozwala korzysta� z wcze�niej sprawdzonych warto�ci.
   W przypadku tego algorytmu okaza�o si� to jednak bezsensowne, poniewa� takie sprawdzenie wymaga�o przeliczenia wszystkich poprzednich liczb pierwszych od pocz�tku.
   Bez tej funkcji algorytm dzia�a dok�adnie tak samo, tylko du�o szybciej.
*/
// Metoda odpowiedzialna za sprawdzenie czy podana liczba jest liczb� pierwsz�
// Jako parametr przyjmuje liczb� kt�r� nale�y sprawdzi�
// W wyniku zwraca true lub false, kt�ry okre�la pierwszo�� liczby
bool isPrimeNumber(int x) {
	for (int i = 2; i <= (int)sqrt(x); i++) {
		if (x % i == 0) // sprawdzamy czy obecnie sprawdzana liczba nie jest podzielna przez kt�r�kolwiek inn� liczb� z zakresu
			return false;
	}

	return true;
}

// Wersja 1.0
// bool isPrimeNumber(int x) {
//	for (int i = 2; i <= (int)sqrt(x); i++) {
//		if (!isPrimeNumber(i))
//			continue;
//		if (x % i == 0)
//			return false;
//	}
//
//	return true;
//}
