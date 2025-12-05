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
    int largest;
    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
            printf("Largest location: arr[%d] = %d\n", i, arr[i]);
        }
    }
    return 0;
}
