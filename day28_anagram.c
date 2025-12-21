#include<stdio.h>
#include<string.h>

int main(){

    char s1[100];
    char s2[100];
    printf("Enter First string: ");
    scanf("%s", s1);
    printf("Enter Second string: ");
    scanf("%s", s2);
    
    int flag = 0;
    int count[256] = {0};
    if(strlen(s1) != strlen(s2)){
        printf("Not anagram!");
    }
    for(int i = 0; s1[i] != '\0'; i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i = 0; i < 256; i++){
        if(count[i] != 0){
            flag = 1;
        }
    }
    if(flag == 0){
        printf("Anagram");
    }
    else{
        printf("Not anagram");
    }
    return 0;
}
