#include <stdio.h>

int main(){
    int n = 5;
    int choice;
    while(1){
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= i; j++){
                    printf("%d", j);
                }
                printf("\n");
            }
            break;
            }
            case 2:
            for(int i = 1; i <= n; i++){
                for(int j = i; j <= n; j++){
                    printf("%d", j);
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
                    printf("%d", j);
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
                    printf("%d", j);
                }
                printf("\n");
            }
            break;
}   
    return 0;
    
}

