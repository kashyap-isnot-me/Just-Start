#include <stdio.h>

int main(){

    int n ;
    
    printf("Enter number in arrys = ");
    scanf("%d",&n);

    
    int arr [n] ;

    for (int i=0 ; i<n ; i++){
        printf("Enter %d index = ",i);
        scanf("%d", &arr[i]);
        

    }

    for (int l=0 ; l<n ; l++){
        printf("%d \t",arr[l]);

    }

    
    printf("\n\n");

    for (int i = 0 ; i<n/2 ; i++) {
        int first = arr[i];
        int secound = arr[n - i -1];

        arr[i]    = secound ;
        arr[n - i -1]  = first;
    }


    for (int l=0 ; l<n ; l++){
        printf("%d \t",arr[l]);
    }

    return 0 ;
}