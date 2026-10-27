
#include<iostream>
using namespace std;

bool printGameX(char game[3][3], int r, int c){
    if(r < 0 || r >= 3 || c < 0 || c >= 3){
        cout << "Invalid position!" << endl;
        return false;
    }

    if(game[r][c] != '-'){
        cout << "Cell already occupied!" << endl;
        return false;
    }

    game[r][c] = 'X';

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << " " << game[i][j] << " ";
        }
        cout << endl;
    }

    return true;
}

bool printGameO(char game[3][3], int r, int c){
    if(r < 0 || r >= 3 || c < 0 || c >= 3){
        cout << "Invalid position!" << endl;
        return false;
    }

    if(game[r][c] != '-'){
        cout << "Cell already occupied!" << endl;
        return false;
    }

    game[r][c] = 'O';

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << " " << game[i][j] << " ";
        }
        cout << endl;
    }

    return true;
}

bool checkWinner(char game[3][3], char player){

    // Check rows
    for(int i = 0; i < 3; i++){
        if(game[i][0] == player &&
           game[i][1] == player &&
           game[i][2] == player){
            return true;
        }
    }

    // Check columns
    for(int j = 0; j < 3; j++){
        if(game[0][j] == player &&
           game[1][j] == player &&
           game[2][j] == player){
            return true;
        }
    }

    // Check main diagonal
    if(game[0][0] == player &&
       game[1][1] == player &&
       game[2][2] == player){
        return true;
    }

    // Check other diagonal
    if(game[0][2] == player &&
       game[1][1] == player &&
       game[2][0] == player){
        return true;
    }

    return false;
}

int main(){
    char game[3][3];

    // Initialize board
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            game[i][j] = '-';
        }
    }

    int moves = 0;
    bool won = false;

    while(moves < 9){
        int r, c;

        if(moves % 2 == 0){
            cout << "Player A (X), enter row and column (0-2): ";
            cin >> r >> c;

            if(!printGameX(game, r, c)){
                continue;
            }

            moves++;

            if(checkWinner(game, 'X')){
                cout << "Player A is Winner!" << endl;
                won = true;
                break;
            }
        }
        else{
            cout << "Player B (O), enter row and column (0-2): ";
            cin >> r >> c;

            if(!printGameO(game, r, c)){
                continue;
            }

            moves++;

            if(checkWinner(game, 'O')){
                cout << "Player B is Winner!" << endl;
                won = true;
                break;
            }
        }
    }

    if(!won){
        cout << "Match Draw!" << endl;
    }

    return 0;
}
