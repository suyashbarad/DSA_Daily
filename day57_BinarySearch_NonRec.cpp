#include<iostream>
using namespace std;

int BinaryNonRec(int n, int arr[], int key){
    int left = 0;
    int right = n-1;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid] == key){
            cout<<"\nKey found at index "<<mid+1<<" (Non-Recursive)"<<endl;
            return mid;
        }
        else if(key > arr[mid]){
            left = mid+1;
        }
        else if(key < arr[mid]){
            right = mid-1;
        }
        if(left > right){
        cout<<"Key not found (Recursive)"<<endl;
        }   
    }
    return -1;
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

    BinaryNonRec(n, arr, key);
}