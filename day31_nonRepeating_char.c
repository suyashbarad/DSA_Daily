#include<stdio.h>
#include<string.h>

int main(){

    char str[] = "abccdd";
    int n = strlen(str);
    int count[256] = {0};
    char ans = '\0';
    for(int i = 0; i < n; i++){
        count[str[i]]++;
    }

    for(int i = 0; i < n; i++){
        if(count[str[i]] == 1){
            ans = str[i];
            break;
        }
    }
    if(ans != '\0'){
        printf("Ans: %c\n", ans);
    }
    return 0;
}
