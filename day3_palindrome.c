#include<stdio.h>

void palindrome(int n, int arr[n]){
    int flag = 1;
    for(int i = 0; i < n/2; i++){
        if(arr[i] != arr[n-i-1]){
            flag = 0;
            break;
        }
    }
    if(flag) printf("Palindrome");
    else printf("Not palindrome");
}
int main(){
    int n = 3;
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {1, 2, 1};

    palindrome(n, arr1);
    palindrome(n, arr2);    
    return 0;
}