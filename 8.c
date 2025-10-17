//Search an element in array using pointers.

#include<stdio.h>
int searchElement(int *arr, int size, int key){
    for(int i = 0; i < size; i++){
        if(*(arr + i) == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[5], key, index;

    printf("Enter 5 elements in array: ");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    index = searchElement(arr, 5, key);

    if (index != -1){
        printf("Element %d found at index %d.\n", key, index);
    }else{
        printf("Element %d not found in the array.\n", key);
    }
    
    return 0;
}