#include<iostream>
using namespace std;

int main(){
    int arr1[] = {1, 2, 2, 1};
    int arr1[] = {1, 2, 5, 5};
    int arr1[] = {1, 2, 2, 1, 1, 2, 2, 1};
    
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int flag = true;
    for(int i = 0; i < n1; i++){
        if(arr1[i] != arr1[n1-i-1]){
            flag = false;
        }
    }
    if(flag) cout << "palindrome";
    else cout << "Not a palindrome";
    return 0;
}