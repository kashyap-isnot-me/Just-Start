#include <stdio.h>

void printtable(int table[][10] ,int m ,int n ,int number);

int main(){

    int table [2][10];
    int n =10;

    printtable(table, 0, 10 , 13);
    printtable(table, 1, 10 , 16);

    for (int i = 0 ; i < n ; i++){
       printf("%d\t",table[0][i]); 
    }
    printf("\n\n");
    for (int i = 0 ; i < n ; i++){
        printf("%d\t",table[1][i]); 
    }

    return 0;
}


void printtable(int table[][10] , int m , int n , int number ){

    for (int i = 0 ; i < n ; i++){
        table[m][i] = number * (i+1);
    }

}