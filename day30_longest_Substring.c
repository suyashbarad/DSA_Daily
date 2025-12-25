#include<stdio.h>
#include<string.h>
int main(){

    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    int n = strlen(str);
    char ansStr[n+1];
    int count[256] = {0};    //ASCII == 00FFH = 255+1
    int fcount = 0;
    for(int i = 0; i < n; i++){
        if(count[str[i]] == 0){
            ansStr[fcount] = str[i];
            count[str[i]]++;
            printf("%c", ansStr[i]);
            fcount++;
        }
        else{
            // ansStr[n] = '\0';
            break;
        }
        ansStr[fcount] = '\0';
    }
    printf("\n%d", fcount);
    
    return 0;
}
