#include<stdio.h>

void fun1 (int st,int nd ,int *a,int *b,int *c);

int main(){

    int st = 5;
    int nd = 10;
    int a,b,c;

    fun1 (st,nd,&a,&b,&c);

    printf("%d,%d,%d",a,b,c);


}

void fun1 (int st , int nd ,int *a , int *b , int *c){
    *a = st+nd;
    *b = st*nd;
    *c = (st+nd)/2;
}