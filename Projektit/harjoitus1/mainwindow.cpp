#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    bool ok = connect(ui->calculateBtn, SIGNAL(clicked()),
        this, SLOT(onCalculate()));
    Q_ASSERT(ok);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onCalculate() {
    bool widthOk = false;
    bool heightOk = false;
    int width = ui->widthEdit->text().toInt(&widthOk,10);
    int height = ui->heightEdit->text().toInt(&heightOk,10);
    if(widthOk && heightOk)
    {
        QString area = QString::number(width * height);
        ui->result->setText(area);
    }
    else
    {
        ui->result->setText("");
    }
}