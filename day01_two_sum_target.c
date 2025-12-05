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
            if(arr[i]+arr[j] == target){
                // printf("Indexes: ");
                printf("index[%d, %d] = ", i, j);
                // printf("Numbers: ");
                printf("%d + %d = %d\n", arr[i], arr[j], target);
                
            }
        }
    }
    return 0;
}
