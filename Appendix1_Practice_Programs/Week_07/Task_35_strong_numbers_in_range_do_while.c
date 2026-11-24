/*
 * Appendix 1 - Week 7 - Task 35
 * Aim: Find the Strong Numbers within a range of numbers using a
 *      do-while loop.
 *
 * A strong number equals the sum of the factorials of its digits.
 * Example: 145 = 1! + 4! + 5! = 1 + 24 + 120
 */
#include <stdio.h>

int main()
{
    int start, end, number, temp, digit, sum;
    int factorial[10];
    int i, found = 0;

    printf("Enter the start of the range : ");
    scanf("%d", &start);
    printf("Enter the end of the range   : ");
    scanf("%d", &end);

    if (start < 1 || end < start)
    {
        printf("Invalid range! Start must be 1 or more and end must not be less than start.\n");
        return 0;
    }

    // Factorials of the digits 0 to 9, calculated once
    factorial[0] = 1;
    for (i = 1; i <= 9; i++)
    {
        factorial[i] = factorial[i - 1] * i;
    }

    printf("Strong numbers between %d and %d: ", start, end);

    number = start;
    do
    {
        sum = 0;
        temp = number;
        while (temp > 0)
        {
            digit = temp % 10;
            sum = sum + factorial[digit];
            temp = temp / 10;
        }

        if (sum == number)
        {
            printf("%d ", number);
            found++;
        }
        number++;
    } while (number <= end);

    if (found == 0)
    {
        printf("none");
    }
    printf("\n");

    return 0;
}
