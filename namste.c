#include<stdio.h>

void indian();
void french();

int main (){

    int choice;
    printf("Choose a culture(1-India , 2-French): \n");
    scanf("%d", &choice);

    switch(choice){

        case 1 :  indian();
                 break;

        case 2 :  french();
                 break;

        default: printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;

}



void indian()
{
    printf("Namaste! Welcome to the Indian culture.\n");
}

void french()
{
    printf("Bonjour! Welcome to the French culture.\n");
}