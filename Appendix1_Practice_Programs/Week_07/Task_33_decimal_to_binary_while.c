/*
 * Appendix 1 - Week 7 - Task 33
 * Aim: Convert a decimal number into binary using a while loop.
 *
 * Method: divide the number by 2 again and again and note the
 * remainders. The binary number is the remainders read in reverse.
 */
#include <stdio.h>

int main()
{
    int decimal, number, i;
    int bits[32];
    int count = 0;

    printf("Enter a decimal number (0 or greater): ");
    scanf("%d", &decimal);

    if (decimal < 0)
    {
        printf("Please enter a number that is 0 or greater.\n");
        return 0;
    }

    number = decimal;

    if (number == 0)
    {
        bits[count] = 0;
        count++;
    }

    while (number > 0)
    {
        bits[count] = number % 2;   // remainder is the next binary digit
        number = number / 2;
        count++;
    }

    printf("Binary of %d = ", decimal);
    for (i = count - 1; i >= 0; i--)     // print the remainders in reverse
    {
        printf("%d", bits[i]);
    }
    printf("\n");

    return 0;
}
