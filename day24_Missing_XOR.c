#include <stdio.h>

int main(){
    int n;
    printf("Enter Number of elements: ");
    scanf("%d", &n);
    int arr[n-1];
    for(int i = 0; i < n-1; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int xor_all = 0;
    int xor_arr = 0;

    for(int i = 1; i <= n; i++){
        xor_all ^= i;
    }
    for(int i = 0; i < n-1; i++){
        xor_arr ^= arr[i];
    }
    int ans = xor_all ^ xor_arr;
    printf("%d", ans);

    return 0;
    
}

