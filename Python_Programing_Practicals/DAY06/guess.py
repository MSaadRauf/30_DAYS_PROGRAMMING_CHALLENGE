import random

def guess_number():
    # Generate a random number between 1 and 10
    target_number = random.randint(1, 10)
    
    while True:
        # Ask the user to guess the number
        user_guess = int(input("Guess the number between 1 and 10: "))
        
        # Check if the guess is correct
        if user_guess == target_number:
            print("Congratulations! You guessed the number correctly!")
            break
        else:
            print("Wrong guess. Try again.")

# Call the function to start the game
guess_number()