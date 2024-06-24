#include "profile.h"
#include "ui_profile.h"

extern int Registering_State;
void (*CallBackChangeInfo)(void);

Profile::Profile(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Profile)
{
    ui->setupUi(this);
    qDebug()<< "Current player is" << currentPlayer->username;
    ui->Header->setText("Welcome " + currentPlayer->username);
}

Profile::~Profile()
{
    delete ui;
}

void Profile::on_ToWelcome_clicked()
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


void Profile::on_ToNextGame_clicked()
{
    hide();
    nextgamesettings* ptr_2;
    ptr_2 = new nextgamesettings(this);
    ptr_2->show();

}


void Profile::on_EditAccountData_clicked()
{
    Registering_State = CHANGE_INFO;
    close();
    CallBackChangeInfo();
}
void SetCallBackChangeInfo(void (*Copy_PtrCallBackInfo)(void))
{
    CallBackChangeInfo = Copy_PtrCallBackInfo;
}
