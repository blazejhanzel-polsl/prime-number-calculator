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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QGroupBox *groupBox;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QListWidget *listWidget;
    QFrame *line;
    QLabel *label_6;
    QFrame *line_2;
    QLCDNumber *lcdNumber;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(699, 521);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 90, 151, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 451, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 50, 121, 21));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 90, 21, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(260, 90, 21, 21));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(280, 90, 151, 20));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 90, 51, 21));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 150, 121, 21));
        radioButton_2->setChecked(false);
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 150, 281, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 120, 47, 21));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 190, 411, 81));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 20, 141, 21));
        radioButton_3->setChecked(true);
        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(20, 50, 221, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 280, 411, 61));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(20, 390, 411, 23));
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setEnabled(true);
        listWidget->setGeometry(QRect(470, 60, 211, 441));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(440, 0, 21, 521));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(470, 10, 211, 21));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 350, 411, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(20, 440, 411, 61));
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(13);
        lcdNumber->setProperty("value", QVariant(0.000000000000000));
        lcdNumber->setProperty("intValue", QVariant(0));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 370, 141, 16));
        QFont font3;
        font3.setPointSize(10);
        label_7->setFont(font3);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 420, 231, 21));
        label_8->setFont(font3);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(470, 30, 211, 21));
        QFont font4;
        font4.setPointSize(7);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label_9->setFont(font4);
        label_9->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        listWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Algorytm wyznaczaj\304\205\303\247cy liczby pierwsze - B\305\202a\305\274ej Hanzel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Algorytm wyznaczaj\304\205cy liczby pierwsze", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "by B\305\202a\305\274ej Hanzel", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "od", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "do", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Zakres", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Pojedyncza warto\305\233\304\207", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "lub", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Biblioteka obliczeniowa", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Biblioteka j\304\231zyka C++", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "Biblioteka niskopoziomowa (Assembler)", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Oblicz!", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Wyniki oblicze\305\204", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Status prac", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Czas trwania algorytmu (w sekundach)", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Poni\305\274sze liczby s\304\205 liczbami pierwszymi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIMENUMBERCALCULATOR_H
