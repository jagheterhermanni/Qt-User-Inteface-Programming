/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *leveys;
    QLineEdit *widthEdit;
    QLabel *korkeus;
    QLineEdit *heightEdit;
    QPushButton *calculateBtn;
    QLabel *pintaala;
    QLineEdit *result;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 600);
        MainWindow->setWindowOpacity(-2.000000000000000);
        MainWindow->setAutoFillBackground(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        leveys = new QLabel(centralwidget);
        leveys->setObjectName("leveys");

        gridLayout->addWidget(leveys, 0, 0, 1, 1);

        widthEdit = new QLineEdit(centralwidget);
        widthEdit->setObjectName("widthEdit");

        gridLayout->addWidget(widthEdit, 0, 1, 1, 1);

        korkeus = new QLabel(centralwidget);
        korkeus->setObjectName("korkeus");

        gridLayout->addWidget(korkeus, 1, 0, 1, 1);

        heightEdit = new QLineEdit(centralwidget);
        heightEdit->setObjectName("heightEdit");

        gridLayout->addWidget(heightEdit, 1, 1, 1, 1);

        calculateBtn = new QPushButton(centralwidget);
        calculateBtn->setObjectName("calculateBtn");

        gridLayout->addWidget(calculateBtn, 2, 0, 1, 2);

        pintaala = new QLabel(centralwidget);
        pintaala->setObjectName("pintaala");

        gridLayout->addWidget(pintaala, 3, 0, 1, 1);

        result = new QLineEdit(centralwidget);
        result->setObjectName("result");

        gridLayout->addWidget(result, 3, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "firstWindow", nullptr));
        leveys->setText(QCoreApplication::translate("MainWindow", "Leveys:", nullptr));
        korkeus->setText(QCoreApplication::translate("MainWindow", "Korkeus:", nullptr));
        calculateBtn->setText(QCoreApplication::translate("MainWindow", "Laske pinta-ala", nullptr));
        pintaala->setText(QCoreApplication::translate("MainWindow", "Pinta-ala:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
