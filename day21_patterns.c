#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n = 5;
    int choice;
    while(1){
        printf("1. Triangle\n2.InvertedTriangle\n3.Pyramid\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                for(int i = 1; i <= n; i++){
                    for(int j = 1; j <= i; j++){
                        printf("*");
                    }
                    printf("\n");
                }
                break;
            case 2:
                for(int i = 1; i <= n; i++){
                    for(int j = i; j <= n; j++){
                        printf("*");
                    }
                    printf("\n");
                }  
                break;
            case 3:
                for(int i = 1; i <= n; i++){
                    for(int j = 1; j <= n-i; j++){
                        printf(" ");
                    }
                    for(int j = 1; j <= 2*i - 1; j++){
                        printf("*");
                    }
                    printf("\n");
                }  
                break;   
            case 4:
                for(int i = n; i >= 1; i--){
                    for(int j = 1; j <= n-i; j++){
                        printf(" ");
                    }
                    for(int j = 1; j <= 2*i - 1; j++){
                        printf("*");
                    }
                    printf("\n");
                }  
                break;      
            case 5:
                printf("ThankYou! ");
                return 0;
        }
    }
    return 0;
}
