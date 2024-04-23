#include <stdio.h>

int main() {
    char choice;

    // Prompt the user for their choice
    printf("Do you want to go left or right? (L/R): ");
    scanf(" %c", &choice);

    // Check the user's choice and provide guidance
    if (choice == 'L' || choice == 'l') {
        printf("You chose to go left. There's a dark forest ahead.\n");
    } else if (choice == 'R' || choice == 'r') {
        printf("You chose to go right. There's a bright path ahead.\n");
    } else {
        printf("Invalid choice. Please enter 'L' or 'R'.\n");
    }

    return 0;
}
