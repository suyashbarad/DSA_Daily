#include<stdio.h>

int main(){

    // int arr[] = {16, 17, 4, 3, 5, 2};
    // int n = sizeof(arr)/sizeof(arr[0]);    -----> Manual way
    
    //  Leaders: the element which dont have no larger element on right that current...last element is always leader
    
    int n;
    printf("Enter The number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter arr element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        int flag = 0;

        for(int j = i+1; j < n; j++){
            if(arr[j] > arr[i]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
