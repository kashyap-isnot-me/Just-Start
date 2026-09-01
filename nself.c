#include<stdio.h>
#include<math.h>


int main () {

    int n ;

    printf("Enter a Number to end loop : ");
    scanf("%d" , & n );

    int i = 0 ;
    while ( i <= n ){

        printf(" %d\n " , i );
        i++;
    }
    
    return 0;
    
}