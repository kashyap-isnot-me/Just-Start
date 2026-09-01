#include<stdio.h>
#include<math.h>

int main(){

    char ch;

    printf("Enter a Letter : ");
    scanf("%c" , &ch );

    if( ch >= 'A' && ch <= 'Z'){
        printf("UPPER CASE \n");
    }

    else if ( ch >= 'a' && ch <= 'z'){
        printf("lower case \n");
    }

    else { printf("Not a English Letter \n"); }
    return 0;
    
}