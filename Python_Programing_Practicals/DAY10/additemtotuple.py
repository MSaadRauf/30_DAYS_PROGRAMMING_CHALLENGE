def add_item_to_tuple(input_tuple, item):
    new_tuple = input_tuple + (item,)
    return new_tuple

# Example usage:
original_tuple = (1, 2, 3, 4)
item_to_add = 5
new_tuple = add_item_to_tuple(original_tuple, item_to_add)
print("Original tuple:", original_tuple)
print("New tuple with added item:", new_tuple)
