#include<iostream>
using namespace std;

void palindromeInt(int n1, int arr1[]){
    int flag = true;
    for(int i = 0; i < n1; i++){
        if(arr1[i] != arr1[n1-i-1]){
            flag = false;
        }
    }
    if(flag) cout << "palindrome" << endl;
    else cout << "Not a palindrome" << endl;
}
int main(){
    // int arr1[] = {1, 2, 2, 1};
    // int n1 = sizeof(arr1)/sizeof(arr1[0]);
    
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element " <<  i+1 << ": ";
        cin >> arr[i];
    }
    cout << endl;
    palindromeInt(n, arr);

    return 0;
}
