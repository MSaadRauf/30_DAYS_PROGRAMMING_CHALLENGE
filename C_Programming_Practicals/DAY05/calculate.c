#include <stdio.h>

int main() {
    int num, factorial = 1;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the factorial
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    // Print the factorial
    printf("Factorial of %d is %d\n", num, factorial);

    return 0;
}