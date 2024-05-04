#include <stdio.h>

// Function to calculate the nth term of Fibonacci sequence
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the value of n to find the nth Fibonacci term: ");
    scanf("%d", &n);
    
    // Calculate and print the nth Fibonacci term
    printf("The %dth Fibonacci term is: %d\n", n, fibonacci(n));
    
    return 0;
}
