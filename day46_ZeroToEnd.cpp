#include<iostream>
using namespace std;
int main(){
    // int arr[] = {1, 0, 0, 2, 3, 0};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
    cout << "Enter element no. " << i+1 << ": ";
    cin >> arr[i];
    }
    int j = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[j] = arr[i];
            j++;
        }
    }
    while(j < n){
        arr[j] = 0;
        j++;
    }
    for(int i = 0; i < n; i++){    
        cout << arr[i];
    }
    return 0;
}