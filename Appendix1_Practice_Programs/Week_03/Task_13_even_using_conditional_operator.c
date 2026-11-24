/*
 * Appendix 1 - Week 3 - Task 13
 * Aim: Check if a number is even or not using the conditional operator.
 */
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // condition ? value_if_true : value_if_false
    printf("%d is %s\n", number,
           (number % 2 == 0) ? "an even number" : "not an even number (it is odd)");

    return 0;
}
