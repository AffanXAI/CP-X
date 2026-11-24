/*
 * Appendix 1 - Week 4 - Task 20
 * Aim: Read three integer values from the keyboard and display whether
 *      they are the sides of a right angled triangle or not.
 *
 * Pythagoras theorem: (hypotenuse)^2 = (side1)^2 + (side2)^2
 * Any one of the three numbers could be the hypotenuse, so all three
 * possibilities are checked.
 */
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Sides must be positive numbers.\n");
    }
    else if ((a * a + b * b == c * c) ||
             (a * a + c * c == b * b) ||
             (b * b + c * c == a * a))
    {
        printf("%d, %d and %d are the sides of a right angled triangle.\n", a, b, c);
    }
    else
    {
        printf("%d, %d and %d are NOT the sides of a right angled triangle.\n", a, b, c);
    }

    return 0;
}
