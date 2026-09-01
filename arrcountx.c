#include <stdio.h>

int main(){

    int n;

    printf("\nEnter number of index :- ");
    scanf("%d",&n);

    int arr[n] ;

    for(int i = 0 ; i<n ; i++){
        printf("Enter %d = ",i);
        scanf(" %d",&arr[i]);
    }

    printf("\nEnter x number :- ");
    int x ;
    scanf("%d",&x);

    int count = 0 ;
    for (int j = 0 ; j<n ; j++){
 
        
        if ( arr[j]  == x ){
            count ++;
        }
    }

    printf("\nIn this arrey number %d appears '%d' times \n\n",x,count);

    return 0;
}