/*
 * Appendix 1 - Week 8 - Task 40
 * Aim: Print the Fibonacci series using recursion.
 */
#include <stdio.h>

// Returns the Fibonacci term at the given position (0, 1, 1, 2, 3, 5, ...)
int fibonacci(int position)
{
    if (position == 0)
    {
        return 0;
    }
    if (position == 1)
    {
        return 1;
    }
    return fibonacci(position - 1) + fibonacci(position - 2);
}

int main()
{
    int n, i;

    printf("Enter the number of terms (1 to 40): ");
    scanf("%d", &n);

    if (n <= 0 || n > 40)     // recursion becomes very slow for larger N
    {
        printf("Please enter a number from 1 to 40.\n");
        return 0;
    }

    printf("Fibonacci series: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
