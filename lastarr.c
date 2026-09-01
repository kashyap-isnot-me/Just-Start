#include<stdio.h>

int main(){

    int size;
    printf("Enter a size of arry : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter Elements : ");
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&arr[i]);
    }

    int last;
    printf("Enter the number you want to add in the last of array : ");
    scanf("%d",&last);

    size = size + 1 ;
    arr[size - 1] = last;

    printf("After inserting last number array list = ");
    for(int i =0 ; i<size ; i++){
    printf(" %d",arr[i]);
    }

    return 0;
}