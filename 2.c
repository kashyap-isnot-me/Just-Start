#include<stdio.h>
#include<math.h>

// Even = 1
// Odd  = 0

int main(){

    int x ;
    printf(" Input x : ") ; 
    scanf("%d" , &x );

    printf("%d" , x % 2 == 0 );
    
    return 0;
}