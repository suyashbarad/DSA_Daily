#include<stdio.h>
//Second largest number
int main(){

    // int n = 5;
    // int arr[5] = {3, 2, 1, 5, 4};
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    int largest = arr[0];
    int largest_index = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
            largest_index = i;
        }
    }
    // printf("Largest location: arr[%d] = %d\n", i, arr[i]);   //<---largest number
    int second_largest = -100000;
    for(int i = 0; i < n; i++){
        if(i == largest_index) continue;
        else{
            if(arr[i] > second_largest){
                second_largest = arr[i];
                
            }
        }
    }
    printf("Second largest: %d", second_largest);
    return 0;
}
