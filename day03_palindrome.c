#include<stdio.h>
#include<string.h>

void palindromeString(char str[]){
    int flag = 1;
    int n = strlen(str);
    for(int i = 0; i < n/2; i++){
        if(str[i] != str[n-i-1]){
            flag = 0;
            break;
        }
    }
    if(flag) printf("Palindrome\n");
    else printf("Not palindrome\n");
}
void palindromeNumber(int n, int arr[]){ 
    int flag = 1; 
    for(int i = 0; i < n/2; i++){
        if(arr[i] != arr[n-i-1]){ 
            flag = 0; 
            break; 
        }
    } 
    if(flag) printf("Palindrome\n");
    else printf("Not palindrome\n"); }
int main(){
    int n;
    char str[100];
    int choice;
    
    printf("1.Number or 2.String: ");
    scanf("%d", &choice);
    if(choice == 1){
        printf("Enter no. of elements: ");
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++){
            printf("Enter element %d: ", i+1);
            scanf("%d", &arr[i]);
        }
        printf("\n");
        palindromeNumber(n, arr); 
    }
    else if(choice == 2){
        printf("Enter string: ");
        scanf("%s", str);
        n = strlen(str);
        palindromeString(str);
    }
    else{
        printf("Invalid input number! ");

    }
     
    return 0;
}
