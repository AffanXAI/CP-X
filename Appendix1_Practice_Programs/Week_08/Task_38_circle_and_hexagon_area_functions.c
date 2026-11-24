/*
 * Appendix 1 - Week 8 - Task 38
 * Aim: Find the area of a circle and a hexagon and find which shape has
 *      the larger area, using functions.
 *
 * Circle  : area = PI x r x r                      (r = radius)
 * Hexagon : area = (3 x sqrt(3) / 2) x a x a       (regular hexagon, a = side)
 *           (3 x sqrt(3) / 2 = 2.598076)
 */
#include <stdio.h>

#define PI 3.14159
#define HEXAGON_FACTOR 2.598076

float circleArea(float radius)
{
    return PI * radius * radius;
}

float hexagonArea(float side)
{
    return HEXAGON_FACTOR * side * side;
}

int main()
{
    float radius, side, areaCircle, areaHexagon;

    printf("Enter the radius of the circle       : ");
    scanf("%f", &radius);
    printf("Enter the side of the regular hexagon: ");
    scanf("%f", &side);

    if (radius <= 0 || side <= 0)
    {
        printf("Invalid input! Values must be positive.\n");
        return 0;
    }

    areaCircle = circleArea(radius);
    areaHexagon = hexagonArea(side);

    printf("\nArea of the circle  = %.2f\n", areaCircle);
    printf("Area of the hexagon = %.2f\n", areaHexagon);

    if (areaCircle > areaHexagon)
    {
        printf("The circle has the larger area.\n");
    }
    else if (areaHexagon > areaCircle)
    {
        printf("The hexagon has the larger area.\n");
    }
    else
    {
        printf("Both shapes have the same area.\n");
    }

    return 0;
}
