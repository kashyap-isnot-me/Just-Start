#include<stdio.h>
// This is commant prompt for sum numbers

int main(){

    int a, b;

    printf("Enter a : ");
    scanf("%d" , &a);

    printf("Enter b : ");
    scanf("%d" , &b);

    int sum = a + b ;
    printf("Sum is : %d", sum);
    
    return 0;
}