#include <stdio.h>

int main() {
    int number, i, isPrime = 1;

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is less than 2
    if (number < 2) {
        printf("%d is not a prime number.\n", number);
        return 0;
    }

    // Check for prime
    for (i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // Output the result
    if (isPrime == 1) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
