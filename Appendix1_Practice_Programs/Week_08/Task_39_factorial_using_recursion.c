/*
 * Appendix 1 - Week 8 - Task 39
 * Aim: Find the factorial of a number using recursion.
 *
 * n! = n x (n-1)!   and   0! = 1! = 1
 */
#include <stdio.h>

unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)               // base case
    {
        return 1;
    }
    return n * factorial(n - 1);        // recursive case
}

int main()
{
    int number;

    printf("Enter a number (0 to 20): ");
    scanf("%d", &number);

    if (number < 0 || number > 20)
    {
        printf("Please enter a number from 0 to 20 (larger factorials do not fit in the variable).\n");
        return 0;
    }

    printf("Factorial of %d = %llu\n", number, factorial(number));

    return 0;
}
