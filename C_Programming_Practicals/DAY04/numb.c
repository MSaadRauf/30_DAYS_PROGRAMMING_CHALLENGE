#include <stdio.h>

int main() {
    int number, isPrime = 1;

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check for factors from 2 to number-1
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // Output the result
    if (number <= 1) {
        printf("Please enter a positive integer greater than 1.\n");
    } else if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}