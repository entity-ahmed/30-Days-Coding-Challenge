# Define two dictionaries
dict1 = {'a': 1, 'b': 2, 'c': 3}
dict2 = {'d': 4, 'e': 5, 'f': 6}

# Merge the dictionaries into one using the update() method
merged_dict = dict1.copy()
merged_dict.update(dict2)

# Print the merged dictionary
print("Merged dictionary:")
print(merged_dict)
