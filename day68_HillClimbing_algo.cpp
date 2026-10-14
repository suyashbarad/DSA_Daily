#include<iostream>
#include<vector>
using namespace std;

int calculateCost(vector<int> path, vector<vector<int>> dist){
    int cost = 0;
    for(int i = 0; i < path.size()-1; i++){
        cost += dist[path[i]][path[i+1]];
    }
    cost += dist[path.back()][path[0]];
    return cost;
}
int main(){
    int n = 4;
    // vector<vector<int>> dist = {
    //     {0, 10, 15, 20},
    //     {10, 0, 35, 25},
    //     {15, 35, 0, 30},
    //     {20, 25, 30, 0}       //min cost = 80
    // };
    vector<vector<int>> dist(n, vector<int>(n));
    cout<<"Enter matrix: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>dist[i][j];
        }
    }
    vector<int> path = {0, 1, 2, 3};
    int currentCost = calculateCost(path, dist);
    bool improved = true;
    while(improved){
        improved = false;
        for(int i = 1; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                vector<int> newPath = path;
                swap(newPath[i], newPath[j]);
                int newCost = calculateCost(newPath, dist);
                if(newCost < currentCost){
                    path = newPath;
                    currentCost = newCost;
                    improved = true;
                }
            }
        }
    }
    cout<<"Best Path: ";
    for(int city: path){
        cout<<city<<"->";
    }
    cout<<path[0]<<endl;
    cout<<"Minimum cost: "<<currentCost;
    return 0;
}