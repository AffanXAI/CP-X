/*
 * Appendix 1 - Week 6 - Task 28
 * Aim: Print the Fibonacci series till the number entered by the
 *      user is reached (all terms less than or equal to that number).
 */
#include <stdio.h>

int main()
{
    long long limit;
    long long first = 0, second = 1, next;

    printf("Enter the number up to which the series should be printed: ");
    scanf("%lld", &limit);

    if (limit < 0)
    {
        printf("Please enter a number that is 0 or greater.\n");
        return 0;
    }

    printf("Fibonacci series up to %lld: ", limit);

    while (first <= limit)
    {
        printf("%lld ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}
