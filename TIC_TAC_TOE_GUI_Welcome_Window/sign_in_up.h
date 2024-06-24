#ifndef SIGN_IN_UP_H
#define SIGN_IN_UP_H

#include <QDialog>
#include <QString>
#include <QMessageBox>
#include "mainwindow.h"
#include "profile.h"
#include "Player_LinkedList.h"
#include "History_LinkedList.h"

#define SIGN_IN      0
#define SIGN_UP      1

extern bool Registering_State;
extern QString user_name;
extern QString pass_word;
extern playerlinkedlist horiz;

bool checkaccount();


namespace Ui {
class Sign_In_Up;
}

class Sign_In_Up : public QDialog
{
    Q_OBJECT

public:
    explicit Sign_In_Up(QWidget *parent = nullptr);
    ~Sign_In_Up();

private slots:
    void on_pushButton_clicked();

    void on_PB_Login_clicked();


    void on_textEdit_textChanged();

    void on_textEdit_2_textChanged();

private:
    Ui::Sign_In_Up *ui;
};

#endif // SIGN_IN_UP_H
