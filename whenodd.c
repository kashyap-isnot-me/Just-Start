#include<stdio.h>
#include<math.h>

int main(){

    int x ;

    do {
        printf("Enter Even number : ");
        scanf("%d", &x);
        printf("%d\n" , x);

        if (x % 2 != 0 ){ 
           printf("Ahhhhhh.... You Enter Odd Number\n"); break;
        }

    } while( 1 );
    
    return 0;
}