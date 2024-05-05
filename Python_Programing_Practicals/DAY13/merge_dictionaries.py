def merge_dicts(dict1, dict2):
    merged_dict = dict1.copy()  # Make a copy of the first dictionary to preserve its original content
    merged_dict.update(dict2)   # Update the copy with the second dictionary
    return merged_dict

# Example dictionaries
dict1 = {'a': 1, 'b': 2, 'c': 3}
dict2 = {'d': 4, 'e': 5, 'f': 6}

# Merge the dictionaries
merged_dict = merge_dicts(dict1, dict2)

# Print the merged dictionary
print("Merged dictionary:", merged_dict)
