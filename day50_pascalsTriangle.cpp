#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        int val = 1;
        for(int j = 0; j < n-i-1; j++){
            cout<<" ";
        }
        for(int k = 0; k <= i; k++){
            cout<<val<<"  ";
            val = val*(i-k)/(k+1);
        }
        cout<<endl;
    }
}