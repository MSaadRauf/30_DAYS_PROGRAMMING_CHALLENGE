#include <stdio.h>

int main() {
    int size, max;

    // Ask the user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of integers with the given size
    int arr[size];

    // Fill the array with user input
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max to the first element of the array
    max = arr[0];

    // Find the maximum value in the array
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Display the maximum value
    printf("The maximum value in the array is: %d\n", max);

    return 0;
}