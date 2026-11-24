/*
 * Appendix 1 - Week 5 - Task 22
 * Aim: Read a weekday number and print the weekday name using switch.
 *      (1 = Monday ... 7 = Sunday)
 */
#include <stdio.h>

int main()
{
    int day;

    printf("Enter the weekday number (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid weekday number! Please enter a number from 1 to 7.\n");
    }

    return 0;
}
