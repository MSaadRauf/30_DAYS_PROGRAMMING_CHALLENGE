# Constant conversion factor
FAHRENHEIT_TO_CELSIUS_CONVERSION_FACTOR = 5 / 9

# Get temperature in Fahrenheit from user input
fahrenheit = float(input("Enter the temperature in Fahrenheit: "))

# Convert Fahrenheit to Celsius
celsius = (fahrenheit - 32) * FAHRENHEIT_TO_CELSIUS_CONVERSION_FACTOR

# Display the converted temperature
print("The temperature in Celsius is:", celsius)