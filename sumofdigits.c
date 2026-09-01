#include <stdio.h>

int main () {

    int n;
    printf("Enter Number for their digits sum: ");
    scanf("%d", &n);

    int sum = 0 , r ;
    while (n > 0) {
        r = n % 10; // Get the last digit
        sum += r;  // Add it to the sum           sum = sum + r;
        n /= 10;   // Remove the last digit       n = n / 10;
    }

    printf("Sum of digits is: %d\n", sum);

    return 0;
}