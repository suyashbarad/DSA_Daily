#include<stdio.h>

int main(){
    int a, b;
    int ans;
    a = 12;
    b = 18;
    int small;
    if(a < b) small = a;
    else small = b;

    for(int i = 1; i <= small; i++){
        if(a%i == 0 && b%i == 0){
            ans = i;
        }
    }
    printf("%d", ans);
    
}