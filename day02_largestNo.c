#include<stdio.h>

int main(){
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    int Largest = arr[0];
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
