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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sign_In_Up
{
public:
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *Username;
    QLabel *label_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *PB_Login;
    QPushButton *pushButton;

    void setupUi(QDialog *Sign_In_Up)
    {
        if (Sign_In_Up->objectName().isEmpty())
            Sign_In_Up->setObjectName("Sign_In_Up");
        Sign_In_Up->resize(970, 544);
        layoutWidget = new QWidget(Sign_In_Up);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(230, 150, 481, 91));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        Username = new QLabel(layoutWidget);
        Username->setObjectName("Username");
        Username->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #7566D5;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    font-family: Arial, sans-serif; /* Example font family */\n"
"	 qproperty-alignment: AlignCenter;\n"
"}\n"
""));

        formLayout->setWidget(0, QFormLayout::LabelRole, Username);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #7566D5;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    font-family: Arial, sans-serif; /* Example font family */\n"
"	 qproperty-alignment: AlignCenter;\n"
"}\n"
""));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::FieldRole, textEdit);

        textEdit_2 = new QTextEdit(layoutWidget);
        textEdit_2->setObjectName("textEdit_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, textEdit_2);

        layoutWidget1 = new QWidget(Sign_In_Up);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(330, 260, 271, 171));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        PB_Login = new QPushButton(layoutWidget1);
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

        pushButton = new QPushButton(layoutWidget1);
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


        retranslateUi(Sign_In_Up);

        QMetaObject::connectSlotsByName(Sign_In_Up);
    } // setupUi

    void retranslateUi(QDialog *Sign_In_Up)
    {
        Sign_In_Up->setWindowTitle(QCoreApplication::translate("Sign_In_Up", "Dialog", nullptr));
        Username->setText(QCoreApplication::translate("Sign_In_Up", "Username  :", nullptr));
        label_2->setText(QCoreApplication::translate("Sign_In_Up", "Password  :", nullptr));
        PB_Login->setText(QCoreApplication::translate("Sign_In_Up", "Log in!", nullptr));
        pushButton->setText(QCoreApplication::translate("Sign_In_Up", "Return Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sign_In_Up: public Ui_Sign_In_Up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_IN_UP_H
