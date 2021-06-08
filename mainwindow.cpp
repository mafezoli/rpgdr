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
    QString values = "";
    for(auto value = 0; value < ui->valueSpinBox->value(); value++){
        auto maxNumber = 5;
        auto randomNumber = qrand() % maxNumber;
        values += QString::number(randomNumber) + " ";
    }
    ui->valueLabel->setText(values.trimmed());
}


void MainWindow::on_d6Button_clicked()
{
    QString values = "";
    for(auto value = 0; value < ui->valueSpinBox->value(); value++){
        auto maxNumber = 7;
        auto randomNumber = qrand() % maxNumber;
        values += QString::number(randomNumber) + " ";
    }
    ui->valueLabel->setText(values.trimmed());
}


void MainWindow::on_d8Button_clicked()
{
    QString values = "";
    for(auto value = 0; value < ui->valueSpinBox->value(); value++){
        auto maxNumber = 9;
        auto randomNumber = qrand() % maxNumber;
        values += QString::number(randomNumber) + " ";
    }
    ui->valueLabel->setText(values.trimmed());
}


void MainWindow::on_d10Button_clicked()
{
    QString values = "";
    for(auto value = 0; value < ui->valueSpinBox->value(); value++){
        auto maxNumber = 11;
        auto randomNumber = qrand() % maxNumber;
        values += QString::number(randomNumber) + " ";
    }
    ui->valueLabel->setText(values.trimmed());
}


void MainWindow::on_d12Button_clicked()
{
    QString values = "";
    for(auto value = 0; value < ui->valueSpinBox->value(); value++){
        auto maxNumber = 13;
        auto randomNumber = qrand() % maxNumber;
        values += QString::number(randomNumber) + " ";
    }
    ui->valueLabel->setText(values.trimmed());
}


void MainWindow::on_d20Button_clicked()
{
    QString values = "";
    for(auto value = 0; value < ui->valueSpinBox->value(); value++){
        auto maxNumber = 21;
        auto randomNumber = qrand() % maxNumber;
        values += QString::number(randomNumber) + " ";
    }
    ui->valueLabel->setText(values.trimmed());
}


void MainWindow::on_d100Button_clicked()
{
    QString values = "";
    for(auto value = 0; value < ui->valueSpinBox->value(); value++){
        auto maxNumber = 101;
        auto randomNumber = qrand() % maxNumber;
        values += QString::number(randomNumber) + " ";
    }
    ui->valueLabel->setText(values.trimmed());
}


void MainWindow::on_clearButton_clicked()
{
    ui->valueLabel->setText("Roll!");
}

