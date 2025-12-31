#include<stdio.h>

void inputMatrix(int rows, int cols, int mat[rows][cols]){
    printf("Enter Elements: \n");
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
void transpose(int rows, int cols, int mat[rows][cols], int ansMat[cols][rows]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            ansMat[j][i] = mat[i][j];
        }
    }
}
