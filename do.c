//recirsive function to calculate factorial of a number
#include <stdio.h>

int main() {
    int a=5,b=10;
    int *ptr;
    ptr = &a;
    *ptr = 3;
    ptr = &b;
    *ptr = 7;
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
        return 0;
}
