#include<stdio.h>

int main () {

    int n;
    printf("Enter Limit : ");
    scanf("%d", &n);

    int a=0, b=1,c;
    

    for ( int i = 1 ; i <= n+1 ; i++){

        printf("%d \n", a);

        c = a + b;
        a = b;  
        b = c;

    }


    return 0;
}