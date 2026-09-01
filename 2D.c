#include <stdio.h>

int main(){

    // 2 students x 3 submar
    int marks[2][3];            // _ _ _ 
                                // _ _ _ 

    // 1st student
    marks[0][0] = 98 ; //phy
    marks[0][1] = 85 ; //che
    marks[0][2] = 99 ; //mat

    // 2nd studnt
    marks[1][0] = 96 ;
    marks[1][1] = 86 ;
    marks[1][2] = 76 ;

    printf("%d" , marks[1][1]);

}