//input and print array elements using pointer.

#include<stdio.h>

int main(){
    int arr[5];
    int *ptr;
    ptr = arr;

    printf("Enter 5 integer: \n");
    for(int i=0; i < 5; i++){
        scanf("%d", ptr + i);
    }

    printf("You entered: ");
    for(int i=0; i<5; i++){
        printf("%d ", *(ptr + i));
    }
    return 0;
}
