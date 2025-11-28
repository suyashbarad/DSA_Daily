#include<stdio.h>
//wrong
int main(){
    int arr[] = {1, 0, 2, 0, 0, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[j] = arr[i];
            j++;
        }
    }
    while(j < n){
        arr[j] = 0;
        j++;
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}