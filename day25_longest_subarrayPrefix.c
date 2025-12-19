#include<stdio.h>

int main(){
    int n = 7;
    int arr[] = {0, 1, 1, 1, 0, 1, 0};
    int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0) arr[i] = -1;
        sum += arr[i];
        if(sum == 0) count = i+1;
    }
    printf("%d", count);
}
