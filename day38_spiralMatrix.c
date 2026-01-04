#include<stdio.h>

//hardest
void inputMatrix(int rows, int cols, int mat[rows][cols]){
    printf("Enter matrix elements: ");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}
void printMatrix(int rows, int cols, int mat[rows][cols]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int n = rows*cols;
    int mat[rows][cols];
    // int flag[] = 0;
    inputMatrix(rows, cols, mat);
    printf("Matrix: \n");
    printMatrix(rows, cols, mat);
    printf("\nSpiral Form: ");
    int top = 0, bottom = rows-1;
    int left = 0, right = cols-1;

    while(top <= bottom && left <= right){
        // left->right
        for(int j = left; j <= right; j++){
            printf("%d ", mat[top][j]);
        }
        top++;
        // top->bottom
        for(int i = top; i <= bottom; i++){
            printf("%d ", mat[i][right]);
        }
        right--;
        // right->left
        if(top <= bottom){
            for(int j = right; j >= left; j--){
                printf("%d ", mat[bottom][j]);
            }
            bottom--;
        }
        // bottom->top
        if(left <= right){
            for(int j = bottom; j >= top; j--){
                printf("%d ", mat[j][left]);
            }
            left++;
        }
        
    }
    return 0;    
}
