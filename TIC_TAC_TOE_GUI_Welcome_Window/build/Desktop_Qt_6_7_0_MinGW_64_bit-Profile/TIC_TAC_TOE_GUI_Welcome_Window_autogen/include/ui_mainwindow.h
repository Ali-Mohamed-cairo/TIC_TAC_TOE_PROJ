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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QPushButton *Sign_Up_PB;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QPushButton *Sign_In_PB;
    QPushButton *Quit_PB;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(".MainWindow {\n"
"    background-image:url(D:/TIC_TAC_TOE_PROJ/TIC_TAC_TOE_GUI_Welcome_Window/CSS/BG2.jpg);\n"
"    opacity: 0.5; /* Adjust the opacity value as needed (0.0 to 1.0) */\n"
"    /* Other background properties */\n"
"    background-size: cover; /* Ensure the background image covers the entire element */\n"
"    background-position: center; /* Center the background image */\n"
"    /* Add more background properties as needed */\n"
"	background-repeat: no-repeat;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 60, 471, 131));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #ffffff; /* Text color */\n"
"    font-size: 75px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"	border-radius : 20px;\n"
"    padding: 20px; /* Padding */\n"
"    background-color: #7566D5; /* Background color */\n"
"    qproperty-alignment: AlignCenter; /* Text alignment */\n"
"}\n"
"\n"
""));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(410, 370, 351, 91));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #f0f0f0; /* Background color */\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #ffffff; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the label */\n"
"    padding: 10px; /* Padding */\n"
"    background-color:  #7566D5; /* Background color */\n"
"	qproperty-alignment: AlignCenter; /* Text alignment */\n"
"}\n"
"\n"
"QPushButton {\n"
"    color: white; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the button */\n"
"    padding: 10px 20px; /* Padding */\n"
"    background-color: #007bff; /* Button background color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Hover background color */\n"
"}\n"
""));

        verticalLayout_2->addWidget(label_3);

        Sign_Up_PB = new QPushButton(layoutWidget);
        Sign_Up_PB->setObjectName("Sign_Up_PB");

        verticalLayout_2->addWidget(Sign_Up_PB);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 370, 361, 89));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #f0f0f0; /* Background color */\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #ffffff; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the label */\n"
"    padding: 10px; /* Padding */\n"
"    background-color:  #7566D5; /* Background color */\n"
"qproperty-alignment: AlignCenter; /* Text alignment */\n"
"}\n"
"\n"
"QPushButton {\n"
"    color: white; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the button */\n"
"    padding: 10px 20px; /* Padding */\n"
"    background-color: #007bff; /* Button background color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Hover background color */\n"
"}\n"
""));

        verticalLayout->addWidget(label_2);

        Sign_In_PB = new QPushButton(layoutWidget1);
        Sign_In_PB->setObjectName("Sign_In_PB");

        verticalLayout->addWidget(Sign_In_PB);

        Quit_PB = new QPushButton(centralwidget);
        Quit_PB->setObjectName("Quit_PB");
        Quit_PB->setGeometry(QRect(320, 480, 141, 51));
        Quit_PB->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #f0f0f0; /* Background color */\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #ffffff; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the label */\n"
"    padding: 10px; /* Padding */\n"
"    background-color:  #7566D5; /* Background color */\n"
"	qproperty-alignment: AlignCenter; /* Text alignment */\n"
"}\n"
"\n"
"QPushButton {\n"
"    color: white; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the button */\n"
"    padding: 10px 20px; /* Padding */\n"
"    background-color: #007bff; /* Button background color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Hover background color */\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(Quit_PB, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome!!!!", nullptr));
        layoutWidget->setStyleSheet(QCoreApplication::translate("MainWindow", "QWidget {\n"
"    background-color: #f0f0f0; /* Background color */\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #ffffff; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the label */\n"
"    padding: 10px; /* Padding */\n"
"    background-color:  #7566D5; /* Background color */\n"
"	qproperty-alignment: AlignCenter; /* Text alignment */\n"
"}\n"
"\n"
"QPushButton {\n"
"    color: white; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the button */\n"
"    padding: 10px 20px; /* Padding */\n"
"    background-color: #007bff; /* Button background color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Hover background color */\n"
"}\n"
"", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "If it's your first time to play :", nullptr));
        Sign_Up_PB->setStyleSheet(QCoreApplication::translate("MainWindow", "QWidget {\n"
"    background-color: #f0f0f0; /* Background color */\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #ffffff; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the label */\n"
"    padding: 10px; /* Padding */\n"
"    background-color:  #7566D5; /* Background color */\n"
"	qproperty-alignment: AlignCenter; /* Text alignment */\n"
"}\n"
"\n"
"QPushButton {\n"
"    color: white; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the button */\n"
"    padding: 10px 20px; /* Padding */\n"
"    background-color: #007bff; /* Button background color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Hover background color */\n"
"}\n"
"", nullptr));
        Sign_Up_PB->setText(QCoreApplication::translate("MainWindow", "Sign Up!", nullptr));
        layoutWidget1->setStyleSheet(QCoreApplication::translate("MainWindow", "QWidget {\n"
"    background-color: #f0f0f0; /* Background color */\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #ffffff; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the label */\n"
"    padding: 10px; /* Padding */\n"
"    background-color:  #7566D5; /* Background color */\n"
"qproperty-alignment: AlignCenter; /* Text alignment */\n"
"}\n"
"\n"
"QPushButton {\n"
"    color: white; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the button */\n"
"    padding: 10px 20px; /* Padding */\n"
"    background-color: #007bff; /* Button background color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Hover background color */\n"
"}\n"
"", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "If you have a username :", nullptr));
        Sign_In_PB->setStyleSheet(QCoreApplication::translate("MainWindow", "QWidget {\n"
"    background-color: #f0f0f0; /* Background color */\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #ffffff; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the label */\n"
"    padding: 10px; /* Padding */\n"
"    background-color:  #7566D5; /* Background color */\n"
"qproperty-alignment: AlignCenter; /* Text alignment */\n"
"}\n"
"\n"
"QPushButton {\n"
"    color: white; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the button */\n"
"    padding: 10px 20px; /* Padding */\n"
"    background-color: #007bff; /* Button background color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Hover background color */\n"
"}\n"
"", nullptr));
        Sign_In_PB->setText(QCoreApplication::translate("MainWindow", "Sign in :)", nullptr));
        Quit_PB->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
