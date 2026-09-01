#include<stdio.h>
#include<math.h>

int main(){

    int x;
    do{
        printf("Enter a number : ");
        scanf("%d",&x);
        printf("%d\n",x);

        if (x%7==0 && x != 0){ 
            printf("Thanks for That\n");
        break;
    }

    } while (1);

    return 0;
}