#include<stdio.h>

int main(){

    float price [3];

    printf("Enter price of 1 items price : ");
    scanf("%f",&price[0]);
    printf("address of price[0] : %u\n\n",&price[0]);

    printf("Enter price of 2 items price : ");
    scanf("%f",&price[1]);  
    printf("address of price[1] : %u\n\n",&price[1]);

    printf("Enter price of 3 items price : ");
    scanf("%f",&price[2]);
    printf("address of price[2] : %u\n\n\n\n",&price[2]);

    printf("Fianl price is : %f",((price[0]+price[1]+price[2])*0.18)+price[0]+price[1]+price[2]);

    return 0;
}