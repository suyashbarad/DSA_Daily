#include<iostream>
using namespace std;

class LinearSearch{
    private:
        int *arr;
        int n;
        int key;
    public:
        void search(int n, int arr[], int key){
            for(int i = 0; i < n; i++){
                if(arr[i] == key){
                cout<<"Found "<<key<<" at index "<<i+1<<endl;
                }
            }
        }    
};
int main(){
    LinearSearch l1;
    int n;
    int key;

    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Enter key element: ";
    cin>>key;
    l1.search(n, arr, key);
}