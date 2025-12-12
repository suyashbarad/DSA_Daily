#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // int arr[] = {2, 4, 1, 5, 6, 3, 9, 28, 64};
    // int arr1[] = {3, 5, 1, 4, 56, 28};

    // int n = sizeof(arr)/sizeof(arr[0]);
    // int n1 = sizeof(arr1)/sizeof(arr1[0]);

    int n;
    printf("Enter no. of elements of arr1: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int n1;
    printf("Enter no. of elements of arr1: ");
    scanf("%d", &n1);
    int arr1[n1];
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr1[i]);
    }

    printf("Intersection: ");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n1; j++){
            if(arr[i] == arr1[j]){
                printf("%d ", arr[i]);
            }
        }
    }
    return 0;
}
