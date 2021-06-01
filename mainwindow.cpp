#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_d4Button_clicked()
{
    auto maxNumber = 5;
    auto randomNumber = qrand() % maxNumber;
    ui->valueLabel->setText(QString::number(randomNumber));
}


void MainWindow::on_d6Button_clicked()
{
    auto maxNumber = 7;
    auto randomNumber = qrand() % maxNumber;
    ui->valueLabel->setText(QString::number(randomNumber));
}


void MainWindow::on_d8Button_clicked()
{
    auto maxNumber = 9;
    auto randomNumber = qrand() % maxNumber;
    ui->valueLabel->setText(QString::number(randomNumber));
}


void MainWindow::on_d10Button_clicked()
{
    auto maxNumber = 11;
    auto randomNumber = qrand() % maxNumber;
    ui->valueLabel->setText(QString::number(randomNumber));
}


void MainWindow::on_d12Button_clicked()
{
    auto maxNumber = 13;
    auto randomNumber = qrand() % maxNumber;
    ui->valueLabel->setText(QString::number(randomNumber));
}


void MainWindow::on_d20Button_clicked()
{
    auto maxNumber = 21;
    auto randomNumber = qrand() % maxNumber;
    ui->valueLabel->setText(QString::number(randomNumber));
}


void MainWindow::on_d100Button_clicked()
{
    auto maxNumber = 101;
    auto randomNumber = qrand() % maxNumber;
    ui->valueLabel->setText(QString::number(randomNumber));
}

