/*
 * Appendix 1 - Week 3 - Task 14
 * Aim: Find the greatest number amongst three entered numbers using
 *      the conditional operator.
 */
#include <stdio.h>

int main()
{
    int a, b, c, greatest;

    printf("Enter the first number  : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Enter the third number  : ");
    scanf("%d", &c);

    // Nested conditional operators
    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The greatest number is: %d\n", greatest);

    return 0;
}
