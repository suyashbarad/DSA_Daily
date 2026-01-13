#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count[n];
    int visited[n];
    for(int i = 0; i < n; i++){
        visited[i] = 0;
        count[i] = 0;
    }
    for(int i = 0; i < n; i++){
        if(visited[i] == 1)
            continue;
        count[i] = 1;
        for(int j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                count[i]++;
                visited[j] = 1;
            }
        }
        cout << arr[i] << "->" << count[i] << endl;
    }
    return 0;
}
