/********************************************************************************
** Form generated from reading UI file 'game_window.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_WINDOW_H
#define UI_GAME_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_game_window
{
public:
    QPushButton *RESET;
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

    void setupUi(QDialog *game_window)
    {
        if (game_window->objectName().isEmpty())
            game_window->setObjectName("game_window");
        game_window->resize(900, 584);
        RESET = new QPushButton(game_window);
        RESET->setObjectName("RESET");
        RESET->setGeometry(QRect(350, 430, 161, 51));
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
        gridLayoutWidget = new QWidget(game_window);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(230, 100, 391, 281));
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


        retranslateUi(game_window);

        QMetaObject::connectSlotsByName(game_window);
    } // setupUi

    void retranslateUi(QDialog *game_window)
    {
        game_window->setWindowTitle(QCoreApplication::translate("game_window", "Dialog", nullptr));
        RESET->setText(QCoreApplication::translate("game_window", "RESET", nullptr));
        PB_2_2->setText(QString());
        PB_2_1->setText(QString());
        PB_1_0->setText(QString());
        PB_0_2->setText(QString());
        PB_0_1->setText(QString());
        PB_0_0->setText(QString());
        PB_2_0->setText(QString());
        PB_1_1->setText(QString());
        PB_1_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class game_window: public Ui_game_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_WINDOW_H
