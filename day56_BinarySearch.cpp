#include<iostream>
using namespace std;

void BinaryRec(int arr[], int left, int right, int key){
    int mid = (left+right)/2;
    if(arr[mid] == key){
        cout<<"\nKey found at index "<<mid+1<<" (Recursive)"<<endl;
    }
    else if(key > arr[mid]){
        BinaryRec(arr, mid+1, right, key);
    }
    else if(key < arr[mid]){
        BinaryRec(arr, left, mid-1, key);
    }
    if(left > right){
    cout<<"Key not found (Recursive)"<<endl;
    return;
    }
}

void sort(int n, int arr[]){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] >arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Sorted array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    int key;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Enter key element: ";
    cin>>key;
    sort(n, arr);

    BinaryRec(arr, 0, n-1, key);
}