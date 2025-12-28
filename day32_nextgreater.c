#include<stdio.h>

int main(){

    int arr[] = {4, 5, 2, 25};
    int n = sizeof(arr)/sizeof(arr[0]);
    // printf("%d", n);
    for(int i = 0; i < n; i++){
        int next = -1;
        for(int j = i+1; j < n; j++){
            if(arr[j] > arr[i]){
                next = arr[j];
                break;
            }
        }
        printf("%d ", next);
    }
    return 0;
}
