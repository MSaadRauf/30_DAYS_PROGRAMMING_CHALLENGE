#include <stdio.h>

// Function to swap the values of two variables using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    
    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Print the original values
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    // Call the swap function and pass the addresses of num1 and num2
    swap(&num1, &num2);
    
    // Print the swapped values
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}
