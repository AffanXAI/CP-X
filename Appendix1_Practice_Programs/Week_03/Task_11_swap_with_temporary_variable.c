/*
 * Appendix 1 - Week 3 - Task 11
 * Aim: Swap two numbers with the help of a temporary variable.
 */
#include <stdio.h>

int main()
{
    int first, second, temp;

    printf("Enter the first number  : ");
    scanf("%d", &first);
    printf("Enter the second number : ");
    scanf("%d", &second);

    printf("\nBefore swapping: first = %d, second = %d\n", first, second);

    temp = first;       // store first in temp
    first = second;     // copy second into first
    second = temp;      // copy old first (from temp) into second

    printf("After swapping : first = %d, second = %d\n", first, second);

    return 0;
}
