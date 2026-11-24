/*
 * Appendix 1 - Week 7 - Task 34
 * Aim: Convert a binary number to a decimal number using a while loop.
 *
 * Method: take the binary digits from the right, multiply each by the
 * matching power of 2 (1, 2, 4, 8, ...) and add them.
 * The binary number is entered as a normal number made of 0s and 1s
 * (up to 18 digits).
 */
#include <stdio.h>

int main()
{
    long long binary, temp;
    long long decimal = 0, power = 1;
    int digit;

    printf("Enter a binary number (only 0s and 1s): ");
    scanf("%lld", &binary);

    if (binary < 0)
    {
        printf("Please enter a binary number that is not negative.\n");
        return 0;
    }

    temp = binary;

    while (temp > 0)
    {
        digit = temp % 10;               // last binary digit

        if (digit != 0 && digit != 1)    // a binary number has only 0 and 1
        {
            printf("Invalid binary number! It contains the digit %d.\n", digit);
            return 0;
        }

        decimal = decimal + digit * power;
        power = power * 2;
        temp = temp / 10;
    }

    printf("Decimal of %lld = %lld\n", binary, decimal);

    return 0;
}
