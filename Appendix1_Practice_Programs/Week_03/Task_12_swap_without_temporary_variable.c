/*
 * Appendix 1 - Week 3 - Task 12
 * Aim: Swap two numbers without the help of a temporary variable.
 */
#include <stdio.h>

int main()
{
    int first, second;

    printf("Enter the first number  : ");
    scanf("%d", &first);
    printf("Enter the second number : ");
    scanf("%d", &second);

    printf("\nBefore swapping: first = %d, second = %d\n", first, second);

    first = first + second;     // first now holds the sum
    second = first - second;    // sum - second = old first
    first = first - second;     // sum - old first = old second

    printf("After swapping : first = %d, second = %d\n", first, second);

    return 0;
}
