//add two matrix using pointers.

#include<stdio.h>
#include<stdlib.h>

int addMatrices(int *a, int *b, int *sum, int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            *(sum+i * cols+j) = *(a+i * cols+j) + *(b+i * cols+j);
        }
    }
}
int main(){
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int *mat1 = (int*)malloc(rows*cols*sizeof(int));
    int *mat2 = (int*)malloc(rows*cols*sizeof(int));
    int *result = (int*)malloc(rows*cols*sizeof(int));

    if(!mat1 || !mat2 || !result){
        printf("Memory allocation failed! ");
        return 1;
    }

    printf("Enter elements for Matrix(A): \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", (mat1+i * cols+j));
        }
    }

    printf("Enter elements for Matrix(B): \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", (mat2+i * cols+j));
        }
    }
    addMatrices(mat1, mat2, result, rows, cols);

    printf("Sum of matrices: \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d ", *(result+i * cols+j));
        }
        printf("\n");
    }
    free(mat1);
    free(mat2);
    free(result);

    return 0;
}