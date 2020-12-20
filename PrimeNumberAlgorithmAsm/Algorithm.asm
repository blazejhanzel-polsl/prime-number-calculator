; Temat projektu: Kalkulator liczb pierwszych
; Opis projektu: Aplikacja s³u¿y do wyznaczania liczb pierwszych z zakresu podanego przez u¿ytkownika.
; Semestr 5, Rok akademicki 2020/2021
; Hanzel B³a¿ej gr. 2
; Wersja 1.0 z dnia 2020-12-20

.data
	false equ 0            ; przypisanie sta³ej wartoœci dla fa³szu który bêdê zwaracaæ
	true equ 255           ; przypisanie sta³ej wartoœci dla prawdy, któr¹ bêdê zwracaæ
	sqrtOfX dd 0           ; zainicjowanie zmiennej, która bêdzie przechowywaæ póŸniej pierwiastek z x

.code

; procedura sprawdzaj¹ca dla zadanej liczby czy ta jest liczb¹ pierwsz¹
; procedura zwraca wartoœæ true lub false oznaczaj¹c¹ pierwszoœæ liczby
; parametr pobierany jest zgodnie z dokumentacj¹ z rejestru ecx
; procedura wykorzystuje rejestry ax, cx, dx
; zwracana wartosæ znajduje siê w eax
Calculate proc x: QWORD
	mov x, rcx             ; wczytujê parametr z rejestru do zmiennej x

	fild x                 ; pobieram x
	fsqrt                  ; wyliczam pierwiastek za pomoc¹ specjalnego rozkazu
	fistp sqrtOfX          ; wpisujê wynik do przygotowanej wczeœniej zmiennej

	mov ecx, 2             ; wartoœæ pocz¹tkowa dla pêtli
	cmp ecx, sqrtOfX       ; pierwsze porównanie przed wejœciem do pêtli
	jg rettrue             ; i jeœli pierwiastek jest mniejszy ni¿ iterator nie ma sensu wchodziæ do pêtli

	mainloop:              ; pêtla sprawdzaj¹ca wszystkie liczby czy nie s¹ pierwsze
		xor edx, edx       ; przygotowanie (czyszczenie) rejestru edx przed dzieleniem
		mov rax, x         ; pobranie zawartoœci zmiennej x
		div ecx            ; wykonanie dzielenia
		mov eax, edx       ; interesuje mnie tylko reszta z dzielenia, wiêc pobieram j¹ do akumulatora
		cmp eax, 0         ; porównujê, czy zawartoœæ (czyli reszta z dzielenia) jest zerem
		je retfalse        ; jeœli tak to liczba nie jest pierwsza wiêc nastêpuje przeskok
	
	inc ecx                ; inkrementacja licznika pêtli
	cmp ecx, sqrtOfX       ; porównanie, czy licznik pêtli nie przekroczy³ warunku pocz¹tkowego czyli pierwiastka z x
	jle mainloop           ; w przypadku kiedy pêtla jeszcze siê nie skoñczy³a nastêpuje jej kolejne wykonanie
	
	rettrue:               ; etykieta do zwracania wartoœci true
		mov eax, true      ; ustawia wartoœæ true w akumulatorze
		ret                ; nastêpuje powrót z procedury

	retfalse:              ; etykieta do zwracania wartoœci false
		mov eax, false     ; ustawia wartoœæ false w akumulatorze
		ret                ; nastêpuje powrót z procedury

Calculate endp             ; koniec procedury

end
