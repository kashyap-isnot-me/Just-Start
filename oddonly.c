#include<stdio.h>

int main() {
     
    int x;

    for (int i = 1 ; i <= 50 ; i++){

        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        printf("%d\n", i); // Print only odd numbers
            
    }
    
    return 0;
}