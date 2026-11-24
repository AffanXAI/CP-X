/*
 * Appendix 1 - Week 2 - Task 5
 * Aim: Calculate the area of a square.
 */
#include <stdio.h>

int main()
{
    float side, area;

    printf("Enter the side of the square: ");
    scanf("%f", &side);

    area = side * side;       // area = side x side

    printf("Area of the square = %.2f\n", area);

    return 0;
}
