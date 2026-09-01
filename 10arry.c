#include <stdio.h>

int main(){

    int x[10];
    int *ptr = &x[0];


    // input 10 number
    for(int i=0; i < 10; i++){
        printf("Enter %d number = ",i);
        scanf("%d",ptr);                    //////   we could use &x[i] instead of ptr

        ptr++ ;
    }

    printf("\n\n");

    ptr --;                                 ////// point to last element   because ptr++ in last loop


    for (int j = 10; j>0 ; j-- ){

        printf("Revers order = %d \n",*ptr);
        ptr-- ; 
    }


    return 0;
}
