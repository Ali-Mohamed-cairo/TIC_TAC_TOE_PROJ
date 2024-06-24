#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

int gendre = 3;

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

void MainWindow::on_radioButtonFemale_clicked()
{
    gendre = 1;
}


void MainWindow::on_radioButton_male_clicked()
{
    gendre = 2;
}


void MainWindow::on_pushButton_Login_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::No;
    switch(gendre){
    case 1:
        ui->Last_Gender->setText("The last entered gender is Female");
        QMessageBox::information(this, "Rejection Message",
                                 "Females are prevented from entering the next window", QMessageBox::Cancel);
        break;
    case 2:
        ui->Last_Gender->setText("The last entered gender is male");
        reply = QMessageBox::information(this, "Determine Your action"
                                    ,"Do you love GAZA", QMessageBox::Yes, QMessageBox::No);
        if(QMessageBox::Yes == reply){
            QMessageBox::about(this, "Men reply", "Sigma Male :)'");
        }
        else if(QMessageBox::No == reply){
            QMessageBox::about(this, "insult", "Shame on you :<");
        }
        break;
    default:
        QMessageBox::warning(this, "Incorrect step",
                             "You didn't choose a gendre");
    }
}

