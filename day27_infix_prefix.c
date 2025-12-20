#include<stdio.h>
#include<string.h>
#define MAX 100

char stack[MAX];
int top = -1;

int isFull(){
    return top == MAX-1;
}
int isEmpty(){
    return top == -1;
}
int isOperand(char ch){
    return ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z') ||
            (ch >= '0' && ch <= '9'));
}

void push(char x){
    if(!isFull()){
        stack[++top] = x;
    }
    // else{
    //     printf("Full! ");
    // }
}
char pop(){
    if(!isEmpty()){
        return stack[top--];
    }
    return '\0';
}
int precedence(char x){
    if(x == '(') return 0;
    if(x == '+' || x == '-') return 1;
    if(x == '*' || x == '/' || x == '%') return 2;
    return 0;
}
void reverse(char exp[]){
    int n = strlen(exp)-1;
    int i = 0;
    while(i < n){
        int temp = exp[i];
        exp[i] = exp[n];
        exp[n] = temp;
        i++;
        n--;
    }
}
