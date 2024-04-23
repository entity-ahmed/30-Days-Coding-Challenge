# Constant conversion factor
FAHRENHEIT_TO_CELSIUS_FACTOR = 5 / 9

# Get temperature in Fahrenheit from user input
fahrenheit_temp = float(input("Enter the temperature in Fahrenheit: "))

# Convert Fahrenheit to Celsius
celsius_temp = (fahrenheit_temp - 32) * FAHRENHEIT_TO_CELSIUS_FACTOR

# Display the result
print("The temperature in Celsius is:", celsius_temp)
