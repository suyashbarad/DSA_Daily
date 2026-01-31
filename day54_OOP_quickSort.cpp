#include<iostream>
using namespace std;

class QuickSort{
    public:
    int n;
    int *arr;
    
    void getData();
    int partitions(int low, int high);
    void quicksort(int low, int high);
    void display();
};
void QuickSort::getData(){
    cout<<"Enter number of elements: ";
    cin>>n;
    arr = new int[n];
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
}
int QuickSort::partitions(int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }  
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}
void QuickSort::quicksort(int low, int high){
    if(low<high) {
        int pi = partitions(low, high);
        quicksort(low, pi-1);
        quicksort(pi+1, high);
    }
}
void QuickSort::display(){
    cout<<"Sorted array using QuickSort: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    QuickSort s;
    s.getData();
    s.quicksort(0, s.n-1);
    s.display();
}
