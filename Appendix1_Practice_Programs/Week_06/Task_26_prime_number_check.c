/*
 * Appendix 1 - Week 6 - Task 26
 * Aim: Find if the entered number is a prime number or not.
 *
 * A prime number is greater than 1 and is divisible only by 1 and itself.
 */
#include <stdio.h>

int main()
{
    int number, i;
    int isPrime = 1;              // 1 = prime (assumed), 0 = not prime

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i * i <= number; i++)
        {
            if (number % i == 0)  // found a divisor, so it is not prime
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
