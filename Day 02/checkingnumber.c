#include <stdio.h>

int main() {
    int num;

    // Input a number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if number is positive, negative, or zero
    if (num > 0)
        printf("%d is a positive number.\n", num);
    else if (num < 0)
        printf("%d is a negative number.\n", num);
    else
        printf("The number is zero.\n");

    return 0;
}
