#include "PrimeNumberCalculator.h"
#include <iostream>
#include <Windows.h>
#include <thread>

#include "../PrimeNumberAlgorithmAsm/pch.h"
#include "../PrimeNumberAlgorithmCpp/pch.h"

PrimeNumberCalculator::PrimeNumberCalculator(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.spinBox_cores->setValue(std::thread::hardware_concurrency());
}

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

void PrimeNumberCalculator::on_radioButton_singlevalue_clicked() {
    ui.spinBox_minvalue->setDisabled(true);
    ui.spinBox_maxvalue->setDisabled(true);
    ui.spinBox_singlevalue->setDisabled(false);
}

void PrimeNumberCalculator::on_radioButton_twovalues_clicked() {
    ui.spinBox_minvalue->setDisabled(false);
    ui.spinBox_maxvalue->setDisabled(false);
    ui.spinBox_singlevalue->setDisabled(true);
}

void PrimeNumberCalculator::StartAlgorithm() {
    typedef bool(*MYPROC)(int);

    HINSTANCE hdll = (library == ASM) ? LoadLibrary(L"PNA-ASM.dll") : LoadLibrary(L"PNA-CPP.dll");

    if (hdll != nullptr) {
        MYPROC fn = (library == ASM) ? (MYPROC)GetProcAddress(hdll, "Calculate") : (MYPROC)GetProcAddress(hdll, "isPrimeNumber");
        
        fn(1);

        FreeLibrary(hdll);
    }
}
