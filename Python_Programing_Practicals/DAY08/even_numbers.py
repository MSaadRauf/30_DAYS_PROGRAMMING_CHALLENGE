# Define a list of numbers
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# Function to print even numbers from the list
def print_even_numbers(number_list):
    even_numbers = [num for num in number_list if num % 2 == 0]
    for num in even_numbers:
        print(num)

# Call the function with the list of numbers
print_even_numbers(numbers)
