#include<iostream>
using namespace std;

int main(){
    int n = 3;
    char board[3][3];
    cout<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            board[i][j] = '-';
            cout<<" - ";
        }
        cout<<endl;
    }

    cout<<endl;
    int r, c;
    for(int i = 0, j = 0; i < 4 && j < 3; i++, j++){
        cout<<"Enter "<<i+1<<" choice of player1 (row, col): ";
        cin>>r>>c;
        board[r][c] = 'X';
        cout<<"Enter "<<j+1<<" choice of player2 (row, col): ";
        cin>>r>>c;
        board[r][c] = 'O';
        if ((board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') ||  // Row 1
            (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') ||  // Row 2
            (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') ||  // Row 3

            (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') ||  // Column 1
            (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') ||  // Column 2
            (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') ||  // Column 3

            (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') ||  // Main diagonal
            (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')){    // Other diagonal
            cout << "Player 1 Won!" << endl;
            break;
        }
        else if ((board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') ||
            (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') ||
            (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') ||

            (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') ||
            (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') ||
            (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') ||

            (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') ||
            (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')){
            cout << "Player 2 Won!" << endl;
            break;
        }
    }
    // if(arr1 == {1, 2, 3, 4, 5})
    // cout<<
}
