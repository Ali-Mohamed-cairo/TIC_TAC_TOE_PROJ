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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *PB_2_2;
    QPushButton *PB_2_1;
    QPushButton *PB_1_0;
    QPushButton *PB_0_2;
    QPushButton *PB_0_1;
    QPushButton *PB_0_0;
    QPushButton *PB_2_0;
    QPushButton *PB_1_1;
    QPushButton *PB_1_2;
    QPushButton *RESET;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(190, 100, 391, 281));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gridLayoutWidget->sizePolicy().hasHeightForWidth());
        gridLayoutWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        PB_2_2 = new QPushButton(gridLayoutWidget);
        PB_2_2->setObjectName("PB_2_2");
        sizePolicy.setHeightForWidth(PB_2_2->sizePolicy().hasHeightForWidth());
        PB_2_2->setSizePolicy(sizePolicy);
        PB_2_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
"    background-color: #81BEFC;\n"
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

        gridLayout->addWidget(PB_2_2, 2, 2, 1, 1);

        PB_2_1 = new QPushButton(gridLayoutWidget);
        PB_2_1->setObjectName("PB_2_1");
        sizePolicy.setHeightForWidth(PB_2_1->sizePolicy().hasHeightForWidth());
        PB_2_1->setSizePolicy(sizePolicy);
        PB_2_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
"    background-color: #81BEFC;\n"
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

        gridLayout->addWidget(PB_2_1, 2, 1, 1, 1);

        PB_1_0 = new QPushButton(gridLayoutWidget);
        PB_1_0->setObjectName("PB_1_0");
        sizePolicy.setHeightForWidth(PB_1_0->sizePolicy().hasHeightForWidth());
        PB_1_0->setSizePolicy(sizePolicy);
        PB_1_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
"    background-color: #81BEFC;\n"
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

        gridLayout->addWidget(PB_1_0, 1, 0, 1, 1);

        PB_0_2 = new QPushButton(gridLayoutWidget);
        PB_0_2->setObjectName("PB_0_2");
        sizePolicy.setHeightForWidth(PB_0_2->sizePolicy().hasHeightForWidth());
        PB_0_2->setSizePolicy(sizePolicy);
        PB_0_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
"    background-color: #81BEFC;\n"
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

        gridLayout->addWidget(PB_0_2, 0, 2, 1, 1);

        PB_0_1 = new QPushButton(gridLayoutWidget);
        PB_0_1->setObjectName("PB_0_1");
        sizePolicy.setHeightForWidth(PB_0_1->sizePolicy().hasHeightForWidth());
        PB_0_1->setSizePolicy(sizePolicy);
        PB_0_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
"    background-color: #81BEFC;\n"
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

        gridLayout->addWidget(PB_0_1, 0, 1, 1, 1);

        PB_0_0 = new QPushButton(gridLayoutWidget);
        PB_0_0->setObjectName("PB_0_0");
        sizePolicy.setHeightForWidth(PB_0_0->sizePolicy().hasHeightForWidth());
        PB_0_0->setSizePolicy(sizePolicy);
        PB_0_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
"    background-color: #81BEFC;\n"
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

        gridLayout->addWidget(PB_0_0, 0, 0, 1, 1);

        PB_2_0 = new QPushButton(gridLayoutWidget);
        PB_2_0->setObjectName("PB_2_0");
        sizePolicy.setHeightForWidth(PB_2_0->sizePolicy().hasHeightForWidth());
        PB_2_0->setSizePolicy(sizePolicy);
        PB_2_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
"    background-color: #81BEFC;\n"
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

        gridLayout->addWidget(PB_2_0, 2, 0, 1, 1);

        PB_1_1 = new QPushButton(gridLayoutWidget);
        PB_1_1->setObjectName("PB_1_1");
        sizePolicy.setHeightForWidth(PB_1_1->sizePolicy().hasHeightForWidth());
        PB_1_1->setSizePolicy(sizePolicy);
        PB_1_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
"    background-color: #81BEFC;\n"
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

        gridLayout->addWidget(PB_1_1, 1, 1, 1, 1);

        PB_1_2 = new QPushButton(gridLayoutWidget);
        PB_1_2->setObjectName("PB_1_2");
        sizePolicy.setHeightForWidth(PB_1_2->sizePolicy().hasHeightForWidth());
        PB_1_2->setSizePolicy(sizePolicy);
        PB_1_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
"    background-color: #81BEFC;\n"
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

        gridLayout->addWidget(PB_1_2, 1, 2, 1, 1);

        RESET = new QPushButton(centralwidget);
        RESET->setObjectName("RESET");
        RESET->setGeometry(QRect(310, 430, 161, 51));
        RESET->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        PB_2_2->setText(QString());
        PB_2_1->setText(QString());
        PB_1_0->setText(QString());
        PB_0_2->setText(QString());
        PB_0_1->setText(QString());
        PB_0_0->setText(QString());
        PB_2_0->setText(QString());
        PB_1_1->setText(QString());
        PB_1_2->setText(QString());
        RESET->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
