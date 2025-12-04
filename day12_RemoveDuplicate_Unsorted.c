#include<stdio.h>

int main(){
    
    // int arr[] = {1, 2, 1, 1, 2};              //if done in manual way
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int arr[n];
    int temp[9];
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    return 0;
}
