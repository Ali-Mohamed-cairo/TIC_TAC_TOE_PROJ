#include "sign_in_up.h"
#include "ui_sign_in_up.h"

bool Registering_State = SIGN_IN;
QString user_name = "\0";
QString pass_word = "\0";
playerlinkedlist horiz;


Sign_In_Up::Sign_In_Up(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Sign_In_Up)
{
    ui->setupUi(this);
}

Sign_In_Up::~Sign_In_Up()
{
    delete ui;
}

void Sign_In_Up::on_pushButton_clicked()
{
    hide();
    MainWindow* ptr_3;
    ptr_3 = new MainWindow(this);
    ptr_3->show();
}

void Sign_In_Up::on_PB_Login_clicked()
{
    if(checkaccount()){
        hide();
        Profile* ptr_4;
        ptr_4 = new Profile(this);
        ptr_4->show();
    }
    else
        QMessageBox::warning(this, "Login Fault", "Wrong password or username");
}


void Sign_In_Up::on_textEdit_textChanged()
{
   user_name = ui->textEdit->toPlainText();
}


void Sign_In_Up::on_textEdit_2_textChanged()
{
    pass_word = ui->textEdit_2->toPlainText();
}


bool checkaccount(){
    if(Registering_State == SIGN_IN){
        return (horiz.isfound(user_name, pass_word));
    }
    else if(Registering_State == SIGN_UP){
        if(horiz.isfound(user_name, pass_word)){
            QMessageBox::warning(&(Sign_In_Up), "Sign up Fault", "The username and password are already taken");
        }
        else{
            horiz.push_back(user_name, pass_word);

        }
    }
}






