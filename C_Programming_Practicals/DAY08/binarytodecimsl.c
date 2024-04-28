#include <stdio.h>

int main() {
    long long binaryNum;
    int decimalNum = 0, base = 1, rem;

    // Prompt the user to enter a binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);

    // Convert binary number to decimal
    while (binaryNum != 0) {
        rem = binaryNum % 10;
        decimalNum += rem * base;
        binaryNum /= 10;
        base *= 2;
    }

    // Print the decimal number
    printf("Decimal equivalent: %d\n", decimalNum);

    return 0;
}
