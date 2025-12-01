#include<stdio.h>

int main(){
    int n = 5;
    int arr[5] = {2, 3, 5, 4, 1};
    for(int i = 0; i < n-1; i++){
        int smallElem = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[smallElem]){
                smallElem = j;
            }   
        }
        if(smallElem != i){
                int temp = arr[i];
                arr[i] = arr[smallElem];
                arr[smallElem] = temp;
            }
    }
    printf("Sorted array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}