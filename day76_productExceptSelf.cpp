#include<iostream>
using namespace std;

void productExceptSelf(int n, int nums[]) {
    int ans[n];
    for(int i = 0; i < n; i++){
        ans[i] = 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            ans[i] *= nums[j];
        }
    }
    for(int i = 0; i < n; i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }
    productExceptSelf(n, nums);
}