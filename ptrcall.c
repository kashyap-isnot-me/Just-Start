#include<stdio.h>

void square(int n);
void _square(int *n);

int main (){

    int number = 5 ;

    square(number);
    printf("Number = %d\n\n\n" , number);

    _square(&number);
    printf("Number = %d\n" , number);


    return 0;
}


void square(int n){
    n=n*n;
    printf("Square = %d\n", n);
}

void _square(int *n){
    *n = (*n) * (*n) ;
    printf("Square = %d\n" , *n );
}