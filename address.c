#include<stdio.h>

int main () {

    int age = 22;
    int *ptr = &age; // Pointer to age variable
    int _age = *ptr; // Dereferencing pointer to get the value


    // address of age variable
    printf("%p \n ", &age );
    printf("%u \n\n ", &age );

    printf("%p \n ", ptr );
    printf("%u \n\n ", ptr );

    printf("%u \n ", &ptr );
    printf("%u \n\n ", &_age );

     printf("%u \n ", _age );
    printf("%u \n\n ", *ptr );

    return 0;
}