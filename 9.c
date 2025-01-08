// We are going to use switch as conditional statements 
// This program will print days of week as inputted by user ... 

#include <stdio.h>

int main() {
    int week;

    // Input for week
    printf("Enter a number for the week (1-7): ");
    scanf("%d", &week);

    // Using switch to print the week
    switch (week) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid week number! Please enter a number between 1 and 7.\n");
            return 1;
    }

    return 0;
}

/*
OUTPUT
Enter a number for the week (1-7): 1
Sunday

Enter a number for the week (1-7): 3
Tuesday

Enter a number for the week (1-7): 8
Invalid week number! Please enter a number between 1 and 7.

*/
