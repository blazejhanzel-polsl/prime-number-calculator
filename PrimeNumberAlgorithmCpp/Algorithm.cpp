/*
Temat projektu: Kalkulator liczb pierwszych
Opis: Aplikacja s³u¿y do wyznaczania liczb pierwszych z zakresu podanego przez u¿ytkownika.
Semestr 5, Rok akademicki 2020/2021
Hanzel B³a¿ej gr. 2
*/

#include "pch.h"
#include <cstdlib>

// Wersja 2.0 z dnia 2020-12-20
/* W tej wersji zosta³o usuniête sprawdzanie czy liczba przez któr¹ dzielimy inn¹ sprawdzan¹ liczbê jest liczb¹ pierwsz¹.
   Oryginalny algorytm obliczania liczb pierwszych zak³ada takie sprawdzenie, poniewa¿ szukaj¹c liczb pierwszych metod¹ tradycyjn¹,
   tj. wykreœlaj¹c odpowiednie cyfry na kartce, ta metoda faktycznie jest wygodniejsza i pozwala korzystaæ z wczeœniej sprawdzonych wartoœci.
   W przypadku tego algorytmu okaza³o siê to jednak bezsensowne, poniewa¿ takie sprawdzenie wymaga³o przeliczenia wszystkich poprzednich liczb pierwszych od pocz¹tku.
   Bez tej funkcji algorytm dzia³a dok³adnie tak samo, tylko du¿o szybciej.
*/
// Metoda odpowiedzialna za sprawdzenie czy podana liczba jest liczb¹ pierwsz¹
// Jako parametr przyjmuje liczbê któr¹ nale¿y sprawdziæ
// W wyniku zwraca true lub false, który okreœla pierwszoœæ liczby
bool isPrimeNumber(int x) {
	for (int i = 2; i <= (int)sqrt(x); i++) {
		if (x % i == 0) // sprawdzamy czy obecnie sprawdzana liczba nie jest podzielna przez któr¹kolwiek inn¹ liczbê z zakresu
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
