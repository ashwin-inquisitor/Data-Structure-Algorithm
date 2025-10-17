//Access two dimensional array using pointers.
#include<stdio.h>
#include<stdlib.h>

int main(){
    int rows, cols;
    int *ptr;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    ptr = (int *)malloc(rows * cols * sizeof(int));
    if (ptr == NULL){
        printf("Memory allocaton failed!");
        return 1;
    }

    printf("Enter %d elements: \n", rows * cols);
    for(int i=0; i < rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d ", (ptr + i * cols + j));
        }
    }
    printf("You entered: \n");
    for(int i= 0; i < rows; i++){
        for(int j= 0; j < cols; j++){
            printf("%d ", *(ptr + i * cols + j));
        }
        printf("\n");
    }
    free(ptr);

    return 0;
}