#include<stdio.h>

void printTable();

int main () {

    int n;
    printf("Enter a number for make a Table of that number : ");
    scanf("%d",&n);

    printTable(n);   // n=argumnt // actual parameter


    return 0;
}


void printTable(int n){   //int n= parameter // formal parameter

    for (int i=1;i<=10;i++){
        printf("%d x %d = %d\n", n , i , n*i);
    }


}