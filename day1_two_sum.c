#include<stdio.h>

int main(){
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 1; i <= n; i++){
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    for(int i = 1; i <= n; i++){
        printf("%d ", arr[i]);   
    }
    printf("\n");
    int target;
    printf("Enter Target element: ");
    scanf("%d", &target);
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            if(i+j == target){
                printf("[%d, %d], ", i, j);
            }
        }
    }
    return 0;
}