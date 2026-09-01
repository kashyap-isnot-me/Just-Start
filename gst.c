#include<stdio.h>

void gst(float n);

int main(){

    float n ;
    printf("Enter your cost : ");
    scanf("%f",&n);

    gst(n);


    return 0;
}

void gst(float n){

    n = n + (n*.18);

    printf("Your total value = %f",n);
}