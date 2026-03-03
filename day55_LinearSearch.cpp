#include<iostream>
using namespace std;

class LinearSearch{
    private:
        int *arr;
        int n;
        int key;
        int flag;
    public:
        void search(int n, int arr[], int key){
            flag = 0;
            for(int i = 0; i < n; i++){
                if(arr[i] == key){
                    cout<<"Found "<<key<<" at index "<<i+1<<endl;
                    flag = 1;
                    return;
                }
                else{
                    flag = 0;
                }
            }
            if(flag == 0) cout<<"Not Found! ";
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