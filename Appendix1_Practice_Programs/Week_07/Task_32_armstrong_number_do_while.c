/*
 * Appendix 1 - Week 7 - Task 32
 * Aim: Find if the entered three digit number is an Armstrong number
 *      or not using a do-while loop.
 *
 * A three digit Armstrong number equals the sum of the cubes of its
 * digits. Example: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27
 */
#include <stdio.h>

int main()
{
    int number, temp, digit;
    int sum = 0;

    printf("Enter a three digit number: ");
    scanf("%d", &number);

    if (number < 100 || number > 999)
    {
        printf("Please enter a three digit number (100 to 999).\n");
        return 0;
    }

    temp = number;

    do
    {
        digit = temp % 10;                 // last digit
        sum = sum + digit * digit * digit; // add the cube of the digit
        temp = temp / 10;                  // remove the last digit
    } while (temp != 0);

    if (sum == number)
    {
        printf("%d is an Armstrong number.\n", number);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
