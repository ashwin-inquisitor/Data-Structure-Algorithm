//swap two numbers using pointers.

#include<stdio.h>

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

int main(){
    int a, b;

    printf("Enter first number(a): ");
    scanf("%d", &a);

    printf("Enter second number(b): ");
    scanf("%d", &b);

    printf("Before swapping: a= %d and b= %d\n", a,b);

    swap(&a, &b);

    printf("Afterr swapping: a= %d and b= %d\n", a,b);

    return 0;
}