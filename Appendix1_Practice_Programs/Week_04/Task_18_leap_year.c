/*
 * Appendix 1 - Week 4 - Task 18
 * Aim: Check if the year entered is a leap year or not.
 *
 * Rule: a year is a leap year if it is divisible by 400, or it is
 * divisible by 4 but not by 100.
 */
#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
