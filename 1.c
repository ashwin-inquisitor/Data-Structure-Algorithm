// Create, initialize and use pointers.

#include <stdio.h>

int main(){
    int num = 1;
    char character ='A';
    float pie = 3.14f;
    long long biginteger= 8161351742;

    printf("Value of integer: %d. Address of integer: %u.\n", num, &num);
    printf("Value of Character: %c. Address of Character: %u.\n", character, &character);
    printf("Value of real: %f. Address of real: %u.\n", pie, &pie);
    printf("Value of biginteger: %lld. Address of bidinteger: %u.\n", biginteger, &biginteger);

    return 0;
}
