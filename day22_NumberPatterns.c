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
}   
    return 0;
    
}
