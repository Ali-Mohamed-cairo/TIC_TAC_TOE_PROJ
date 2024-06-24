#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "HandlePB.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void ResetGameScreen();

private slots:
    void on_PB_1_1_clicked();

    void on_PB_0_0_clicked();

    void on_PB_0_1_clicked();

    void on_PB_0_2_clicked();

    void on_PB_1_0_clicked();

    void on_PB_1_2_clicked();

    void on_PB_2_0_clicked();

    void on_PB_2_1_clicked();

    void on_PB_2_2_clicked();

    void on_RESET_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
