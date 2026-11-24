/*
 * Appendix 1 - Week 3 - Task 15
 * Aim: Find the sum of two integers without using the '+' operator.
 *
 * Idea: XOR (^) adds the bits without carry, AND (&) finds the carry bits.
 * The carry is shifted left by one position and added again, until no
 * carry is left.
 */
#include <stdio.h>

int main()
{
    int num1, num2;
    unsigned int a, b, carry;

    printf("Enter the first integer  : ");
    scanf("%d", &num1);
    printf("Enter the second integer : ");
    scanf("%d", &num2);

    a = (unsigned int) num1;
    b = (unsigned int) num2;

    while (b != 0)
    {
        carry = (a & b) << 1;   // positions where both bits are 1 produce a carry
        a = a ^ b;              // sum without the carry
        b = carry;              // add the carry in the next round
    }

    printf("Sum = %d\n", (int) a);

    return 0;
}
