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
        MainWindow->resize(280, 199);
        QPalette palette;
        QBrush brush(QColor(165, 29, 45, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(230, 97, 0, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush2);
        QBrush brush3(QColor(98, 160, 234, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush3);
        QBrush brush4(QColor(154, 153, 150, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush4);
        QBrush brush5(QColor(28, 113, 216, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush5);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush5);
        MainWindow->setPalette(palette);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::MediaTape));
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(21, 89, 221, 31));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        calculateBtn = new QPushButton(gridLayoutWidget);
        calculateBtn->setObjectName("calculateBtn");

        gridLayout->addWidget(calculateBtn, 0, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(0, 10, 91, 81));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        leveys = new QLabel(gridLayoutWidget_2);
        leveys->setObjectName("leveys");
        leveys->setMaximumSize(QSize(139, 47));
        leveys->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Ubuntu\";"));
        leveys->setFrameShape(QFrame::Shape::NoFrame);
        leveys->setTextFormat(Qt::TextFormat::AutoText);
        leveys->setScaledContents(false);

        gridLayout_2->addWidget(leveys, 0, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        korkeus = new QLabel(gridLayoutWidget_2);
        korkeus->setObjectName("korkeus");
        korkeus->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Ubuntu\";"));

        gridLayout_2->addWidget(korkeus, 1, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(90, 9, 181, 81));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widthEdit = new QLineEdit(gridLayoutWidget_3);
        widthEdit->setObjectName("widthEdit");
        widthEdit->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        widthEdit->setAutoFillBackground(false);
        widthEdit->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Ubuntu\";"));

        gridLayout_3->addWidget(widthEdit, 0, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        heightEdit = new QLineEdit(gridLayoutWidget_3);
        heightEdit->setObjectName("heightEdit");
        heightEdit->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        heightEdit->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Ubuntu\";"));

        gridLayout_3->addWidget(heightEdit, 1, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        gridLayoutWidget_4 = new QWidget(centralwidget);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(0, 119, 91, 31));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        pintaala = new QLabel(gridLayoutWidget_4);
        pintaala->setObjectName("pintaala");
        pintaala->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Ubuntu\";"));

        gridLayout_4->addWidget(pintaala, 1, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        gridLayoutWidget_5 = new QWidget(centralwidget);
        gridLayoutWidget_5->setObjectName("gridLayoutWidget_5");
        gridLayoutWidget_5->setGeometry(QRect(90, 120, 181, 31));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        result = new QLineEdit(gridLayoutWidget_5);
        result->setObjectName("result");
        result->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        result->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Ubuntu\";"));
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Pinta-ala laskuri", nullptr));
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
