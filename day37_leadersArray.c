#include<stdio.h>

int main(){

    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        int flag = 0;

        for(int j = i+1; j < n; j++){
            if(arr[j] > arr[i]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
