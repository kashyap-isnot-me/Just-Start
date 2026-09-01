#include<stdio.h>

float ftoc (float c);

int main (){

    float c;
    printf("Enter celsius to conver in Ferenhit : ");
    scanf("%f",&c);

    
    printf("%f Celsius in Ferenhii = %f",c,ftoc(c));
    

    return 0;
}

float ftoc(float c){

   float f = c * (9.0/5.0) + 32 ;
    
    return f;
}