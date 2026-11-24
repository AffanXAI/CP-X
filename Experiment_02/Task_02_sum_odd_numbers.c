/*
 * Experiment 2 - Task 2
 * Aim: Find the sum of all the odd numbers between two numbers
 *      entered by the user.
 *
 * If the first number is larger than the second, they are swapped so
 * that the program works in either order. The two entered numbers are
 * not included ("between" the numbers).
 */
#include <stdio.h>

int main()
{
    int start, end, i, temp;
    int sum = 0;

    printf("Enter the first number  : ");
    scanf("%d", &start);
    printf("Enter the second number : ");
    scanf("%d", &end);

    // Make sure start is the smaller number
    if (start > end)
    {
        temp = start;
        start = end;
        end = temp;
    }

    printf("Odd numbers between %d and %d are: ", start, end);

    for (i = start + 1; i < end; i++)
    {
        if (i % 2 != 0)          // odd number check (works for negatives too)
        {
            printf("%d ", i);
            sum = sum + i;
        }
    }

    printf("\nSum of odd numbers = %d\n", sum);

    return 0;
}
