#include<stdio.h>
#include<string.h>
int main(){

    char str[] = "abcdaabs";
    int n = strlen(str);
    char ansStr[n+1];
    int count[255] = {0};
    int fcount = 0;
    for(int i = 0; i < n; i++){
        if(count[str[i]] == 0){
            ansStr[i] = str[i];
            count[str[i]]++;
            printf("%c", ansStr[i]);
            fcount++;
        }
        else{
            // ansStr[n] = '\0';
            break;
        }
    }
    printf("\n%d", fcount);
    
    return 0;
}
