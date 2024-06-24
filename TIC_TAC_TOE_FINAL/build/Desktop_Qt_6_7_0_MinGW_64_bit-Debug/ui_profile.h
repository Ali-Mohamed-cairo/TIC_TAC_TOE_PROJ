/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QLabel *Header;
    QPushButton *ToWelcome;
    QGroupBox *groupBox;
    QListWidget *listWidget;
    QPushButton *EditAccountData;
    QPushButton *ToNextGame;

    void setupUi(QDialog *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName("Profile");
        Profile->resize(1007, 706);
        QFont font;
        font.setBold(true);
        Profile->setFont(font);
        Header = new QLabel(Profile);
        Header->setObjectName("Header");
        Header->setGeometry(QRect(120, 30, 431, 71));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        Header->setFont(font1);
        Header->setStyleSheet(QString::fromUtf8(".Header {\n"
"  background-color: #333; /* Dark background color */\n"
"  color: #fff; /* White text color */\n"
"  padding: 20px; /* Add some padding */\n"
"  text-align: center; /* Center align text */\n"
"  font-size: 24px; /* Larger font size */\n"
"  border-bottom: 2px solid #fff; /* White border at the bottom */\n"
"  box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1); /* Add shadow */\n"
"}\n"
"\n"
".Header:hover {\n"
"  background-color: #555; /* Darker background color on hover */\n"
"}"));
        ToWelcome = new QPushButton(Profile);
        ToWelcome->setObjectName("ToWelcome");
        ToWelcome->setGeometry(QRect(170, 550, 211, 71));
        ToWelcome->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        groupBox = new QGroupBox(Profile);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 130, 921, 391));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 30, 871, 321));
        EditAccountData = new QPushButton(Profile);
        EditAccountData->setObjectName("EditAccountData");
        EditAccountData->setGeometry(QRect(710, 40, 181, 51));
        EditAccountData->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        ToNextGame = new QPushButton(Profile);
        ToNextGame->setObjectName("ToNextGame");
        ToNextGame->setGeometry(QRect(540, 550, 211, 71));
        ToNextGame->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QDialog *Profile)
    {
        Profile->setWindowTitle(QCoreApplication::translate("Profile", "Dialog", nullptr));
        Header->setText(QCoreApplication::translate("Profile", "Welcome", nullptr));
        ToWelcome->setText(QCoreApplication::translate("Profile", "Return to wlecome window", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Profile", "History", nullptr));
        EditAccountData->setText(QCoreApplication::translate("Profile", "Edit account data", nullptr));
        ToNextGame->setText(QCoreApplication::translate("Profile", "To the next game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
