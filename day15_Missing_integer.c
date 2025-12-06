#include<stdio.h>
//Find missing number
int main(){
    
    int n;
    printf("Enter N (total numbers from 1 to N): ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        //note: Enter elements between 1 to N
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
return 0;
}
