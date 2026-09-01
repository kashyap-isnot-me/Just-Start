#include <stdio.h>

void printstrings(char arr[]);

int main(){

    char First[] = "Kashyap" ;
    char Last[] = "Prajapati" ;

    printstrings(First);
    printstrings(Last);

    char name[40];
    printf("Enter name: ");
    scanf("%s",name);
    printf("%s",name);

    return 0;
}

void printstrings(char arr[]){

    printf("\n");
    for (int i = 0 ; arr[i] != '\0' ; i++ ){
        printf("%c",arr[i]);
    }

    printf("\n");
}