#include <stdio.h>

// Function to calculate the length of a string
int string_length(const char *str) {
    int length = 0;
    // Iterate through the string until the null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[] = "Hello, world!";
    
    // Calculate the length of the string using the function
    int length = string_length(str);
    
    // Print the length of the string
    printf("Length of the string: %d\n", length);
    
    return 0;
}
