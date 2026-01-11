#include<iostream>
using namespace std;

int main(){
    // int arr[] = {3, 2, 1, 5, 6, 4};
    // int n = sizeof(arr)/sizeof(arr[0]);
    
    // int arr[] = {2, 7, 11, 5, 4};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element : " <<  i+1;
        cin >> arr[i];
    }
    cout << endl;
    int largest = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > largest) largest = arr[i];
    }
    cout << "Largest: " << largest;
    
}
