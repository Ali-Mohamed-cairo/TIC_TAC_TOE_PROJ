/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Username;
    QTextEdit *Username_En_Text;
    QLabel *Email;
    QTextEdit *Email_En;
    QTextEdit *Password_En;
    QLabel *Email_2;
    QTextEdit *Pass_Conf_En;
    QLabel *Email_3;
    QPushButton *Sign_Up_PB;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Username = new QLabel(centralwidget);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(90, 90, 121, 31));
        Username->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #7566D5;; /* Text color for the label */\n"
"    font-size: 20px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    padding: 5px; /* Padding for the label */\n"
"    background-color: #f0f0f0;\n"
"}\n"
""));
        Username_En_Text = new QTextEdit(centralwidget);
        Username_En_Text->setObjectName("Username_En_Text");
        Username_En_Text->setGeometry(QRect(230, 80, 461, 51));
        Username_En_Text->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: blue; /* Text color */\n"
"    font: 14pt Arial; /* Font family, size */\n"
"    font-weight: bold; /* Font weight */\n"
"    background-color: white; /* Background color of the text box */\n"
"    border: 1px solid black; /* Border around the text box */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    padding: 5px; /* Padding inside the text box */\n"
"}\n"
"\n"
"QLineEdit:focus, QLineEdit:hover {\n"
"    border-width: 4px; /* Increase border width on hover and focus */\n"
"    border-color: #007bff; /* Border color on hover and focus */\n"
"}\n"
""));
        Email = new QLabel(centralwidget);
        Email->setObjectName("Email");
        Email->setGeometry(QRect(110, 170, 121, 31));
        Email->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #7566D5;; /* Text color for the label */\n"
"    font-size: 20px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    padding: 5px; /* Padding for the label */\n"
"    background-color: #f0f0f0;\n"
"}\n"
""));
        Email_En = new QTextEdit(centralwidget);
        Email_En->setObjectName("Email_En");
        Email_En->setGeometry(QRect(230, 161, 461, 51));
        Email_En->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: blue; /* Text color */\n"
"    font: 14pt Arial; /* Font family, size */\n"
"    font-weight: bold; /* Font weight */\n"
"    background-color: white; /* Background color of the text box */\n"
"    border: 1px solid black; /* Border around the text box */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    padding: 5px; /* Padding inside the text box */\n"
"}\n"
"\n"
"QLineEdit:focus, QLineEdit:hover {\n"
"    border-width: 4px; /* Increase border width on hover and focus */\n"
"    border-color: #007bff; /* Border color on hover and focus */\n"
"}\n"
""));
        Password_En = new QTextEdit(centralwidget);
        Password_En->setObjectName("Password_En");
        Password_En->setGeometry(QRect(230, 230, 461, 51));
        Password_En->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: blue; /* Text color */\n"
"    font: 14pt Arial; /* Font family, size */\n"
"    font-weight: bold; /* Font weight */\n"
"    background-color: white; /* Background color of the text box */\n"
"    border: 1px solid black; /* Border around the text box */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    padding: 5px; /* Padding inside the text box */\n"
"}\n"
"\n"
"QLineEdit:focus, QLineEdit:hover {\n"
"    border-width: 4px; /* Increase border width on hover and focus */\n"
"    border-color: #007bff; /* Border color on hover and focus */\n"
"}\n"
""));
        Email_2 = new QLabel(centralwidget);
        Email_2->setObjectName("Email_2");
        Email_2->setGeometry(QRect(100, 240, 121, 32));
        Email_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #7566D5;; /* Text color for the label */\n"
"    font-size: 20px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    padding: 5px; /* Padding for the label */\n"
"    background-color: #f0f0f0;\n"
"}\n"
""));
        Pass_Conf_En = new QTextEdit(centralwidget);
        Pass_Conf_En->setObjectName("Pass_Conf_En");
        Pass_Conf_En->setGeometry(QRect(230, 310, 461, 51));
        Pass_Conf_En->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: blue; /* Text color */\n"
"    font: 14pt Arial; /* Font family, size */\n"
"    font-weight: bold; /* Font weight */\n"
"    background-color: white; /* Background color of the text box */\n"
"    border: 1px solid black; /* Border around the text box */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    padding: 5px; /* Padding inside the text box */\n"
"}\n"
"\n"
"QLineEdit:focus, QLineEdit:hover {\n"
"    border-width: 4px; /* Increase border width on hover and focus */\n"
"    border-color: #007bff; /* Border color on hover and focus */\n"
"}\n"
""));
        Email_3 = new QLabel(centralwidget);
        Email_3->setObjectName("Email_3");
        Email_3->setGeometry(QRect(10, 310, 211, 41));
        Email_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #7566D5;; /* Text color for the label */\n"
"    font-size: 20px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    padding: 5px; /* Padding for the label */\n"
"    background-color: #f0f0f0;\n"
"}\n"
""));
        Sign_Up_PB = new QPushButton(centralwidget);
        Sign_Up_PB->setObjectName("Sign_Up_PB");
        Sign_Up_PB->setGeometry(QRect(260, 400, 311, 71));
        Sign_Up_PB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
"    background-color: #32219F;\n"
"    color: white;\n"
"    border: 2px solid black;\n"
"    border-radius: 12px;\n"
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
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Username->setText(QCoreApplication::translate("MainWindow", "Username :", nullptr));
        Email->setText(QCoreApplication::translate("MainWindow", "Email      :", nullptr));
        Email_2->setText(QCoreApplication::translate("MainWindow", "Password :", nullptr));
        Email_3->setText(QCoreApplication::translate("MainWindow", "Confirm Password  :", nullptr));
        Sign_Up_PB->setText(QCoreApplication::translate("MainWindow", "Sign Up! Welcome :)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
