#include <stdio.h>
#include<math.h>


int main() {
    
    float a , b , c ;

    printf("Enter Three Numbers: ");
    scanf("%f %f %f" , &a , &b , &c );

    printf("Average Of Three Numbers is: %f " , (a + b + c) / 3);

    return 0;
}