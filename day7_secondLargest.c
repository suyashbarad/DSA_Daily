#include<stdio.h>

int main(){
    int n = 5;
    int arr[5] = {2, 4, 6, 1, 3};
    
    for(int i = 0; i < n-1; i++){
        int smallest = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[smallest]){
                smallest = j;
            }
        }
        if(smallest != i){
            int temp = arr[i];
            arr[i] = arr[smallest];
            arr[smallest] = temp;
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}