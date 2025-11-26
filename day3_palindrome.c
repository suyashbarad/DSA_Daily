#include<stdio.h>

void palindrome(int n, int arr[n]){
    int flag = 1;
    for(int i = 0; i < n/2; i++){
        if(arr[i] != arr[n-i-1]){
            flag = 0;
            break;
        }
    }
    if(flag) printf("Palindrome\n");
    else printf("Not palindrome\n");
}
int main(){
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    palindrome(n, arr);  
    return 0;
}
