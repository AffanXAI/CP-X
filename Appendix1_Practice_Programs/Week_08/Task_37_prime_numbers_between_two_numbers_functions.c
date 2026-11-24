/*
 * Appendix 1 - Week 8 - Task 37
 * Aim: Print all the prime numbers between two numbers entered by the
 *      user using functions.
 */
#include <stdio.h>

int isPrime(int number);                    // returns 1 if prime, 0 otherwise
void printPrimes(int start, int end);       // prints the primes in the range

int main()
{
    int start, end, temp;

    printf("Enter the first number  : ");
    scanf("%d", &start);
    printf("Enter the second number : ");
    scanf("%d", &end);

    if (start > end)                        // swap if entered in the wrong order
    {
        temp = start;
        start = end;
        end = temp;
    }

    printPrimes(start, end);

    return 0;
}

int isPrime(int number)
{
    int i;

    if (number <= 1)
    {
        return 0;
    }
    for (i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void printPrimes(int start, int end)
{
    int i, count = 0;

    printf("Prime numbers between %d and %d: ", start, end);
    for (i = start; i <= end; i++)
    {
        if (isPrime(i) == 1)
        {
            printf("%d ", i);
            count++;
        }
    }
    if (count == 0)
    {
        printf("none");
    }
    printf("\n");
}
