//swap two arrays using pointers.

#include<stdio.h>

void swapArray(int *a, int *b, int size){
    int temp;
    for(int i=0; i<size; i++){
        temp = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = temp;
    }
}

int main(){
    int arr1[5], arr2[5];

    printf("Enter elements in first array: ");
    for(int i=0; i<5; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements in second array: ");
    for(int i=0; i<5; i++){
        scanf("%d", &arr2[i]);
    }
    printf("Before swapping:\n");
    printf("First array = ");
    for(int i=0; i<5; i++){
        printf("%d ", arr1[i]);
    }
    printf("\nSecond array = ");
    for(int i=0; i<5; i++){
        printf("%d ", arr2[i]);
    }

    swapArray(arr1, arr2, 5);

    printf("\nAfter swapping: \n");
    printf("First array = ");
    for(int i=0; i<5; i++){
        printf("%d ", arr1[i]);
    }
    printf("\nSecond array = ");
    for(int i=0; i<5; i++){
        printf("%d ", arr2[i]);
    }
}