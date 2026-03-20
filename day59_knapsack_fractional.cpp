#include<iostream>
using namespace std;
struct knapsack{
    int weight, val;
};
float knapsack_prob(int W, struct knapsack arr[], int n){
    // int arr[n+1][W+1];
    float totalVal = 0;
    for(int i = 0; i < n; i++){
        if(arr[i].weight <= W){
            totalVal += arr[i].val;
            W -= arr[i].weight;
        }
        else{
            totalVal += arr[i].val * (float(W)/arr[i].weight);
            break;
        }
    }
    return totalVal;
}
int main(){
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    knapsack *items = new knapsack[n];
    
    cout<<"Enter weight and value array: (weight value): ";
    for(int i = 0; i < n; i++){
        cin>>items[i].weight>>items[i].val;
    }
    int W;
    cout<<"Enter Knapsack capacity: ";
    cin>>W;
    float maxVal = knapsack_prob(W, items, n);
    cout<<"Max Profit: "<<maxVal<<endl;
}