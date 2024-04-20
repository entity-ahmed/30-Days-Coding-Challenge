#include <stdio.h>

int main() {
    char name[100];

    // Prompt the user for their name
    printf("Enter your name: ");
    scanf("%s", name);

    // Print personalized greeting
    printf("Hello, %s! Welcome to the program.\n", name);

    return 0;
}
