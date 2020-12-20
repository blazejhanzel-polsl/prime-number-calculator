/*
Temat projektu: Kalkulator liczb pierwszych
Opis: Aplikacja s³u¿y do wyznaczania liczb pierwszych z zakresu podanego przez u¿ytkownika.
Semestr 5, Rok akademicki 2020/2021
Hanzel B³a¿ej gr. 2
*/

#pragma once

#include <QtWidgets/QMainWindow>
#include <iostream>
#include <Windows.h>
#include <thread>
#include <vector>
#include <string>
#include "ui_PrimeNumberCalculator.h"
#include "x64/Debug/uic/ui_PrimeNumberCalculator.h"

typedef bool(*MYPROC)(int);

// Klasa aplikacji ppowi¹zana z typami u¿ywanymi w bibliotece Qt
class PrimeNumberCalculator : public QMainWindow
{
    Q_OBJECT

public:
    PrimeNumberCalculator(QWidget *parent = Q_NULLPTR);

private Q_SLOTS:
    void on_pushButton_clicked();
    void on_radioButton_singlevalue_clicked();
    void on_radioButton_twovalues_clicked();
    void threadWork(int min, int max, int thr_id);

private:
    Ui::MainWindow ui;

    enum Library {
        CPP,
        ASM
    } library;
    int minValue = 1, maxValue = 1;
    int cores = 1;
    std::vector<int> results[64];
    MYPROC fn;
    int progress[64];

    void StartAlgorithm();
};
