#include<stdio.h>

void inputMatrix(int rows, int cols, int mat[rows][cols]){
    printf("Enter matrix elements: ");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}
