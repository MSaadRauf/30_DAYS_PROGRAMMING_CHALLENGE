#include <stdio.h>
#include <string.h>

int count_vowels(char *str) {
    int count = 0;
    int length = strlen(str);

    // Iterate through each character of the string
    for (int i = 0; i < length; i++) {
        // Check if the current character is a vowel (both lowercase and uppercase)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++; // Increment the count if the character is a vowel
        }
    }
    return count; // Return the total count of vowels
}

int main() {
    char str[100]; // Assuming the string will not exceed 100 characters

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character at the end of the input
    str[strcspn(str, "\n")] = '\0';

    // Count the number of vowels in the string
    int vowel_count = count_vowels(str);

    // Print the number of vowels
    printf("Number of vowels in the string: %d\n", vowel_count);

    return 0;
}
