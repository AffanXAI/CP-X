/*
 * Appendix 1 - Week 2 - Task 8
 * Aim: Calculate the perimeter (circumference) and area of a circle
 *      with the help of constants.
 */
#include <stdio.h>

#define PI 3.14159                 // constant created with #define

int main()
{
    const float TWO = 2.0;         // constant created with the const keyword
    float radius, perimeter, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    perimeter = TWO * PI * radius; // perimeter = 2 x PI x r
    area = PI * radius * radius;   // area = PI x r x r

    printf("Perimeter of the circle = %.2f\n", perimeter);
    printf("Area of the circle      = %.2f\n", area);

    return 0;
}
