/*
 * Appendix 1 - Week 6 - Task 27
 * Aim: Find the sum and average of the numbers entered by the user.
 *      The user first tells how many numbers will be entered.
 */
#include <stdio.h>

int main()
{
    int count, i;
    float number, sum = 0, average;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &count);

    if (count <= 0)
    {
        printf("Please enter a positive count.\n");
        return 0;
    }

    for (i = 1; i <= count; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%f", &number);
        sum = sum + number;
    }

    average = sum / count;

    printf("Sum     = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
