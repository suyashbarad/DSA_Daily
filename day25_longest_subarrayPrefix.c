#include<stdio.h>

int main(){
    int n;
    printf("Enter Number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0) arr[i] = -1;
        sum += arr[i];
        if(sum == 0) count = i+1;
    }
    printf("%d", count);
}
