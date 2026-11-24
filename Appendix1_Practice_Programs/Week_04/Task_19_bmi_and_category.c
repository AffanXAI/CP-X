/*
 * Appendix 1 - Week 4 - Task 19
 * Aim: Find the Body Mass Index (BMI) of the user when height and weight
 *      are entered. Also find the BMI category using an else-if ladder.
 *
 *   Underweight   : BMI < 18.5
 *   Normal weight : 18.5 to 24.9
 *   Overweight    : 25 to 29.9
 *   Obesity       : 30 or greater
 *
 * BMI = weight (kg) / (height (m) x height (m))
 * Values between 24.9 and 25 are treated as Normal (BMI below 25).
 */
#include <stdio.h>

int main()
{
    float height, weight, bmi;

    printf("Enter your height in metres (e.g. 1.70) : ");
    scanf("%f", &height);
    printf("Enter your weight in kilograms          : ");
    scanf("%f", &weight);

    if (height <= 0 || weight <= 0)
    {
        printf("Invalid input! Height and weight must be positive.\n");
        return 0;
    }

    bmi = weight / (height * height);

    printf("Your BMI = %.1f\n", bmi);

    if (bmi < 18.5)
    {
        printf("Category : Underweight\n");
    }
    else if (bmi < 25)
    {
        printf("Category : Normal weight\n");
    }
    else if (bmi < 30)
    {
        printf("Category : Overweight\n");
    }
    else
    {
        printf("Category : Obesity\n");
    }

    return 0;
}
