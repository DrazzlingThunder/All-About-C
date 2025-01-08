// Write a c program to give name of month and days of week according to user input .. 


#include <stdio.h>

int main() {
    int date, week, month, year;

  //Input for date

  printf("Enter today's date: ");
  scanf("%d",&date);
  
   
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

    // Input for month
    printf("Enter a number for the month (1-12): ");
    scanf("%d", &month);

    // Using switch to print the month
    switch (month) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid month number! Please enter a number between 1 and 12.\n");
            return 1;
    }


    return 0;
}
