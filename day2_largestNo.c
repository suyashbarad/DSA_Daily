#include<stdio.h>

int main(){
    int n = 4;
    int arr[4] = {1, 4, 6, 2};
    int Largest;
    for(int i = 0; i <= n; i++){
        Largest = i;
        for(int j = 0; j <= n; j++){
            if(Largest < arr[j]){
                Largest = arr[j];
            }
        }
    }
    printf("Largest = %d", Largest);
}