#ifndef HANDLEPB_H
#define HANDLEPB_H

#include <QString>
#include <QVector>
#include <QMessageBox>


extern int  Entered_Row;
extern int  Entered_Col;
extern char currentPlayer;
extern int  movesLeft;
extern QVector<QVector<char>> board;


// Function to check if a player has won
bool checkWin(const QVector<QVector<char>> &board, char player);

void ResetGame();

void OnClick();

void Set_CallBack(void (*Copy_Ptr)());


#endif // HANDLEPB_H
