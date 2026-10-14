#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int getHuristic(vector<vector<int>> initial, vector<vector<int>> final){
    int count = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(initial[i][j] != final[i][j]){
                count++;
            }
        }
    }
    return count;
}
int optimalNode(vector<vector<int>> initial, vector<vector<int>> final, int gCost){
    int hCost = getHuristic(initial, final);
    int Optimal = hCost+gCost;
    return Optimal;
}
pair <int, int> findBlank(vector<vector<int>> state){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(state[i][j] == 0){
                return {i, j};
            }
        }
    }
    return {-1, -1}; //exceptional case
}
vector<vector<vector<int>>> generateNeighbours(vector<vector<int>> state){
    vector<vector<vector<int>>> neighbours;
    pair<int, int> blankSpaces = findBlank(state);
    int row = blankSpaces.first;
    int col = blankSpaces.second;
    
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};
    
    for(int i = 0; i < 4; i++){
        int newRow = row+dr[i];
        int newCol = col+dc[i];
        if(newRow >= 0 && newRow < 3 && newCol >= 0 && newCol < 3){
            vector<vector<int>> newState = state;
            swap(newState[row][col], newState[newRow][newCol]);
            neighbours.push_back(newState);
        }
    }
    return neighbours;
}
void solvePuzzle(vector<vector<int>> initial, vector<vector<int>> final, int &steps){
    steps = 1;
    vector<vector<vector<int>>> neighbours = generateNeighbours(initial);
    vector<int> optimal(neighbours.size());
    cout<<"Neighbours States: "<<endl;
    for(int i = 0; i < neighbours.size(); i++){
        cout<<"State: "<<i+1<<endl;
        for(int r = 0; r < 3; r++){
            for(int c = 0; c < 3; c++){
                cout<<neighbours[i][r][c]<<" ";
            }
            cout<<endl;
        }

        optimal[i] = getHuristic(neighbours[i], final);
        cout<<"Huristic Value of state "<<i+1<<" is "<<optimal[i]<<endl;
    }
    int small = optimal[0];
    int index = 0;
    for(int i = 0; i < neighbours.size(); i++){
        if(optimal[i] < small){
            small = optimal[i];
            index = i;
        }
    }
    cout<<"State "<<index+1<<" has smallest heuristic = "<<small<<endl;
    if(small == 0){
        cout<<"Solution of the algorithm: \n";
        int i = index;
        for(int r = 0; r < 3; r++){
            for(int c = 0; c < 3; c++){
                cout<<neighbours[i][r][c]<<" ";
            }
            cout<<endl;
        } 
        return;
    }
    else{
        steps++;
        solvePuzzle(neighbours[index], final, steps);
    }
}
int main(){
    int steps = 0;
    vector<vector<int>> goalState = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 0}
    };
    vector<vector<int>> initState = {
        {1, 2, 3},
        {4, 0, 5},
        {7, 8, 6}
    };
    int huristic = getHuristic(initState, goalState);
    cout<<"Huristic Value is: "<<huristic<<endl;
    int fofN = optimalNode(initState, goalState, 1);
    cout<<"f Value is: "<<fofN<<endl;
    pair<int, int> blank = findBlank(initState);
    cout<<"Blank point: (x, y) - ("<<blank.first<<" "<<blank.second<<")"<<endl;

    solvePuzzle(initState, goalState, steps);
    cout<<"Number of steps = "<<steps;
}