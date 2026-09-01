# include<stdio.h>  

# define PI 3.14
# define iOS  
  
int main()  
{  
  
    #ifdef iOS  
        printf("This is iOS Code\n");  
    #else  
        printf("This is code for Android Devices\n %d\n\n",PI);  
    #endif // iOS  
  
    return 0;  
}  