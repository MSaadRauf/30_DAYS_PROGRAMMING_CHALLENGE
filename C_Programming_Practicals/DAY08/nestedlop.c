#include <stdio.h>

int main() {
    int rows, cols;

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop to iterate over rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop to print stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
