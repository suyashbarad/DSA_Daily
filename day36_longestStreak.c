#include<stdio.h>

int main(){
    
    int arr[] = {4, 2, 3, 5, 100, 101, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j]> arr[j+1]){
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

    int sum = 0;
    int total = 0;
    int flag = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[i-1]+1){
            printf("%d ", arr[i]);
        }
        else{
            break;
        }
        // sum += arr[i];
        // total += (arr[i]*(arr[i]+1))/2;
        // if(total != sum){
        //     printf("%d ", arr[i]);
        //     break;
        // }
    }
    return 0;
}