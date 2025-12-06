#include<stdio.h>
//Find missing number
int main(){
    
    int n;
    printf("Enter N (total numbers from 1 to N): ");
    scanf("%d", &n);
    int arr[n-1];
    int total = (n*(n+1))/2;
    int sum = 0;
    for(int i = 0; i < n-1; i++){
        //note: Enter elements between 1 to N
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int missing = total-sum;
    printf("Missing Integer: %d", missing);

    return 0;
}
