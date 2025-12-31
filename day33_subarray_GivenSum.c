#include<stdio.h>

int main(){

    // int arr[] = {1, 4, 20, 3, 10, 5};
    // int n = sizeof(arr)/sizeof(arr[0]);  manual way
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter number at %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int S = 33;
    int flag = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];

            if(sum == S){
                printf("Index: %d %d",i, j);
                flag = 1;
                break;
            }
        }
        if(flag) break;
    }

    if(!flag){
        printf("not found");
    }
    return 0;
}
