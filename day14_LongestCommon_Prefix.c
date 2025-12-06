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
    char prefix[100];
    strcpy(prefix, strs[0]);

    for(int i = 1; i < n; i++){
        int j = 0;
        while(prefix[j] && strs[i][j] && prefix[j] == strs[i][j]){
            j++;
        }
        prefix[j] = '\0';
    }
    if(strlen(prefix) == 0){
        printf("No common prefix! ");
    }
    else{
        printf("Longest common prefix: %s", prefix);
    }
    return 0;
}
