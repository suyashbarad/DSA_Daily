
#include <iostream>
#include <algorithm>
using namespace std;

char board[3][3] = {
    {'-', '-', '-'},
    {'-', '-', '-'},
    {'-', '-', '-'}
};

char player = 'X';
char computer = 'O';

void printBoard() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
}

bool checkWin(char p) {
    for(int i = 0; i < 3; i++) {
        if(board[i][0] == p && board[i][1] == p &&
           board[i][2] == p)
            return true;

        if(board[0][i] == p && board[1][i] == p &&
           board[2][i] == p)
            return true;
    }

    if(board[0][0] == p && board[1][1] == p &&
       board[2][2] == p)
        return true;

    if(board[0][2] == p && board[1][1] == p &&
       board[2][0] == p)
        return true;

    return false;
}

bool isFull() {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(board[i][j] == '-')
                return false;

    return true;
}

int minimax(bool isMax) {
    if(checkWin(computer))
        return 10;

    if(checkWin(player))
        return -10;

    if(isFull())
        return 0;

    if(isMax) {
        int best = -1000;

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(board[i][j] == '-') {
                    board[i][j] = computer;

                    best = max(best, minimax(false));

                    board[i][j] = '-';
                }
            }
        }
        return best;
    }
    else {
        int best = 1000;

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(board[i][j] == '-') {
                    board[i][j] = player;

                    best = min(best, minimax(true));

                    board[i][j] = '-';
                }
            }
        }
        return best;
    }
}

void bestMove() {
    int best = -1000;
    int row = -1, col = -1;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(board[i][j] == '-') {
                board[i][j] = computer;

                int score = minimax(false);

                board[i][j] = '-';

                if(score > best) {
                    best = score;
                    row = i;
                    col = j;
                }
            }
        }
    }

    if(row != -1)
        board[row][col] = computer;
}

int main() {
    int row, col;

    while(true) {
        printBoard();

        cout << "Enter row and column (0-2): ";
        cin >> row >> col;

        if(row < 0 || row > 2 || col < 0 || col > 2 ||
           board[row][col] != '-') {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        board[row][col] = player;

        if(checkWin(player)) {
            printBoard();
            cout << "You win!\n";
            break;
        }

        if(isFull()) {
            printBoard();
            cout << "Draw!\n";
            break;
        }

        bestMove();

        if(checkWin(computer)) {
            printBoard();
            cout << "Computer wins!\n";
            break;
        }

        if(isFull()) {
            printBoard();
            cout << "Draw!\n";
            break;
        }
    }

    return 0;
}
