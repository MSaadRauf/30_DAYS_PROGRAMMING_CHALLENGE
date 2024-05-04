#include <stdio.h>

// Function to calculate the number of digits in an integer
int count_digits(int num) {
    int count = 0;
    // If the number is negative, we count the '-' sign as one digit
    if (num < 0) {
        count = 1;
        num = -num; // Convert negative number to positive
    }
    // Counting digits using division
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int number;
    
    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    // Calculate the number of digits using the count_digits function
    int num_digits = count_digits(number);
    
    // Print the number of digits
    printf("Number of digits: %d\n", num_digits);
    
    return 0;
}
