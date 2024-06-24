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
    QPushButton *PB_Login;
    QLabel *Username;
    QLabel *label_2;
    QTextEdit *username;
    QTextEdit *password;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(818, 609);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #32219F;\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
"    color: white;\n"
"    border: 2px solid black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: lightblue;\n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        PB_Login = new QPushButton(centralwidget);
        PB_Login->setObjectName("PB_Login");
        PB_Login->setGeometry(QRect(340, 300, 131, 61));
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
        Username = new QLabel(centralwidget);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(170, 210, 101, 31));
        Username->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #7566D5;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    font-family: Arial, sans-serif; /* Example font family */\n"
"	 qproperty-alignment: AlignCenter;\n"
"}\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 240, 111, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #7566D5;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    font-family: Arial, sans-serif; /* Example font family */\n"
"	 qproperty-alignment: AlignCenter;\n"
"}\n"
""));
        username = new QTextEdit(centralwidget);
        username->setObjectName("username");
        username->setGeometry(QRect(280, 210, 301, 31));
        username->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: blue; /* Text color */\n"
"    font: 14pt Arial; /* Font family, size */\n"
"    font-weight: bold; /* Font weight */\n"
"    background-color: white; /* Background color of the text box */\n"
"    border: 1px solid black; /* Border around the text box */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    padding: 5px; /* Padding inside the text box */\n"
"}\n"
""));
        password = new QTextEdit(centralwidget);
        password->setObjectName("password");
        password->setGeometry(QRect(280, 250, 301, 31));
        password->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: blue; /* Text color */\n"
"    font: 14pt Arial; /* Font family, size */\n"
"    font-weight: bold; /* Font weight */\n"
"    background-color: white; /* Background color of the text box */\n"
"    border: 1px solid black; /* Border around the text box */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    padding: 5px; /* Padding inside the text box */\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 818, 26));
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
        PB_Login->setText(QCoreApplication::translate("MainWindow", "Log in!", nullptr));
        Username->setText(QCoreApplication::translate("MainWindow", "Username  :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
