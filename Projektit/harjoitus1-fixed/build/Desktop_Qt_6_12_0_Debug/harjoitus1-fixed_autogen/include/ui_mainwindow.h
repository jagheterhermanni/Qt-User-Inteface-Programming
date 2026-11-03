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
#include <QtGui/QIcon>
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
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *calculateBtn;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *leveys;
    QLabel *korkeus;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLineEdit *widthEdit;
    QLineEdit *heightEdit;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *pintaala;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLineEdit *result;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(387, 273);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::MediaTape));
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(21, 109, 341, 61));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        calculateBtn = new QPushButton(gridLayoutWidget);
        calculateBtn->setObjectName("calculateBtn");

        gridLayout->addWidget(calculateBtn, 0, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(0, 10, 91, 101));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        leveys = new QLabel(gridLayoutWidget_2);
        leveys->setObjectName("leveys");
        leveys->setMaximumSize(QSize(139, 47));
        leveys->setFrameShape(QFrame::Shape::NoFrame);
        leveys->setTextFormat(Qt::TextFormat::AutoText);
        leveys->setScaledContents(false);

        gridLayout_2->addWidget(leveys, 0, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        korkeus = new QLabel(gridLayoutWidget_2);
        korkeus->setObjectName("korkeus");

        gridLayout_2->addWidget(korkeus, 1, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(90, 9, 291, 101));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widthEdit = new QLineEdit(gridLayoutWidget_3);
        widthEdit->setObjectName("widthEdit");
        widthEdit->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        widthEdit->setAutoFillBackground(false);

        gridLayout_3->addWidget(widthEdit, 0, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        heightEdit = new QLineEdit(gridLayoutWidget_3);
        heightEdit->setObjectName("heightEdit");

        gridLayout_3->addWidget(heightEdit, 1, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        gridLayoutWidget_4 = new QWidget(centralwidget);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(0, 169, 91, 51));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        pintaala = new QLabel(gridLayoutWidget_4);
        pintaala->setObjectName("pintaala");

        gridLayout_4->addWidget(pintaala, 1, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        gridLayoutWidget_5 = new QWidget(centralwidget);
        gridLayoutWidget_5->setObjectName("gridLayoutWidget_5");
        gridLayoutWidget_5->setGeometry(QRect(90, 170, 291, 51));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        result = new QLineEdit(gridLayoutWidget_5);
        result->setObjectName("result");
        result->setReadOnly(true);

        gridLayout_5->addWidget(result, 0, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "P\303\244\303\244 Ikkuna", nullptr));
        calculateBtn->setText(QCoreApplication::translate("MainWindow", "Laske pinta-ala", nullptr));
        leveys->setText(QCoreApplication::translate("MainWindow", "Leveys:", nullptr));
        korkeus->setText(QCoreApplication::translate("MainWindow", "Korkeus:", nullptr));
        widthEdit->setText(QString());
        heightEdit->setText(QString());
        pintaala->setText(QCoreApplication::translate("MainWindow", "Pinta-ala:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
