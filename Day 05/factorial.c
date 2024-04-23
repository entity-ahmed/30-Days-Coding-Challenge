#include <stdio.h>

int main() {
    int number, factorial = 1;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate factorial
    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    // Print the factorial
    printf("The factorial of %d is: %d\n", number, factorial);

    return 0;
}
