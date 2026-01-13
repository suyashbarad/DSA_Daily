#include<iostream>
#include<string>
using namespace std;
int main(){
    int choice;
    // int arr[] = {1, 2, 3, 4};
    // string str = "ABCDE";
    
    cout << "1.String, 2. Array: ";
    cin>>choice;
    switch(choice){
        case 1:{
            string str;
            cout << "Enter String: ";
            cin >> str;
            int n = str.length();
            for(int i = 0; i < n/2; i++){
                char temp = str[i];
                str[i] = str[n-i-1];
                str[n-i-1] = temp;
            }
            for(int i = 0; i < n; i++){
            cout << str[i];
            }
            break;
        }
        case 2:{
            // int n1 = sizeof(arr)/sizeof(arr[0]);
            int n1;
            cout << "Enter no of elements: ";
            cin >> n1;
            int arr[n1];
            for(int i = 0; i < n1; i++){
                cout << "Enter element " << i+1 << ": ";
                cin >> arr[i];
            }
            // int n1 = sizeof(arr)/sizeof(arr[0]);
            for(int i = 0; i < n1/2; i++){
                int temp = arr[i];
                arr[i] = arr[n1-i-1];
                arr[n1-i-1] = temp;
            } 
            for(int i = 0; i < n1; i++){ 
                cout << arr[i];
            }
            break;
        }
    }
    return 0;
}
