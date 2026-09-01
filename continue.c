#include<stdio.h>
#include<math.h>

int main(){

    for ( int i =1 ; i<=13 ; i ++){
        if(i ==3 ){
            continue; // Skip the number 3
        }
        printf("%d\n", i); 
    }
}