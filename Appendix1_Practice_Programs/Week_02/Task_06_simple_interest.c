/*
 * Appendix 1 - Week 2 - Task 6
 * Aim: Calculate the simple interest taking principal, rate of
 *      interest and number of years as inputs from the user.
 */
#include <stdio.h>

int main()
{
    float principal, rate, years, interest;

    printf("Enter the principal amount          : ");
    scanf("%f", &principal);
    printf("Enter the rate of interest (%% p.a.) : ");
    scanf("%f", &rate);
    printf("Enter the number of years           : ");
    scanf("%f", &years);

    // Simple Interest = (P x R x T) / 100
    interest = (principal * rate * years) / 100;

    printf("Simple interest = %.2f\n", interest);
    printf("Total amount    = %.2f\n", principal + interest);

    return 0;
}
