#include<stdio.h>

int main(){
    // int n = 5;       //if done manually
    // int arr[5] = {2, 4, 6, 1, 3};

    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    
    for(int i = 0; i < n-1; i++){
        int smallest = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[smallest]){
                smallest = j;
            }
        }
        if(smallest != i){
            int temp = arr[i];
            arr[i] = arr[smallest];
            arr[smallest] = temp;
        }
    }

    // printf("Sorted array: ");    //first sorting the array
    // for(int i = 0; i < n; i++){
    //     printf("%d ", arr[i]);
    // }

    printf("Second largest element: %d", arr[n-2]);

    return 0;
}
