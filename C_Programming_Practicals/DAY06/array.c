#include <stdio.h>

int main() {
    int size;
    
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
    
    // Display the elements of the array
    printf("The elements of the array are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}