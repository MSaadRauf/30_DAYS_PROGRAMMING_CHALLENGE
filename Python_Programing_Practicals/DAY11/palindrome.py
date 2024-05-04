def is_palindrome(word):
    # Convert the word to lowercase to ignore case sensitivity
    word = word.lower()
    # Check if the word is equal to its reverse
    return word == word[::-1]

# Example usage:
word = input("Enter a word: ")
if is_palindrome(word):
    print(word, "is a palindrome!")
else:
    print(word, "is not a palindrome.")
