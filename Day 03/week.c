#include <stdio.h>

int main() {
    // Define constant for the number of days in a week
    const int DAYS_IN_WEEK = 7;

    // Array to store the names of the days
    char* days[DAYS_IN_WEEK] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    // Display each day's name
    printf("Days of the week:\n");
    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        printf("%d. %s\n", i+1, days[i]);
    }

    return 0;
}
