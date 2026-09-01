#include<stdio.h>

void bubblesort   (int a[], int length);
void selectionsort(int a[], int length);
void insertionsort(int a[], int length);

int main(){

    int a[] = {5,8,4,1,2,3,6,9,7,0};

    bubblesort   (a , 10);
    printf("Sorted array: ");
    for(int i = 0; i < 10; i++){
        printf("a[%d] = %d\t", i, a[i] );
    }
    printf("\n");


    selectionsort(a , 10);
    printf("Sorted array: ");
    for(int i = 0; i < 10; i++){
        printf("a[%d] = %d\t", i, a[i] );
    }
    printf("\n");


    insertionsort(a,  10);
    printf("Sorted array: ");
    for(int i = 0; i < 10; i++){
        printf("a[%d] = %d\t", i, a[i] );
    }
    printf("\n");


    
    return 0;
}

void bubblesort(int a[],int length){

    for(int i=0 ; i < (length) ; i++){
        for(int j=0 ; j<(length-1) ; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1]= temp;

            }
        }
    }
}

void selectionsort(int a[],int length){

    for (int i =0 ; i<(length-1) ; i++){
        int min = i;
        for (int j = i+1 ; j<length ; j++){
            if(a[min] > a[j]){
                min=j;
            }
        }

        a[i]= a[min];

    }

}

void insertionsort(int a[],int length){
    for(int i=0 ; i<length ; i++){

        int key = a[i];
        int j = i-1;

        while(j>=0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = key;
    }

}
