#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    printf("Enter String: ");
    scanf("%s", str);
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
        printf("First NonRepeating character: %c\n", ans);
    }
    else{
        printf("First NonRepeating character: -1");
    }
    return 0;
}
