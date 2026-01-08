#include<iostream>

int main(){

    int arr[] = {2, 7, 11, 5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 9;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] + arr[j] == target){
                printf("Index = [%d %d] = %d+%d = %d", i+1, j+1, arr[i], arr[j], target);
                printf("\n");
            }
        }
    }
    return 0;
}