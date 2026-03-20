#include<iostream>
using namespace std;
struct knapsack{
    int weight, val;
    float ratio;
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
    for(int i = 0; i < n; i++){
        items[i].ratio = (float)items[i].val / items[i].weight;
    }
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(items[j].ratio < items[j+1].ratio){
                float tempRatio = items[j].ratio;
                items[j].ratio = items[j+1].ratio;
                items[j+1].ratio = tempRatio;
                
                int tempVal = items[j].val;
                items[j].val = items[j+1].val;
                items[j+1].val = tempVal;

                int tempWeight = items[j].weight;
                items[j].weight = items[j+1].weight;
                items[j+1].weight = tempWeight;

            }
        }
    }
    int W;
    cout<<"Enter Knapsack capacity: ";
    cin>>W;
    cout<<"Sorted: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<items[i].weight<<" - "<<items[i].val<<" - "<<items[i].ratio<<endl;
    }
    float maxVal = knapsack_prob(W, items, n);
    cout<<"Max Profit: "<<maxVal<<endl;
}