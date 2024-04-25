def main():
    # Create an empty list to store fruits
    fruits = []

    # Prompt the user to enter 5 fruits
    for i in range(5):
        fruit = input("Enter fruit {}: ".format(i + 1))
        fruits.append(fruit)

    # Print each fruit using a for loop
    print("List of fruits:")
    for fruit in fruits:
        print(fruit)

if __name__ == "__main__":
    main()
