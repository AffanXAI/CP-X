/*
 * Appendix 1 - Week 2 - Task 7
 * Aim: Calculate the sum and average of three numbers.
 */
#include <stdio.h>

int main()
{
    float num1, num2, num3, sum, average;

    printf("Enter the first number  : ");
    scanf("%f", &num1);
    printf("Enter the second number : ");
    scanf("%f", &num2);
    printf("Enter the third number  : ");
    scanf("%f", &num3);

    sum = num1 + num2 + num3;
    average = sum / 3;

    printf("Sum     = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
