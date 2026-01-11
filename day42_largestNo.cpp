#include<iostream>
using namespace std;

int main(){
    // int arr[] = {3, 2, 1, 5, 6, 4};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    int largest = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > largest) largest = arr[i];
    }
    cout << "Largest: " << largest;
}