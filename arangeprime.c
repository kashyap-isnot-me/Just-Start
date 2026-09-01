#include<stdio.h>

int main(){

    int a , b ;
    printf("Enter First Number: ");
    scanf("%d", &a);    
    printf("Enter Last Number: ");
    scanf("%d", &b);

    for(int i = a; i <= b; i++) {
        if(i < 2) continue; // Skip numbers less than 2
        int isprime = 1;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                isprime = 0;
                break;
            }
        }
        if(isprime) {
            printf("%d \n", i);
        }
    }

    return 0;
}