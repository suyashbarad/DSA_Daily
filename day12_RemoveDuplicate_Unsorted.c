#include<stdio.h>

int main(){
    
    // int arr[] = {1, 2, 1, 1, 2};              //if done in manually
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
    int j = 0;

    for(int i = 0; i < n; i++){
        if(i == 0 || arr[i] != arr[i-1]){
            temp[j] = arr[i];
            j++;
        }
    }
    printf("Array after removing duplicates: ");
    for(int i = 0; i < j; i++){
        printf("%d ", temp[i]);
    }
    
    return 0;
}
