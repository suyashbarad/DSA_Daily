#include<iostream>
using namespace std;

int main(){
    int n, edges; //vertices = n
    cout<<"Enter number of vertices: ";
    cin>>n;
    int adj[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            adj[i][j] = 0;
        }
    }
    cout<<"Enter number of edges: ";
    cin>>edges;
    for(int i = 0; i < edges; i++){
        int u, v;
        cout<<"Enter edge (u v): ";
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}