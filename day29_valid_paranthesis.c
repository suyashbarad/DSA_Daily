#include<stdio.h>
#include<string.h>

#define MAX 100
char stack[MAX];
int top = -1;

void push(char ch){
    stack[++top] = ch;
}
char pop(){
    return stack[top--];
}
int Opening(char ch){
    return (ch == '(' || ch == '[' || ch == '{');
}
int isMatch(char open, char close){
    if(open == '(' && close == ')') return 1;
    if(open == '{' && close == '}') return 1;
    if(open == '[' && close == ']') return 1;
    return 0;
}
int main(){
    char exp[MAX];
    int flag = 1;
    printf("Enter the expression: ");
    scanf("%s", exp);

    for(int i = 0; exp[i] != '\0'; i++){
        if(Opening(exp[i])){
            push(exp[i]);
        }
        else{
            if(top == -1){
                // printf("Invalid paranthesis");
                flag = 0;
                break;
            }
            char open = pop();
            if(!isMatch(open, exp[i])){
                // printf("Invalid paranthesis");
                flag = 0;
                break;
            }
        }
    }
    if(top != -1 || flag == 0){
        printf("Invalid parathesis! ");
    }
    else{
        printf("Valid parathesis! ");
    }
    return 0;
}