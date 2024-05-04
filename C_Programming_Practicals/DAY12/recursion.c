#include <stdio.h>

// Function to calculate power using recursion
double power(double base, int exponent) {
    // Base case: exponent is 0, return 1
    if (exponent == 0)
        return 1;
    // Recursive case: multiply base by itself (exponent - 1) times
    else if (exponent > 0)
        return base * power(base, exponent - 1);
    // Handling negative exponents
    else
        return 1 / power(base, -exponent);
}

int main() {
    double base;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate and print the result
    printf("%lf raised to the power %d is: %lf\n", base, exponent, power(base, exponent));

    return 0;
}
