#include<stdio.h>

int main(){

    int arr[] = {1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int req = 2;
    int count = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum == req){
                count++;
            }
        }
    }
    printf("Ans: %d\n", count);
    return 0;
}
