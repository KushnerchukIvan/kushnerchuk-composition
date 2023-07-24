#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString passport = ui->lineEdit->text();
    QString iban = ui->lineEdit_2->text();
    QString car = ui->lineEdit_3->text();

    QString combinedData = "паспортні данні: " + passport + "; IBAN: " + iban + "; номер машини: " + car;

    ui->label_5->setText(combinedData);
}

