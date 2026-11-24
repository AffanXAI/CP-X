/*
 * Appendix 1 - Week 9 - Task 42
 * Aim: Read n values into an array and display them in reverse order.
 */
#include <stdio.h>

int main()
{
    int numbers[100];
    int n, i;

    printf("Enter the number of values (1 to 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid size! Please enter a value between 1 and 100.\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Values in reverse order: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
