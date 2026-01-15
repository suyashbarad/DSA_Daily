#include<iostream>
using namespace std;

int main(){
    // int arr[] = {3, 4, 2, 1, 5, 6};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
    cout << "Enter element no. " << i+1 << ": ";
    cin >> arr[i];
    }
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Sorted array: "; 
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Second largest element: " << arr[n-2];
}