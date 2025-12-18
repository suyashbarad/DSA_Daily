#include<stdio.h>

int main(){
    int count = 0, poss = 0;
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(count == 0){
            poss = arr[i];
            count = 1;
        }
        else if(arr[i] == poss){
            count++;
        }
        else{
            count--;
        }
    }
    printf("%d", poss);
}