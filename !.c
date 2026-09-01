#include<stdio.h>

int main(){
    char c[100];
    printf("Enter the string : ");
    fgets(c,sizeof(c),stdin);

    int all[256] = {0};
    int count = 0;
    for (int i = 0 ; c[i] != '\0' ; i++){
       for(int j = 0 ; j<256 ; j++){
           if( (char)(j) == c[i] ){
           all[j] ++;
        }
       }
    }
    
    for(int j = 0 ; j<256 ; j++){

         if(all[j] != 0 && all[j] != 1){
         printf("\n %c is repeating %d times in this string\n",(char)j,all[j]);
         }
     }
     
    return 0;
}#include<stdio.h>

int main(){
    char c[100];
    printf("Enter the string : ");
    fgets(c,sizeof(c),stdin);

    int all[256] = {0};
    int count = 0;
    for (int i = 0 ; c[i] != '\0' ; i++){
       for(int j = 0 ; j<256 ; j++){
           if( (char)(j) == c[i] ){
           all[j] ++;
        }
       }
    }
    
    for(int j = 0 ; j<256 ; j++){

         if(all[j] != 0 && all[j] != 1){
         printf("\n %c is repeating %d times in this string\n",(char)j,all[j]);
         }
     }
     
    return 0;
}