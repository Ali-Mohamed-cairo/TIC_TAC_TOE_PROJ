#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QString>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->PB_0_0, &QPushButton::clicked, [&]() {
        OnClick();
    });
    connect(ui->PB_0_1, &QPushButton::clicked, [&]() {
        OnClick();
    });
    connect(ui->PB_0_2, &QPushButton::clicked, [&]() {
        OnClick();
    });
    connect(ui->PB_1_0, &QPushButton::clicked, [&]() {
        OnClick();
    });
    connect(ui->PB_1_1, &QPushButton::clicked, [&]() {
        OnClick();
    });
    connect(ui->PB_1_2, &QPushButton::clicked, [&]() {
        OnClick();
    });
    connect(ui->PB_2_0, &QPushButton::clicked, [&]() {
        OnClick();
    });
    connect(ui->PB_2_1, &QPushButton::clicked, [&]() {
        OnClick();
    });
    connect(ui->PB_2_2, &QPushButton::clicked, [&]() {
        OnClick();
    });

}

void MainWindow::ResetGameScreen(){
    //Reset the screen
    ui->PB_0_0->setText((QString)"\0");
    ui->PB_0_1->setText((QString)"\0");
    ui->PB_0_2->setText((QString)"\0");
    ui->PB_1_0->setText((QString)"\0");
    ui->PB_1_1->setText((QString)"\0");
    ui->PB_1_2->setText((QString)"\0");
    ui->PB_2_0->setText((QString)"\0");
    ui->PB_2_1->setText((QString)"\0");
    ui->PB_2_2->setText((QString)"\0");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_PB_0_0_clicked()
{
    ui->PB_0_0->setText((QString)&currentPlayer);
    Entered_Row = 0;
    Entered_Col = 0;
    movesLeft--;
}


void MainWindow::on_PB_0_1_clicked()
{
    ui->PB_0_1->setText((QString)&currentPlayer);
    Entered_Row = 0;
    Entered_Col = 1;
    movesLeft--;
}


void MainWindow::on_PB_0_2_clicked()
{
    ui->PB_0_2->setText((QString)&currentPlayer);
    Entered_Row = 0;
    Entered_Col = 2;
    movesLeft--;
}


void MainWindow::on_PB_1_0_clicked()
{
    ui->PB_1_0->setText((QString)&currentPlayer);
    Entered_Row = 1;
    Entered_Col = 0;
    movesLeft--;
}



void MainWindow::on_PB_1_1_clicked()
{
    ui->PB_1_1->setText((QString)&currentPlayer);
    Entered_Row = 1;
    Entered_Col = 1;
    movesLeft--;
}


void MainWindow::on_PB_1_2_clicked()
{
    ui->PB_1_2->setText((QString)&currentPlayer);
    Entered_Row = 1;
    Entered_Col = 2;
    movesLeft--;
}


void MainWindow::on_PB_2_0_clicked()
{
    ui->PB_2_0->setText((QString)&currentPlayer);
    Entered_Row = 2;
    Entered_Col = 0;
    movesLeft--;
}


void MainWindow::on_PB_2_1_clicked()
{
    ui->PB_2_1->setText((QString)&currentPlayer);
    Entered_Row = 2;
    Entered_Col = 1;
    movesLeft--;
}


void MainWindow::on_PB_2_2_clicked()
{
    ui->PB_2_2->setText((QString)&currentPlayer);
    Entered_Row = 2;
    Entered_Col = 2;
    movesLeft--;
}



void MainWindow::on_RESET_clicked()
{
    ResetGameScreen();
    ResetGame();
}

