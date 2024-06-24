#ifndef GAME_WINDOW_H
#define GAME_WINDOW_H

#include <QDialog>

#include "HandlePB.h"


namespace Ui {
class game_window;
}

class game_window : public QDialog
{
    Q_OBJECT

public:
    explicit game_window(QWidget *parent = nullptr);
    ~game_window();
    void ResetGameScreen();

private:
    Ui::game_window *ui;
    void on_PB_1_1_clicked();

    void on_PB_0_0_clicked();

    void on_PB_0_1_clicked();

    void on_PB_0_2_clicked();

    void on_PB_1_0_clicked();

    void on_PB_1_2_clicked();

    void on_PB_2_0_clicked();

    void on_PB_2_1_clicked();

    void on_PB_2_2_clicked();

    void on_RESET_clicked();
};

#endif // GAME_WINDOW_H
