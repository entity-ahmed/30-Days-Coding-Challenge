def min_max(numbers):
    if not numbers:
        return None  # Return None if the list is empty
    
    smallest = min(numbers)
    largest = max(numbers)
    return (smallest, largest)

# Get a list of numbers from the user
numbers = [int(x) for x in input("Enter a list of numbers separated by spaces: ").split()]

# Call the function and print the result
result = min_max(numbers)
print("Smallest and largest numbers:", result)
