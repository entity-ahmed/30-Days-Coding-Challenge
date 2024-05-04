def add_item_to_tuple(tup, item):
    return tup + (item,)

# Create a tuple
my_tuple = (1, 2, 3, 4, 5)

# Add an item to the tuple
new_item = 6
my_tuple = add_item_to_tuple(my_tuple, new_item)

# Print the modified tuple
print("Modified tuple:", my_tuple)
