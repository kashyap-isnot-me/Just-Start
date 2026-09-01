#include<stdio.h>
#include<math.h>

// Used to find 2 digit code

int main(){

    int x ;

    printf(" Enter number to check between 9 to 99 : ");
    scanf("%d" , &x);

   // printf("%d" ,  x>9 && x<=99);

    x = (x > 9 && x <= 99) ? printf("Yes, it is a 2 digit number") : printf("No, it is not a 2 digit number")   ;

    return 0;
}