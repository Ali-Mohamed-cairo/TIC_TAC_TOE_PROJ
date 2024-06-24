/********************************************************************************
** Form generated from reading UI file 'sign_in_up.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_IN_UP_H
#define UI_SIGN_IN_UP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sign_In_Up
{
public:
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *PB_Login;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *Username;
    QLineEdit *UsernameInput;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *passwordinput;

    void setupUi(QDialog *Sign_In_Up)
    {
        if (Sign_In_Up->objectName().isEmpty())
            Sign_In_Up->setObjectName("Sign_In_Up");
        Sign_In_Up->resize(687, 531);
        layoutWidget_2 = new QWidget(Sign_In_Up);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(200, 290, 271, 171));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        PB_Login = new QPushButton(layoutWidget_2);
        PB_Login->setObjectName("PB_Login");
        PB_Login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #32219F;\n"
"    color: white;\n"
"    border: 2px solid black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: lightblue;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: navy;\n"
"    color: lightblue;\n"
"}"));

        verticalLayout->addWidget(PB_Login);

        pushButton = new QPushButton(layoutWidget_2);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #32219F;\n"
"    color: white;\n"
"    border: 2px solid black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: lightblue;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: navy;\n"
"    color: lightblue;\n"
"}"));

        verticalLayout->addWidget(pushButton);

        widget = new QWidget(Sign_In_Up);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(150, 130, 351, 141));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Username = new QLabel(widget);
        Username->setObjectName("Username");
        Username->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #7566D5;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    font-family: Arial, sans-serif; /* Example font family */\n"
"	 qproperty-alignment: AlignCenter;\n"
"}\n"
""));

        horizontalLayout->addWidget(Username);

        UsernameInput = new QLineEdit(widget);
        UsernameInput->setObjectName("UsernameInput");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        UsernameInput->setFont(font);

        horizontalLayout->addWidget(UsernameInput);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #7566D5;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    font-family: Arial, sans-serif; /* Example font family */\n"
"	 qproperty-alignment: AlignCenter;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(label_2);

        passwordinput = new QLineEdit(widget);
        passwordinput->setObjectName("passwordinput");
        passwordinput->setFont(font);
        passwordinput->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordinput);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(Sign_In_Up);

        QMetaObject::connectSlotsByName(Sign_In_Up);
    } // setupUi

    void retranslateUi(QDialog *Sign_In_Up)
    {
        Sign_In_Up->setWindowTitle(QCoreApplication::translate("Sign_In_Up", "Dialog", nullptr));
        PB_Login->setText(QCoreApplication::translate("Sign_In_Up", "Log in!", nullptr));
        pushButton->setText(QCoreApplication::translate("Sign_In_Up", "Return To Welcome Window", nullptr));
        Username->setText(QCoreApplication::translate("Sign_In_Up", "Username  :", nullptr));
        label_2->setText(QCoreApplication::translate("Sign_In_Up", "Password  :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sign_In_Up: public Ui_Sign_In_Up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_IN_UP_H
