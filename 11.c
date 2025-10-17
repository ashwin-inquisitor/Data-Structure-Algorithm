//Multiply two matrix using pointers.

#include<stdio.h>
#include<stdlib.h>

int multimatices(int *a, int *b, int *product, int r1, int c1, int c2){
    for(int i =0; i<r1; i++){
        for(int j=0; j<c2; j++){
            *(product+i * c2+j) = 0;
            for(int k=0; k<c1; k++){
                *(product+i * c2+j) += *(a+i * c1+k) ** (b+k * c2+j);
            }
        }
    }
}

int main(){
    int c1, c2, r1, r2;
    printf(" Enter rows and columns for Matrix(A): ");
    scanf("%d %d", &r1,&c1);
    printf(" Enter rows and columns for Matrix(B): ");
    scanf("%d %d", &r2,&c2);

    if (c1 != r2){
        printf("Matrix multiplication not possible. Columns of A must be equal to rows of B.\n");
        return 1;
    }
    int *matA = (int*)malloc(r1 * c1 * sizeof(int));
    int *matB = (int*)malloc(r2 * c2 * sizeof(int));
    int *result = (int*)malloc(r1 * c2 * sizeof(int));

    if (!matA || !matB || !result){
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter elements of matrix A: \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            scanf("%d", (matA+i * c1+j));
        }
    }
    printf("Enter elements of matrix B: \n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            scanf("%d", (matB+i * c2+j));
        }
    }
    multimatices(matA, matB, result, r1, c1, c2);

    printf("Product of matrices: \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            printf("%d ", *(result+i * c2+j));
        }
        printf("\n");
    }
    free(matA);
    free(matB);
    free(result);

    return 0;
}