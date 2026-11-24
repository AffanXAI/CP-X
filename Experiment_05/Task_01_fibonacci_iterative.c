/*
 * Experiment 5 - Task 1
 * Aim: Generate the Fibonacci series for N terms using the
 *      ITERATIVE method (using a loop).
 */
#include <stdio.h>

// Prints the first n terms of the Fibonacci series using a loop
void fibonacciIterative(int n)
{
    unsigned long long first = 0, second = 1, next;
    int i;

    for (i = 1; i <= n; i++)
    {
        printf("%llu ", first);
        next = first + second;   // next term is the sum of previous two
        first = second;
        second = next;
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    if (n <= 0 || n > 90)     // larger terms do not fit in the variable
    {
        printf("Please enter a number from 1 to 90.\n");
        return 0;
    }

    printf("Fibonacci series (iterative) for %d terms:\n", n);
    fibonacciIterative(n);

    return 0;
}
