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

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    
    return 0;
}
