/*
 * Appendix 1 - Week 7 - Task 31
 * Aim: Find the LCM and GCD of two given numbers using a while loop.
 *
 * GCD (Euclid's method): replace (a, b) by (b, a % b) until b becomes 0.
 * LCM = (a x b) / GCD
 */
#include <stdio.h>

int main()
{
    int num1, num2, a, b, temp, gcd;
    long long lcm;

    printf("Enter the first number  : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0)
    {
        printf("Please enter positive numbers.\n");
        return 0;
    }

    a = num1;
    b = num2;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    lcm = (long long) num1 * num2 / gcd;

    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %lld\n", num1, num2, lcm);

    return 0;
}
