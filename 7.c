//reverse an array using pointers.

#include<stdio.h>

void reverseArray(int *arr, int size){
    int *start = arr;
    int *end = arr + size -1;
    int temp;
    
    while(start<end){
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main(){
    int arr[5];

    printf("Enter elements in array: ");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, 5);

    printf("Reversed array= ");
    for(int i= 0; i<5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}