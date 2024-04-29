#include <stdio.h>

// Function declaration
void checkEvenOdd(int num);

int main() {
    int number;
    
    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    // Call the function to check if the number is even or odd
    checkEvenOdd(number);
    
    return 0;
}

// Function definition to check if a number is even or odd
void checkEvenOdd(int num) {
    if(num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}
