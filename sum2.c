#include<stdio.h>

int sum(int a,int b);

int main(){

    int a,b;
    printf("Enter First number : ");
    scanf("%d",&a);

    printf("Enter Second number : ");
    scanf("%d",&b);

    int s = sum ( a , b ) ; // argument // actual parameter
    printf("Sum is %d\n",s);

    return 0;
}


int sum(int x ,int y){  // parameter  // formal parameter
    return x + y ;
}