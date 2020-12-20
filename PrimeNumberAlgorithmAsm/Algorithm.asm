; Temat projektu: Kalkulator liczb pierwszych
; Opis projektu: Aplikacja s�u�y do wyznaczania liczb pierwszych z zakresu podanego przez u�ytkownika.
; Semestr 5, Rok akademicki 2020/2021
; Hanzel B�a�ej gr. 2
; Wersja 1.0 z dnia 2020-12-20

.data
	false equ 0            ; przypisanie sta�ej warto�ci dla fa�szu kt�ry b�d� zwaraca�
	true equ 255           ; przypisanie sta�ej warto�ci dla prawdy, kt�r� b�d� zwraca�
	sqrtOfX dd 0           ; zainicjowanie zmiennej, kt�ra b�dzie przechowywa� p�niej pierwiastek z x

.code

; procedura sprawdzaj�ca dla zadanej liczby czy ta jest liczb� pierwsz�
; procedura zwraca warto�� true lub false oznaczaj�c� pierwszo�� liczby
; parametr pobierany jest zgodnie z dokumentacj� z rejestru ecx
; procedura wykorzystuje rejestry ax, cx, dx
; zwracana wartos� znajduje si� w eax
Calculate proc x: QWORD
	mov x, rcx             ; wczytuj� parametr z rejestru do zmiennej x

	fild x                 ; pobieram x
	fsqrt                  ; wyliczam pierwiastek za pomoc� specjalnego rozkazu
	fistp sqrtOfX          ; wpisuj� wynik do przygotowanej wcze�niej zmiennej

	mov ecx, 2             ; warto�� pocz�tkowa dla p�tli
	cmp ecx, sqrtOfX       ; pierwsze por�wnanie przed wej�ciem do p�tli
	jg rettrue             ; i je�li pierwiastek jest mniejszy ni� iterator nie ma sensu wchodzi� do p�tli

	mainloop:              ; p�tla sprawdzaj�ca wszystkie liczby czy nie s� pierwsze
		xor edx, edx       ; przygotowanie (czyszczenie) rejestru edx przed dzieleniem
		mov rax, x         ; pobranie zawarto�ci zmiennej x
		div ecx            ; wykonanie dzielenia
		mov eax, edx       ; interesuje mnie tylko reszta z dzielenia, wi�c pobieram j� do akumulatora
		cmp eax, 0         ; por�wnuj�, czy zawarto�� (czyli reszta z dzielenia) jest zerem
		je retfalse        ; je�li tak to liczba nie jest pierwsza wi�c nast�puje przeskok
	
	inc ecx                ; inkrementacja licznika p�tli
	cmp ecx, sqrtOfX       ; por�wnanie, czy licznik p�tli nie przekroczy� warunku pocz�tkowego czyli pierwiastka z x
	jle mainloop           ; w przypadku kiedy p�tla jeszcze si� nie sko�czy�a nast�puje jej kolejne wykonanie
	
	rettrue:               ; etykieta do zwracania warto�ci true
		mov eax, true      ; ustawia warto�� true w akumulatorze
		ret                ; nast�puje powr�t z procedury

	retfalse:              ; etykieta do zwracania warto�ci false
		mov eax, false     ; ustawia warto�� false w akumulatorze
		ret                ; nast�puje powr�t z procedury

Calculate endp             ; koniec procedury

end
