/*
 * Appendix 1 - Week 5 - Task 21
 * Aim: Find the roots of a quadratic equation (with real roots)
 *      using the math library.
 *
 * Equation: a x^2 + b x + c = 0
 * Roots   : x = (-b +/- sqrt(b^2 - 4ac)) / (2a)
 *
 * sqrt() comes from <math.h>.
 * (On some systems you may need to compile with:  gcc file.c -o file -lm)
 */
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, root1, root2;

    printf("Enter the coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("This is not a quadratic equation (a must not be 0).\n");
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
    {
        printf("The roots are not real (discriminant = %.2f is negative).\n", discriminant);
        return 0;
    }

    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);

    if (discriminant == 0)
    {
        printf("The roots are real and equal: %.2f\n", root1);
    }
    else
    {
        printf("The roots are real and different.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }

    return 0;
}
