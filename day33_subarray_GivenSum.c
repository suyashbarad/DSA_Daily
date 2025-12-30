#include<stdio.h>

int main(){

    int arr[] = {1, 4, 20, 3, 10, 5};
    int S = 33;
    int n = sizeof(arr)/sizeof(arr[0]);
    int flag = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum == S){
                printf("Found at Index: [%d, %d]",i, j);
                flag = 1;
            }
        }
        if(flag) break;
    }
    if(!flag){
        printf("not found at any index");
    }
    return 0;
}
