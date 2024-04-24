import re

def is_strong_password(password):
    # Check if the password contains at least one lowercase letter
    if not re.search("[a-z]", password):
        return False
    
    # Check if the password contains at least one uppercase letter
    if not re.search("[A-Z]", password):
        return False
    
    # Check if the password contains at least one digit
    if not re.search("[0-9]", password):
        return False
    
    # Check if the password contains at least one special character
    if not re.search("[!@#$%^&*()-+=]", password):
        return False
    
    # Check if the length of the password is at least 8 characters
    if len(password) < 8:
        return False
    
    # If all conditions are met, the password is considered strong
    return True

# Test the function with a password
password = input("Enter a password: ")
if is_strong_password(password):
    print("The password is strong.")
else:
    print("The password is not strong.")