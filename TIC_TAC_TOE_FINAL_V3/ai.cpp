#include "ai.h"
#include "ui_game_window.h"

#include <QDebug>

void (*CallBackAIGame)(void);

ai::ai(QWidget *parent)
    : game_window(parent)
    , ui(new Ui::game_window)
{
    ui->setupUi(this);
    initializeBoard();
    printBoard();
    connect(ui->RESET, &QPushButton::clicked, this, &ai::resetGame);
    connect(ui->Return_Prof, &QPushButton::clicked, this, CallBackAIGame);

    // Start the game with player 'X'
    currentPlayer = "X";
}

ai::~ai()
{
    delete ui;
}

void ai::initializeBoard()
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cells[i][j] = new QPushButton("", this);
            cells[i][j]->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
            cells[i][j]->setProperty("row", i);
            cells[i][j]->setProperty("col", j);
            ui->gridLayout->addWidget(cells[i][j], i, j);
            connect(cells[i][j], &QPushButton::clicked, this, &ai::cellClicked);
            board[i][j] = ' ';
        }
    }
}

void ai::printBoard()
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cells[i][j]->setText(board[i][j] == ' ' ? "" : QString(board[i][j]));
        }
    }
}

void ai::cellClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    int row = clickedButton->property("row").toInt();
    int col = clickedButton->property("col").toInt();

    if (board[row][col] == ' ' && !checkWin("X") && !checkWin("O") && !isBoardFull()) {
        board[row][col] = currentPlayer == "X" ? 'X' : 'O';
        printBoard();

        if (checkWin(currentPlayer)) {
            QMessageBox::information(this, "Game Over", currentPlayer + " wins!");
            resetGame();
        } else if (isBoardFull()) {
            QMessageBox::information(this, "Game Over", "It's a draw!");
            resetGame();
        } else {
            currentPlayer = currentPlayer == "X" ? "O" : "X";
            // After player's move, check if it's AI's turn
            if (currentPlayer == "O") {
                QTimer::singleShot(500, this, &ai::makeAIMove); // Delay AI move for 500ms (optional)
            }
        }
    }
}

void ai::resetGame()
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = ' ';
        }
    }
    currentPlayer = "X";
    printBoard();
}

bool ai::isBoardFull()
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

bool ai::checkWin(QString player)
{
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player.at(0) && board[i][1] == player.at(0) && board[i][2] == player.at(0)) ||
            (board[0][i] == player.at(0) && board[1][i] == player.at(0) && board[2][i] == player.at(0))) {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == player.at(0) && board[1][1] == player.at(0) && board[2][2] == player.at(0)) ||
        (board[0][2] == player.at(0) && board[1][1] == player.at(0) && board[2][0] == player.at(0))) {
        return true;
    }
    return false;
}

int ai::minimax(char board[3][3], int depth, bool isMaximizing)
{
    int score = evaluate(board);

    // If AI wins the game
    if (score == 10) {
        return score;
    }
    // If player wins the game
    if (score == -10) {
        return score;
    }
    // If there are no more moves and no winner, it's a draw
    if (isBoardFull()) {
        return 0;
    }

    // Maximizing player (AI)
    if (isMaximizing) {
        int best = -1000;

        // Traverse all cells, evaluate minimax function for all empty cells
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    // Make the move
                    board[i][j] = 'O';

                    // Call minimax recursively and choose the maximum value
                    best = std::max(best, minimax(board, depth + 1, !isMaximizing));

                    // Undo the move
                    board[i][j] = ' ';
                }
            }
        }
        return best;
    }
    // Minimizing player (Player)
    else {
        int best = 1000;

        // Traverse all cells, evaluate minimax function for all empty cells
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    // Make the move
                    board[i][j] = 'X';

                    // Call minimax recursively and choose the minimum value
                    best = std::min(best, minimax(board, depth + 1, !isMaximizing));

                    // Undo the move
                    board[i][j] = ' ';
                }
            }
        }
        return best;
    }
}

int ai::evaluate(char board[3][3])
{
    // Check rows and columns for a win
    for (int row = 0; row < 3; row++) {
        if (board[row][0] == board[row][1] && board[row][1] == board[row][2]) {
            if (board[row][0] == 'O') return 10; // AI wins
            else if (board[row][0] == 'X') return -10; // Player wins
        }
        if (board[0][row] == board[1][row] && board[1][row] == board[2][row]) {
            if (board[0][row] == 'O') return 10; // AI wins
            else if (board[0][row] == 'X') return -10; // Player wins
        }
    }

    // Check diagonals for a win
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        if (board[0][0] == 'O') return 10; // AI wins
        else if (board[0][0] == 'X') return -10; // Player wins
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        if (board[0][2] == 'O') return 10; // AI wins
        else if (board[0][2] == 'X') return -10; // Player wins
    }

    // If no one wins
    return 0;
}

void ai::makeAIMove()
{
    int bestMove = -1000;
    int bestRow = -1;
    int bestCol = -1;

    // Traverse all cells, evaluate minimax function for all empty cells and choose the best move
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = 'O'; // AI's move

                int moveValue = minimax(board, 0, false);

                // Undo the move
                board[i][j] = ' ';

                // If current move is better than the best move, update bestMove
                if (moveValue > bestMove) {
                    bestMove = moveValue;
                    bestRow = i;
                    bestCol = j;
                }
            }
        }
    }

    // Make the best move
    board[bestRow][bestCol] = 'O';
    printBoard();

    // Check game status after AI's move
    if (checkWin("O")) {
        QMessageBox::information(this, "Game Over", "AI wins!");
        resetGame();
    } else if (isBoardFull()) {
        QMessageBox::information(this, "Game Over", "It's a draw!");
        resetGame();
    } else {
        currentPlayer = "X"; // Switch back to player's turn
    }
}
void SetCallBackAIGame(void (*Copy_ptr)(void)){
    CallBackAIGame = Copy_ptr;
}
