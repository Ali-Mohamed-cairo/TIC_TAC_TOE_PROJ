#include "HandlePB.h"



int Entered_Row = 0;
int Entered_Col = 0;
char currentPlayer = 'X'; // Player X starts
int movesLeft = 9;
QVector<QVector<char>> board(3, QVector<char>(3, '.'));

bool checkWin(const QVector<QVector<char>>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
    return false;
}

void ResetGame(){
    movesLeft = 9;
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            board[i][j] = '.';
        }
    }
}

void OnClick(){
    // Main game loop
    if(movesLeft > 0) {
        // Get the row and column for the next move
        int row, col;
        row = Entered_Row;
        col = Entered_Col;

        // Check if the move is valid
        if (row < 0 || row > 2 || col < 0 || col > 2) {
            QMessageBox::warning(nullptr, "Warning", "Invalid move");
        }

        // Make the move
        board[row][col] = currentPlayer;

        // Check if the current player has won
        if (checkWin(board, currentPlayer)) {
            for(int i = 0; i < 3; ++i){
                for(int j = 0; j < 3; ++j){
                    board[i][j] = '.';
                }
            }
            if(currentPlayer == 'X')
                QMessageBox::about(nullptr, "Result of the game", "Horay, player X have just win :>");
            else
                QMessageBox::about(nullptr, "Result of the game", "Horay, player O have just win :>");
            QMessageBox::StandardButton reply = QMessageBox::information(nullptr, "Next step", "Do you want to replay or close",
                                                                         QMessageBox::Ok, QMessageBox::Close);
            if(reply == QMessageBox::Close){
                //Branch to profile window
            }

        }
        // Switch to the other player
        else{
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }

    }
    // If no one has won, it's a draw
    if (movesLeft == 0) {
        QMessageBox::about(nullptr, "Result of the game", "It's a draw");
    }
}

