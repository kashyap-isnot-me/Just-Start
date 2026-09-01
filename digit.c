#include<stdio.h>
#include<math.h>

int main (){

    char x ;

    printf("Enter a Key for check Digit or not : ");
    scanf("%c" , &x );

    if ( x >= '!' && x <= '}'){
        printf("Not a Digit \n");
    }

    else { printf("Digit \n"); } 

    return 0;
    
}