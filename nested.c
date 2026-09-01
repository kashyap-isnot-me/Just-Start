#include<stdio.h>
#include<math.h>

int main (){

    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("The Number is Positive \n");

        if( num % 2 ==0 ){
            printf("The Number is Even \n");
        } 
        else {
            printf("The Number is Odd \n");
        }
    } 
    


    else {
        printf("The Number is Negetive \n");

        if( num % 2 ==0 ){
            printf("The Number is Even \n");
        } 
        else {
            printf("The Number is Odd \n");
        }
    }

    return 0;
}