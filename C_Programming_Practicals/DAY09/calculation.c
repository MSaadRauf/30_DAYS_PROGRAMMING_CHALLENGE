#include <stdio.h>

// Function declaration
int sum(int num1, int num2);

int main() {
    int a, b, result;
    
    // Input the two numbers
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    // Call the sum function and store the result
    result = sum(a, b);
    
    // Display the result
    printf("Sum of %d and %d is: %d\n", a, b, result);
    
    return 0;
}

// Function definition to calculate the sum of two numbers
int sum(int num1, int num2) {
    return num1 + num2;
}
