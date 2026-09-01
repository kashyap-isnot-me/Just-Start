#include<stdio.h>
#include<math.h>    

int main(){

    int n ;
    printf("Enter a number for table : ");
    scanf("%d" , &n );  

    int i = 10;
    while(i>=1){
        printf("%d x %d = %d\n" , n , i , i*n);
        i--; // Decrement i to count down
    }
    printf("Table of %d in reverse order completed.\n", n);
    // This will print the table in reverse order from 10 to 1
    
    return 0;
}