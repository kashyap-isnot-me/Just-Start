#include <stdio.h>

void print(int count);

int main (){

    int n = 5;

    print(n);

    return 0;
}


// Recursive Function 

void print(int count){

    if (count == 0){
        return;
    }

    printf("Hellow world\n");
    print(count-1);
}