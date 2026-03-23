#include<iostream>
using namespace std;

#define inf 9999
#define max 20

int cost[max][max];
int visited[max];
int n;

void prims(){
    int mincost = 0;
    int edges = 0;
    visited[0] = 1;

    cout<<"Edges selected for mincost tree: "<<endl;
    while(edges < n-1){
        int min = inf;
        int u = -1;
        int v = -1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(visited[i] == 1 && visited[j] == 0 && cost[i][j] < min){
                    min = cost[i][j];
                    u = i;
                    v = j;
                }
            }
        }
        if(u != -1 && v != -1){
            cout<<"From '"<<u<<"' to '"<<v<<"' cost = "<<min<<endl;
            mincost += min;
            visited[v] = 1;
            edges++;
        }
    }
    cout<<"\nMinimum cost: "<<mincost<<endl;
    
}
int main(){
    cout<<"Enter number of vertices: ";
    cin>>n;
    cout<<"Enter cost of edge: \n 0 if no direction\n";
    for(int i = 0; i < n; i++){
        visited[i] = 0;
        for(int j = 0; j < n; j++){
            if(i == j){
                cost[i][j] = 0;
            }
            else if(i < j){
                char ch;
                cout<<"Is edge "<<i<<" connected with "<<j<<"? (T/F): ";
                cin>>ch;
                if(ch == 'T' || ch == 't'){
                    cout<<"Enter weight of "<<i<<" - "<<j<<": ";
                    cin>>cost[i][j];
                    cost[j][i] = cost[i][j]; // undirected graph
                }
                else{
                    cost[i][j] = inf;
                    cost[j][i] = inf;
                }
            }
        }
    }
    prims();
}