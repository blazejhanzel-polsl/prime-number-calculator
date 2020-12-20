/*
Temat projektu: Kalkulator liczb pierwszych
Opis: Aplikacja s³u¿y do wyznaczania liczb pierwszych z zakresu podanego przez u¿ytkownika.
Semestr 5, Rok akademicki 2020/2021
Hanzel B³a¿ej gr. 2
*/

#include "PrimeNumberCalculator.h"

#include "../PrimeNumberAlgorithmAsm/pch.h"
#include "../PrimeNumberAlgorithmCpp/pch.h"

using namespace std;

double PCFreq = 0.0;
__int64 CounterStart = 0;

// Metoda uruchamiaj¹ca licznik (czasu trwania ca³ego algorytmu)
void StartCounter() {
    LARGE_INTEGER li;
    if (!QueryPerformanceFrequency(&li))
        cout << "QueryPerformanceFrequency failed!\n";

    PCFreq = double(li.QuadPart);

    QueryPerformanceCounter(&li);
    CounterStart = li.QuadPart;
}

// Metoda pobieraj¹ca dane z licznika odnoœnie czasu trwania algorytmu
double GetCounter() {
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return double(li.QuadPart - CounterStart) / PCFreq;
}

// Metoda okreœlaj¹ca czynnoœci, które musi wykonaæ jeden w¹tek
void PrimeNumberCalculator::threadWork(int min, int max, int thr_id) {
    for (unsigned int i = min; i <= max; i++) {
        if (fn(i)) {
            results[thr_id].push_back(i);
        }
        progress[thr_id]++;
    }
}

// Konstruktor
PrimeNumberCalculator::PrimeNumberCalculator(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.spinBox_cores->setValue(std::thread::hardware_concurrency());
}

// MEtoda okreœlaj¹ca zachowanie aplikacji po klikniêciu przycisku startu
void PrimeNumberCalculator::on_pushButton_clicked() {
    // variables initialization
    if (ui.radioButton_libcpp->isChecked())
        library = CPP;
    else
        library = ASM;

    if (ui.radioButton_singlevalue->isChecked()) {
        minValue = ui.spinBox_singlevalue->value();
        maxValue = minValue;
    }
    else {
        minValue = ui.spinBox_minvalue->value();
        maxValue = ui.spinBox_maxvalue->value();
    }

    cores = ui.spinBox_cores->value();

    StartAlgorithm();
}

// Metoda sprawdzaj¹ca i orkeœlaj¹ca zachowanie aplikacji po klikniêciu pierwszego obiektu RadioButton
void PrimeNumberCalculator::on_radioButton_singlevalue_clicked() {
    ui.spinBox_minvalue->setDisabled(true);
    ui.spinBox_maxvalue->setDisabled(true);
    ui.spinBox_singlevalue->setDisabled(false);
}

// Metoda sprawdzaj¹ca i orkeœlaj¹ca zachowanie aplikacji po klikniêciu drugiego obiektu RadioButton
void PrimeNumberCalculator::on_radioButton_twovalues_clicked() {
    ui.spinBox_minvalue->setDisabled(false);
    ui.spinBox_maxvalue->setDisabled(false);
    ui.spinBox_singlevalue->setDisabled(true);
}

// Metoda rozpoczynaj¹ca pracê algorytmu
void PrimeNumberCalculator::StartAlgorithm() {
    ui.list_results->clear();
    ui.lcdNumber->display(QString::fromStdString("-------------"));

    HINSTANCE hdll = (library == ASM) ? LoadLibrary(L"PNA-ASM.dll") : LoadLibrary(L"PNA-CPP.dll");

    if (hdll != nullptr) {
        fn = (library == ASM) ? (MYPROC)GetProcAddress(hdll, "Calculate") : (MYPROC)GetProcAddress(hdll, "isPrimeNumber"); // przypisanie funkcji z odpowiedniej biblioteki do wskaŸnika

        for (int i = 0; i < 64; i++) {
            progress[i] = 0;
        }
        
        // ZARZ¥DZANIE PROCESAMI ZACZYNA SIÊ W TYM MIEJSCU

        std::vector <std::thread> threads;
        threads.reserve(64);
        int step = (maxValue - minValue) / cores;

        StartCounter(); // w tym miejscu rozpoczynamy mierzenie czasu wykonania algorytmu
        for (int i = 0; i < cores; i++) {
            threads.push_back(std::thread(&PrimeNumberCalculator::threadWork, this, minValue + i * step, ((i == cores - 1) ? maxValue : minValue - 1 + (i + 1) * step), i));
        }

        int doneItems = 0;
        while (doneItems < maxValue - minValue + 1) {
            doneItems = 0;
            for (int i = 0; i < cores; i++) {
                doneItems += progress[i];
            }
            ui.progressBar->setValue((int)(100 * doneItems / ((maxValue - minValue) + 1)));
            std::this_thread::sleep_for(std::chrono::milliseconds(1000 / 60));
        }
        
        for (int i = 0; i < cores; i++) {
            threads[i].join();
        }
        ui.lcdNumber->display(GetCounter()); // tutaj pobierana jest wartoœæ z licznika i wypisywana na ekran 

        // TUTAJ KOÑCZY SIÊ ZARZ¥DZANIE PROCESAMI

        FreeLibrary(hdll); // zwolnienie biblioteki

        for (int i = 0; i < cores; i++) {
            for (auto result : results[i]) {
                ui.list_results->addItem(QString::fromStdString(to_string(result)));
            }
            results[i].clear();
        }
    }
}
