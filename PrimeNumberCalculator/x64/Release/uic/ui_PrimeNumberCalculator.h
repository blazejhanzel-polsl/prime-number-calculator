/********************************************************************************
** Form generated from reading UI file 'PrimeNumberCalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIMENUMBERCALCULATOR_H
#define UI_PRIMENUMBERCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_title;
    QLabel *label_author;
    QLabel *label_minvalue;
    QLabel *label_maxvalue;
    QRadioButton *radioButton_twovalues;
    QRadioButton *radioButton_singlevalue;
    QLabel *label_or;
    QGroupBox *groupBox_lib;
    QRadioButton *radioButton_libcpp;
    QRadioButton *radioButton_libasm;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QListWidget *list_results;
    QFrame *line;
    QLabel *label_resulttitle;
    QFrame *line_2;
    QLCDNumber *lcdNumber;
    QLabel *label_workstatus;
    QLabel *label_worktime;
    QLabel *label_resultdescription;
    QGroupBox *groupBox_cores;
    QLabel *label_cores;
    QSpinBox *spinBox_cores;
    QSpinBox *spinBox_minvalue;
    QSpinBox *spinBox_maxvalue;
    QSpinBox *spinBox_singlevalue;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(699, 511);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(0, 10, 451, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_title->setFont(font);
        label_title->setAlignment(Qt::AlignCenter);
        label_author = new QLabel(centralwidget);
        label_author->setObjectName(QString::fromUtf8("label_author"));
        label_author->setGeometry(QRect(40, 50, 121, 21));
        QFont font1;
        font1.setPointSize(12);
        label_author->setFont(font1);
        label_minvalue = new QLabel(centralwidget);
        label_minvalue->setObjectName(QString::fromUtf8("label_minvalue"));
        label_minvalue->setGeometry(QRect(80, 90, 21, 21));
        label_maxvalue = new QLabel(centralwidget);
        label_maxvalue->setObjectName(QString::fromUtf8("label_maxvalue"));
        label_maxvalue->setGeometry(QRect(260, 90, 21, 21));
        radioButton_twovalues = new QRadioButton(centralwidget);
        radioButton_twovalues->setObjectName(QString::fromUtf8("radioButton_twovalues"));
        radioButton_twovalues->setGeometry(QRect(20, 90, 51, 21));
        radioButton_twovalues->setChecked(true);
        radioButton_singlevalue = new QRadioButton(centralwidget);
        radioButton_singlevalue->setObjectName(QString::fromUtf8("radioButton_singlevalue"));
        radioButton_singlevalue->setGeometry(QRect(20, 150, 121, 21));
        radioButton_singlevalue->setChecked(false);
        label_or = new QLabel(centralwidget);
        label_or->setObjectName(QString::fromUtf8("label_or"));
        label_or->setGeometry(QRect(60, 120, 47, 21));
        groupBox_lib = new QGroupBox(centralwidget);
        groupBox_lib->setObjectName(QString::fromUtf8("groupBox_lib"));
        groupBox_lib->setGeometry(QRect(20, 190, 241, 71));
        radioButton_libcpp = new QRadioButton(groupBox_lib);
        radioButton_libcpp->setObjectName(QString::fromUtf8("radioButton_libcpp"));
        radioButton_libcpp->setEnabled(true);
        radioButton_libcpp->setGeometry(QRect(20, 20, 141, 21));
        radioButton_libcpp->setChecked(true);
        radioButton_libasm = new QRadioButton(groupBox_lib);
        radioButton_libasm->setObjectName(QString::fromUtf8("radioButton_libasm"));
        radioButton_libasm->setGeometry(QRect(20, 40, 221, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 270, 411, 61));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(20, 380, 411, 23));
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        list_results = new QListWidget(centralwidget);
        list_results->setObjectName(QString::fromUtf8("list_results"));
        list_results->setEnabled(true);
        list_results->setGeometry(QRect(470, 60, 211, 431));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(440, 0, 21, 511));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_resulttitle = new QLabel(centralwidget);
        label_resulttitle->setObjectName(QString::fromUtf8("label_resulttitle"));
        label_resulttitle->setGeometry(QRect(470, 10, 211, 21));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_resulttitle->setFont(font2);
        label_resulttitle->setAlignment(Qt::AlignCenter);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 340, 411, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(20, 430, 411, 61));
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(13);
        lcdNumber->setProperty("value", QVariant(0.000000000000000));
        lcdNumber->setProperty("intValue", QVariant(0));
        label_workstatus = new QLabel(centralwidget);
        label_workstatus->setObjectName(QString::fromUtf8("label_workstatus"));
        label_workstatus->setGeometry(QRect(20, 360, 141, 16));
        QFont font3;
        font3.setPointSize(10);
        label_workstatus->setFont(font3);
        label_worktime = new QLabel(centralwidget);
        label_worktime->setObjectName(QString::fromUtf8("label_worktime"));
        label_worktime->setGeometry(QRect(20, 410, 231, 21));
        label_worktime->setFont(font3);
        label_resultdescription = new QLabel(centralwidget);
        label_resultdescription->setObjectName(QString::fromUtf8("label_resultdescription"));
        label_resultdescription->setGeometry(QRect(470, 30, 211, 21));
        QFont font4;
        font4.setPointSize(7);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label_resultdescription->setFont(font4);
        label_resultdescription->setAlignment(Qt::AlignCenter);
        groupBox_cores = new QGroupBox(centralwidget);
        groupBox_cores->setObjectName(QString::fromUtf8("groupBox_cores"));
        groupBox_cores->setGeometry(QRect(270, 190, 161, 71));
        label_cores = new QLabel(groupBox_cores);
        label_cores->setObjectName(QString::fromUtf8("label_cores"));
        label_cores->setGeometry(QRect(10, 10, 141, 31));
        spinBox_cores = new QSpinBox(groupBox_cores);
        spinBox_cores->setObjectName(QString::fromUtf8("spinBox_cores"));
        spinBox_cores->setGeometry(QRect(10, 40, 141, 22));
        spinBox_cores->setMinimum(1);
        spinBox_cores->setMaximum(64);
        spinBox_cores->setValue(2);
        spinBox_minvalue = new QSpinBox(centralwidget);
        spinBox_minvalue->setObjectName(QString::fromUtf8("spinBox_minvalue"));
        spinBox_minvalue->setGeometry(QRect(100, 90, 151, 22));
        spinBox_minvalue->setMinimum(1);
        spinBox_minvalue->setMaximum(2147483647);
        spinBox_maxvalue = new QSpinBox(centralwidget);
        spinBox_maxvalue->setObjectName(QString::fromUtf8("spinBox_maxvalue"));
        spinBox_maxvalue->setGeometry(QRect(280, 90, 151, 22));
        spinBox_maxvalue->setMinimum(1);
        spinBox_maxvalue->setMaximum(2147483647);
        spinBox_maxvalue->setValue(120);
        spinBox_singlevalue = new QSpinBox(centralwidget);
        spinBox_singlevalue->setObjectName(QString::fromUtf8("spinBox_singlevalue"));
        spinBox_singlevalue->setEnabled(false);
        spinBox_singlevalue->setGeometry(QRect(150, 150, 281, 22));
        spinBox_singlevalue->setMinimum(1);
        spinBox_singlevalue->setMaximum(2147483647);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        list_results->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Algorytm wyznaczaj\304\205cy liczby pierwsze - B\305\202a\305\274ej Hanzel", nullptr));
        label_title->setText(QCoreApplication::translate("MainWindow", "Algorytm wyznaczaj\304\205cy liczby pierwsze", nullptr));
        label_author->setText(QCoreApplication::translate("MainWindow", "by B\305\202a\305\274ej Hanzel", nullptr));
        label_minvalue->setText(QCoreApplication::translate("MainWindow", "od", nullptr));
        label_maxvalue->setText(QCoreApplication::translate("MainWindow", "do", nullptr));
        radioButton_twovalues->setText(QCoreApplication::translate("MainWindow", "Zakres", nullptr));
        radioButton_singlevalue->setText(QCoreApplication::translate("MainWindow", "Pojedyncza warto\305\233\304\207", nullptr));
        label_or->setText(QCoreApplication::translate("MainWindow", "lub", nullptr));
        groupBox_lib->setTitle(QCoreApplication::translate("MainWindow", "Biblioteka obliczeniowa", nullptr));
        radioButton_libcpp->setText(QCoreApplication::translate("MainWindow", "Biblioteka j\304\231zyka C++", nullptr));
        radioButton_libasm->setText(QCoreApplication::translate("MainWindow", "Biblioteka niskopoziomowa (Assembler)", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Oblicz!", nullptr));
        label_resulttitle->setText(QCoreApplication::translate("MainWindow", "Wyniki oblicze\305\204", nullptr));
        label_workstatus->setText(QCoreApplication::translate("MainWindow", "Status prac", nullptr));
        label_worktime->setText(QCoreApplication::translate("MainWindow", "Czas trwania algorytmu (w sekundach)", nullptr));
        label_resultdescription->setText(QCoreApplication::translate("MainWindow", "Poni\305\274sze liczby s\304\205 liczbami pierwszymi", nullptr));
        groupBox_cores->setTitle(QCoreApplication::translate("MainWindow", "Liczba w\304\205tk\303\263w do oblicze\305\204", nullptr));
        label_cores->setText(QCoreApplication::translate("MainWindow", "Minimum: 1 Maximum: 64", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIMENUMBERCALCULATOR_H
