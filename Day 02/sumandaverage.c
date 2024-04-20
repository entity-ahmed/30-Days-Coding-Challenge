#include <stdio.h>

int main() {
    float num1, num2, sum, average;

    // Input two numbers from user
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculate sum
    sum = num1 + num2;

    // Calculate average
    average = sum / 2;

    // Display the sum and average
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
