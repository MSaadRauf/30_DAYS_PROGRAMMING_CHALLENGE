def factorial(n):
    if n == 0:  # Base case: factorial of 0 is 1
        return 1
    else:
        return n * factorial(n - 1)  # Recursive case: n! = n * (n-1)!

def main():
    try:
        num = int(input("Enter a non-negative integer to calculate its factorial: "))
        if num < 0:
            print("Factorial is not defined for negative numbers.")
        else:
            result = factorial(num)
            print(f"The factorial of {num} is: {result}")
    except ValueError:
        print("Invalid input. Please enter a valid non-negative integer.")

if __name__ == "__main__":
    main()