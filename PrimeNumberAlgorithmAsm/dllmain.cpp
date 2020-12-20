/*
Temat projektu: Kalkulator liczb pierwszych
Opis: Aplikacja służy do wyznaczania liczb pierwszych z zakresu podanego przez użytkownika.
Semestr 5, Rok akademicki 2020/2021
Hanzel Błażej gr. 2
*/

// dllmain.cpp : Definiuje punkt wejścia dla aplikacji DLL.
#include "pch.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

