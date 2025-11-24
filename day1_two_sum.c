#include<stdio.h>

int main(){
    int n = 4;
    int arr[4] = {1, 2, 3, 4};
    int target = 5;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            if(i+j == target){
                printf("[%d, %d], ", i, j);
            }
        }
    }
    return 0;
}