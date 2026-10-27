#include<iostream>
using namespace std;

int main(){
    char x;
    char ans;
    cout<<"Enter X: ";
    cin>>x;
    if(x >= 65 && x <= 90){
        ans = x+32;
        cout<<ans;
    }
    else if(x >= 97 && x <= 122){
        ans = x-32;
        cout<<ans;
    }
    else{
        ans = x;
        cout<<"\nInvalid\n";
    }
}