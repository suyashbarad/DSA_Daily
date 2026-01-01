#include<stdio.h>

int main(){
    
    // int arr[] = {4, 2, 3, 5, 100, 101, 1};
    // int n = sizeof(arr)/sizeof(arr[0]);

    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j]> arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }
    printf("Sorted array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nContinuous Streak: ");

    int sum = 0;
    int total = 0;
    int flag = 0;
    printf("%d ", arr[0]);   //-->if streak broke from first elem, it'll still print first element
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i-1]+1){
            // printf("%d ", arr[0]);
            printf("%d ", arr[i]);
        }
        else{
            break;
        }
        //logic trial
        // sum += arr[i];
        // total += (arr[i]*(arr[i]+1))/2;
        // if(total != sum){
        //     printf("%d ", arr[i]);
        //     break;
        // }
    }
    return 0;
}
