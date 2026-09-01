#include<stdio.h>
#include<math.h>

int main(){

    int a , b ;

    printf("Enter Two Numbers: ");
    scanf("%d %d" , &a , &b );

  /*  if(a > b){
        printf("The Smaller Number is: %d\n", b);
    }

    else if (b > a){ 
        printf("The Smaller Number is: %d\n", a);
    }
    */

    int max;

    max = ( a > b ) ? printf("Small number is = %d",b) : printf("Small number is = %d",a) ;

    return 0;
}