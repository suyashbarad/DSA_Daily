
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>
#include<string>

using namespace std;

int getHuristic(vector<vector<int>> initial, vector<vector<int>> final){
    int count = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(initial[i][j] != 0 && initial[i][j] != final[i][j]){
                count++;
            }
        }
    }
    return count;
}

int optimalNode(vector<vector<int>> initial, vector<vector<int>> final, int gCost){
    return getHuristic(initial, final) + gCost;
}

pair<int, int> findBlank(vector<vector<int>> state){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(state[i][j] == 0){
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

vector<vector<vector<int>>> generateNeighbours(vector<vector<int>> state){
    vector<vector<vector<int>>> neighbours;
    pair<int, int> blank = findBlank(state);
    int row = blank.first;
    int col = blank.second;

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    for(int i = 0; i < 4; i++){
        int newRow = row + dr[i];
        int newCol = col + dc[i];

        if(newRow >= 0 && newRow < 3 && newCol >= 0 && newCol < 3){
            vector<vector<int>> newState = state;
            swap(newState[row][col], newState[newRow][newCol]);
            neighbours.push_back(newState);
        }
    }

    return neighbours;
}

string getKey(vector<vector<int>> state){
    string key = "";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            key += char(state[i][j] + '0');
        }
    }
    return key;
}

struct Node{
    vector<vector<int>> state;
    int g;
    int h;
    vector<vector<vector<int>>> path;
};

struct Compare{
    bool operator()(Node a, Node b){
        return a.g + a.h > b.g + b.h;
    }
};

void solvePuzzle(vector<vector<int>> initial, vector<vector<int>> final, int &steps){
    priority_queue<Node, vector<Node>, Compare> open;
    map<string, int> bestCost;

    Node start;
    start.state = initial;
    start.g = 0;
    start.h = getHuristic(initial, final);
    start.path.push_back(initial);

    open.push(start);
    bestCost[getKey(initial)] = 0;

    while(!open.empty()){
        Node current = open.top();
        open.pop();

        string key = getKey(current.state);

        if(current.g > bestCost[key]){
            continue;
        }

        if(current.state == final){
            cout << "Solution of the algorithm:\n";

            for(int i = 0; i < current.path.size(); i++){
                cout << "Step " << i << ":\n";
                for(int r = 0; r < 3; r++){
                    for(int c = 0; c < 3; c++){
                        cout << current.path[i][r][c] << " ";
                    }
                    cout << endl;
                }
                cout << endl;
            }

            steps = current.g;
            return;
        }

        vector<vector<vector<int>>> neighbours = generateNeighbours(current.state);

        for(int i = 0; i < neighbours.size(); i++){
            int newG = current.g + 1;
            string newKey = getKey(neighbours[i]);

            if(bestCost.find(newKey) == bestCost.end() || newG < bestCost[newKey]){
                bestCost[newKey] = newG;

                Node next;
                next.state = neighbours[i];
                next.g = newG;
                next.h = getHuristic(neighbours[i], final);
                next.path = current.path;
                next.path.push_back(neighbours[i]);

                open.push(next);
            }
        }
    }

    cout << "Solution not found\n";
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

    cout << "Heuristic Value is: "
         << getHuristic(initState, goalState) << endl;

    cout << "f Value is: "
         << optimalNode(initState, goalState, 0) << endl;

    pair<int, int> blank = findBlank(initState);

    cout << "Blank point: (" << blank.first
         << ", " << blank.second << ")" << endl;

    solvePuzzle(initState, goalState, steps);

    cout << "Number of steps = " << steps << endl;

    return 0;
}
