#include<stdio.h>

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
    else{
        printf("Full! ");
    }
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

int main(){
    char exp[MAX], *e, x;
    printf("Enter Infix expression: ");
    scanf("%s", exp);

    e = exp;
    printf("Postfix Expression: ");
    while(*e != '\0'){
        if(isOperand(*e)){
            printf("%c", *e);
        }
        else if(*e == '('){
            push(*e);
        }
        else if(*e == ')'){
            while((x = pop()) != '('){
                printf("%c", x);
            }
        }
        else {
            while(!isEmpty() && precedence(stack[top]) >= precedence(*e)){
                printf("%c", pop());
            }
            push(*e);
        }
        e++;
    }
    while(!isEmpty()){
        printf("%c", pop());
    }
    printf("\n");
    return 0;
}
