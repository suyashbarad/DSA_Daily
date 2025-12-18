#include<stdio.h>

int main(){
    int count = 0, poss = 0;
    int n = 5;
    int arr[] = {2, 4, 6, 3, 2, 4, 2, 2, 3, 1};
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
