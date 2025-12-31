#include<stdio.h>

int main(){

    // int arr[] = {1, 1, 1};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter number at %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int req = 2;
    // int flag = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum == req){
                // flag = 1;
                count++;
            }
        }
    }
    printf("Ans: %d\n", count);
    return 0;
}
