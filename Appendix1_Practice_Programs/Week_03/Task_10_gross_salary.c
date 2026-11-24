/*
 * Appendix 1 - Week 3 - Task 10
 * Aim: Calculate the gross salary of an employee given the basic salary.
 *      Travelling Allowance (TA)   = 20% of basic
 *      Dearness Allowance (DA)     = 80% of basic
 *      Home Rental Allowance (HRA) = 15% of basic
 */
#include <stdio.h>

int main()
{
    float basic, ta, da, hra, gross;

    printf("Enter the basic salary: ");
    scanf("%f", &basic);

    ta = basic * 20 / 100;
    da = basic * 80 / 100;
    hra = basic * 15 / 100;

    gross = basic + ta + da + hra;

    printf("\nBasic salary                 = %.2f\n", basic);
    printf("Travelling Allowance (20%%)   = %.2f\n", ta);
    printf("Dearness Allowance (80%%)     = %.2f\n", da);
    printf("Home Rental Allowance (15%%)  = %.2f\n", hra);
    printf("Gross salary                 = %.2f\n", gross);

    return 0;
}
