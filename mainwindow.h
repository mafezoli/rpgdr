#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_d4Button_clicked();

    void on_d6Button_clicked();

    void on_d8Button_clicked();

    void on_d10Button_clicked();

    void on_d12Button_clicked();

    void on_d20Button_clicked();

    void on_d100Button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
