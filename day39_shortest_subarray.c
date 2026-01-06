#include<stdio.h>

int main(){

    // int arr[] = {2, 3, 1, 2, 4, 3};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter number at %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int k = 7;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            while(sum < k){
                sum += arr[j];
            }
            if(sum >= k){
                arr[i] = arr[n-i];
            }
        }
    }
    return 0;
}
