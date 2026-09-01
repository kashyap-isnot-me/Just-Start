#include<stdio.h>

int main (){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int isPrime = 1; // Assume n is prime until proven otherwise
    for ( int i = 2 ; i*i < n ; i++ ){
        if( n%i == 0 ){
            isPrime = 0;
        }
    }
    if (isPrime){
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}