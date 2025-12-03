#include<stdio.h>

int main(){
    
    int n = 9;
    int arr[9] = {1, 1, 2, 3, 3, 4, 5, 5, 6};
    int temp[9];
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