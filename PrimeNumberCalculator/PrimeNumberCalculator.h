#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PrimeNumberCalculator.h"

class PrimeNumberCalculator : public QMainWindow
{
    Q_OBJECT

public:
    PrimeNumberCalculator(QWidget *parent = Q_NULLPTR);

private:
    Ui::MainWindow ui;
};
