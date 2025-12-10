#include <stdio.h>
#include <stdlib.h>
//day17_inorder.c
struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct node* insert(struct node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}
void inorder_rec(struct node* root){
    if(root != NULL){
        inorder_rec(root->left);
        printf("%d ", root->data);
        inorder_rec(root->right);
    }
}
struct node* stack[100];
int top = -1;
void push(struct node* x){
    stack[++top] = x;
}
struct node* pop(){
    return stack[top--];
}
int isEmpty(){
    return top == -1;
}
void inorder_Nonrec(struct node* root){
    struct node* current = root;
    while(current != NULL || !isEmpty()){
        while(current != NULL){
            push(current);
            current = current->left;
        }
        current = pop();
        printf("%d ", current->data);

        current = current->right;
    }
}
int main(){
    struct node* root = NULL;
    int n, value;

    printf("Enter no. of elements: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &value);
        root = insert(root, value);
    }
    printf("Recursive inorder Traversal: ");
    inorder_rec(root);
    printf("\n");
    printf("Nonrecursive inorder Traversal: ");
    inorder_Nonrec(root);
}
