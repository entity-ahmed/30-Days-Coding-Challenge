def is_palindrome(word):
    # Convert the word to lowercase to handle case-insensitive comparison
    word = word.lower()
    
    # Remove non-alphanumeric characters from the word
    word = ''.join(char for char in word if char.isalnum())
    
    # Check if the word is equal to its reverse
    return word == word[::-1]

# Test the function with example words
words = ["radar", "level", "Python", "madam", "hello"]
for word in words:
    if is_palindrome(word):
        print(f"{word} is a palindrome.")
    else:
        print(f"{word} is not a palindrome.")
