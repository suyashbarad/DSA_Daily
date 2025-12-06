#include<stdio.h>
#include<string.h>
//Longest common PREFIX(only from start..pre)
int main(){
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char strs[n][100];
    for(int i = 0; i < n; i++){
        printf("Enter string %d: ", i+1);
        scanf("%s", strs[i]);
    }
    return 0;
}
