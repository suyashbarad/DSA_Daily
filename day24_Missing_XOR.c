#include <stdio.h>

int main(){
    int n = 8;
    int arr[] = {3, 1, 5, 4, 2, 6, 8};
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

