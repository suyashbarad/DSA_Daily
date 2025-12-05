#include<stdio.h>
//Second largest number
int main(){

    int n = 5;
    int arr[5] = {3, 2, 1, 5, 4};
    int largest = arr[0];
    int largest_index = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
            printf("Largest location: arr[%d] = %d\n", i, arr[i]);
            largest_index = i;
        }
    }
    int second_largest = arr[0];
    for(int i = 1; i < n; i++){
        if(i == largest_index) continue;
        else{
            if(arr[i] > second_largest){
                second_largest = arr[i];
                printf("Second largest: %d", second_largest);
            }
        }
    }
    return 0;
}
