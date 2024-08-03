#include <iostream>
#include <vector>

using namespace std;

class TicTacToe {
public:
    TicTacToe() : board(3, vector<char>(3, ' ')), currentPlayer('X') {}

    void play() {
        while (true) {
            printBoard();
            playerMove();
            if (checkWin()) {
                printBoard();
                cout << "Player " << currentPlayer << " wins!" << endl;
                break;
            }
            if (checkDraw()) {
                printBoard();
                cout << "It's a draw!" << endl;
                break;
            }
            switchPlayer();
        }
    }

private:
    vector<vector<char>> board;
    char currentPlayer;

    void printBoard() {
        cout << "  0 1 2" << endl;
        for (int i = 0; i < 3; ++i) {
            cout << i << " ";
            for (int j = 0; j < 3; ++j) {
                cout << board[i][j] << ' ';
            }
            cout << endl;
        }
    }

    void playerMove() {
        int row, col;
        while (true) {
            cout << "Player " << currentPlayer << ", enter your move (row and column): ";
            cin >> row >> col;
            if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
                board[row][col] = currentPlayer;
                break;
            } else {
                cout << "This move is not valid. Try again." << endl;
            }
        }
    }

    void switchPlayer() {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    bool checkWin() {
        // Check rows and columns
        for (int i = 0; i < 3; ++i) {
            if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||
                (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)) {
                return true;
            }
        }
        // Check diagonals
        if ((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
            (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)) {
            return true;
        }
        return false;
    }

    bool checkDraw() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i][j] == ' ') {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    TicTacToe game;
    game.play();
    return 0;
}
