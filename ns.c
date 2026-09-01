#include<stdio.h>
#include<math.h>

int main () {

    int n;

    printf("Enter a Number to sum natural numbers: ");
    scanf("%d", &n);

     /* Using the formula for the sum of the first n natural numbers

     Sum = n * (n + 1) / 2
    
        printf(" Total Sum of Natural Numbers is: %d\n" , (n * (n + 1)) / 2);
    

     return 0;  */

    int sum = 0;
    for (int i = 1 , j=n ; i <= n , j>=1 ; i++ , j--) {
         sum = sum + i; // sum += i
         printf("%d\n" , j );
    }

    printf("Sum is = %d \n" , sum );


   /* for( int i = n ; i >= 1 ; i = i-1){
        
        printf("%d\n" , i ); 

    } */

    return 0; 
}