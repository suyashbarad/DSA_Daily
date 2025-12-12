#include <stdio.h>
#include <stdlib.h>
//day19_postorder.c
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
void postorder_rec(struct node* root){
    if(root != NULL){
        postorder_rec(root->left);
        postorder_rec(root->right);
        printf("%d ", root->data);
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
    printf("Recursive postorder Traversal: ");
    postorder_rec(root);
    printf("\n");

}

