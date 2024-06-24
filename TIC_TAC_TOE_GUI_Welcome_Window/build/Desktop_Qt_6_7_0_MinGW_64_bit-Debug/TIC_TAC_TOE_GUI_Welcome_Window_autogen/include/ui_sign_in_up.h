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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Sign_In_Up
{
public:
    QLabel *label_2;
    QPushButton *PB_Login;
    QLabel *Username;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *Sign_In_Up)
    {
        if (Sign_In_Up->objectName().isEmpty())
            Sign_In_Up->setObjectName("Sign_In_Up");
        Sign_In_Up->resize(786, 475);
        label_2 = new QLabel(Sign_In_Up);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 180, 111, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #7566D5;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    font-family: Arial, sans-serif; /* Example font family */\n"
"	 qproperty-alignment: AlignCenter;\n"
"}\n"
""));
        PB_Login = new QPushButton(Sign_In_Up);
        PB_Login->setObjectName("PB_Login");
        PB_Login->setGeometry(QRect(320, 240, 131, 61));
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
        Username = new QLabel(Sign_In_Up);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(160, 150, 101, 31));
        Username->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #7566D5;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    font-family: Arial, sans-serif; /* Example font family */\n"
"	 qproperty-alignment: AlignCenter;\n"
"}\n"
""));
        lineEdit = new QLineEdit(Sign_In_Up);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(280, 150, 271, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: blue; /* Text color */\n"
"    font: 14pt Arial; /* Font family, size */\n"
"    font-weight: bold; /* Font weight */\n"
"    background-color: white; /* Background color of the text box */\n"
"    border: 1px solid black; /* Border around the text box */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    padding: 5px; /* Padding inside the text box */\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(Sign_In_Up);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(280, 190, 271, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    color: blue; /* Text color */\n"
"    font: 14pt Arial; /* Font family, size */\n"
"    font-weight: bold; /* Font weight */\n"
"    background-color: white; /* Background color of the text box */\n"
"    border: 1px solid black; /* Border around the text box */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    padding: 5px; /* Padding inside the text box */\n"
"}\n"
""));

        retranslateUi(Sign_In_Up);

        QMetaObject::connectSlotsByName(Sign_In_Up);
    } // setupUi

    void retranslateUi(QDialog *Sign_In_Up)
    {
        Sign_In_Up->setWindowTitle(QCoreApplication::translate("Sign_In_Up", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Sign_In_Up", "Password :", nullptr));
        PB_Login->setText(QCoreApplication::translate("Sign_In_Up", "Log in!", nullptr));
        Username->setText(QCoreApplication::translate("Sign_In_Up", "Username  :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sign_In_Up: public Ui_Sign_In_Up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_IN_UP_H
