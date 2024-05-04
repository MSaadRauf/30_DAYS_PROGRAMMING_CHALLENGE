# Function to get the second element of a tuple
def get_second_element(item):
    return item[1]

# List of tuples
list_of_tuples = [(1, 5), (2, 3), (3, 6), (4, 2), (5, 1)]

# Sort the list of tuples by the second item in each tuple
sorted_list = sorted(list_of_tuples, key=get_second_element)

# Print the sorted list
print("Sorted list of tuples:", sorted_list)
