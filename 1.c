// Create, initialize and use pointers.

#include <stdio.h>

int main(){
    int x;
    int *ptr = &x;

    printf("Enter an integer: ");
    scanf("%d", ptr);

    printf("You entered: %d\n", x);
    printf("Value via pointer: %d\n", *ptr);

    printf("Address of value %d\n", &x);
    printf("Address of pointer: %d\n", &ptr);
    printf("value of pointer: %d\n", ptr);

    return 0;
}
