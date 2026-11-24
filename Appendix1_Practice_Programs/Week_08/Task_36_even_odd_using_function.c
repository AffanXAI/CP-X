/*
 * Appendix 1 - Week 8 - Task 36
 * Aim: Check whether a given number is even or odd using a function.
 */
#include <stdio.h>

// Function declaration: returns 1 if the number is even, otherwise 0
int isEven(int number);

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isEven(number) == 1)      // function call
    {
        printf("%d is an even number.\n", number);
    }
    else
    {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}

// Function definition
int isEven(int number)
{
    if (number % 2 == 0)
    {
        return 1;
    }
    return 0;
}
