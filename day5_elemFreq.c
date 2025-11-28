#include<stdio.h>

int main(){
    // int arr[] = {1, 2, 1, 1, 2};              //if done manually
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int arr[n];
    int visited[n];
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }
    for(int i = 0; i < n; i++){
        if(visited[i] == 1){
            continue;
        }
        int count = 1;
        for(int j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] = 1;
            }
        }
        printf("%d -> %d\n", arr[i], count);
    }
    return 0;
}