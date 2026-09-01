#include <stdio.h>
#include <string.h>

struct student{
    char name[100];
    int roll;
};

int main(){
    
   struct student std[5];
   struct student *ptr = &std;

    for(int i=0; i<5; i++){
         printf("Enter name : ");
         fgets(*ptr->name, 100, stdin);   

         printf("Enter roll : ");
         scanf("%d", *ptr->roll);

            ptr++;
    }

    return 0;
}