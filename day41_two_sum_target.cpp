#include<iostream>
using namespace std;

int main(){

    // int arr[] = {2, 7, 11, 5, 4};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element : " <<  i+1;
        cin >> arr[i];
    }
    cout << endl;
    int target;
    cout << "Enter target element: ";
    cin >> target;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] + arr[j] == target){
                cout << "Index [" << i+1 << ", " << j+1 << "] = " << arr[i] << " + " << arr[j] << " = " << target << endl;
            }
        }
    }
    return 0;
}
