#include<iostream>
using namespace std;
#define inf 999
int main(){

int n = 4;

int cost[n][n];
int dist[n][n]; 
int nextHop[n][n];

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cout<<"Enter cost for ("<<i+1<<", "<<j+1<<"): ";
        cin>>cost[i][j];
    }
}

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        dist[i][j] = cost[i][j];

        if(i == j){
            nextHop[i][j] = i;
        }
        else if(cost[i][j] != inf){
            nextHop[i][j] = j;
        }
        else{
            nextHop[i][j] = -1;
        }
    }
}

bool updated;
do{
    updated = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(dist[i][k] != inf &&
                   dist[k][j] != inf &&
                   dist[i][j] > dist[i][k]+dist[k][j]){
                        dist[i][j] = dist[i][k]+dist[k][j];
                        nextHop[i][j] = nextHop[i][k];
                        updated = true;
                   }
            }
        }
    }
}while(updated);

cout<<"----------- Final routing -----------\n";

for(int i = 0; i < n; i++){
    cout<<"Router "<<i<<endl;
    cout<<"destination\tcost\tNext Hop\n";
    for(int j = 0; j < n; j++){
        cout<<j<<"\t\t";
        if(dist[i][j] == inf){
            cout<<"INF\t";
        }
        else{
            cout<<dist[i][j]<<"\t";
        }
        if(nextHop[i][j] == -1){
            cout<<"-\n";
        }
        else{
            cout<<nextHop[i][j]<<"\n";
        }
    }
}
}