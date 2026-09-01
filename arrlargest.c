#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    // It's good practice to check if n is a valid size
    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1; // Exit with an error
    }

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 1. Assume the first element is the greatest to start.
    int greatest = arr[0];

    // 2. Loop through the REST of the array (from the second element).
    for (int i = 1; i < n; i++) {
        // 3. If we find an element that's bigger, update our 'greatest'.
        if (arr[i] > greatest) {
            greatest = arr[i];
        }
    }

    // 4. After the loop, 'greatest' holds the largest value.
    printf("\nThe greatest Number in array = %d\n\n", greatest);

    return 0;
}