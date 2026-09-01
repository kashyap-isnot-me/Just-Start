#include <stdio.h>

int fac(int n);

int main(){

    printf(" Factorial is = %d",fac(5));

    return 0;
}

int fac(int n){

    if (n==1){
        return 1;
    }

    int facNm1 = fac(n-1); // factorial of n -1 
    int facN = fac(n-1) * n ; 
}