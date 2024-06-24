#include "nextgamesettings.h"
#include "ui_nextgamesettings.h"

nextgamesettings::nextgamesettings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::nextgamesettings)
{
    ui->setupUi(this);
}

nextgamesettings::~nextgamesettings()
{
    delete ui;
}

void nextgamesettings::on_ToWelcome_clicked()
{
    QMessageBox::StandardButton reply =(QMessageBox::StandardButton) QMessageBox::warning(this, "Take Care",
                                                                                           "You will need to sign in or sign up again",
                                                                                           QMessageBox::Ok, QMessageBox::Cancel);
    if(reply == QMessageBox::Ok){
        hide();
        MainWindow* ptr_1;
        ptr_1 = new MainWindow(this);
        ptr_1->show();
    }
}





void nextgamesettings::on_next_game_clicked()
{
    hide();
    game_window* ptr_3;
    ptr_3 = new game_window(this);
    ptr_3->show();
}


void nextgamesettings::on_pushButton_3_clicked()
{
    currenttoken = 'X';
    ui->pushButton_5->setText((QString)&currenttoken);
}


void nextgamesettings::on_pushButton_4_clicked()
{
    currenttoken = 'O';
    ui->pushButton_5->setText((QString)&currenttoken);
}


void nextgamesettings::on_pushButton_2_clicked()
{
    PlayingMode = "AI";
    ui->pushButton_6->setText(PlayingMode);
}


void nextgamesettings::on_pushButton_clicked()
{
    PlayingMode = "TwoPlayers";
    ui->pushButton_6->setText(PlayingMode);
}



