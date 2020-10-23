#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PrimeNumberCalculator.h"

class PrimeNumberCalculator : public QMainWindow
{
    Q_OBJECT

public:
    PrimeNumberCalculator(QWidget *parent = Q_NULLPTR);

private Q_SLOTS:
    void on_pushButton_clicked();
    void on_radioButton_singlevalue_clicked();
    void on_radioButton_twovalues_clicked();

private:
    Ui::MainWindow ui;

    enum Library {
        CPP,
        ASM
    } library;
    int minValue = 1, maxValue = 1;
    int cores = 1;

    void StartAlgorithm();
};
