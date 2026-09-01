#include<stdio.h>

int main(){

    float cost = 10.02;
    float *ptr1 = &cost;

    printf("ptr1 : %u\n", ptr1);
    ptr1 ++;
    printf("ptr1 ++ : %u\n\n\n", ptr1);


    int age2 = 17;
    int age3 = 18;

    int *ptr2 = &age2;
    int *ptr3 = &age3;

    printf("ptr2 : %u\n", &ptr2);
    printf("ptr3 : %u\n\n", &ptr3);

    printf("diffrent of ptr2 and ptr3 : %d\n\n", ptr3 - ptr2);
    
    ptr3 = &age2;
    printf("compare ptr2 and ptr3 : %d    1=true 0=false\n\n", ptr2 == ptr3);

}