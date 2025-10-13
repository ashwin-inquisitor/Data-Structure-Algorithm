//copy one array to another using pointers.

#include<stdio.h>

int main(){
    int source[5], destination[5];
    int *srcptr = source;
    int *destptr = destination;

    printf("Enter 5 integer: \n");
    for(int i=0;i<5;i++){
        scanf("%d", srcptr + i);
    }

    for(int i=0;i<5;i++){
        *(destptr + i) = *(srcptr + i);
    }

    printf("Copied array: ");
    for(int i=0;i<5;i++){
        printf("%d ", *(destptr+i));
    }
    return 0;
}