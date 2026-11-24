/*
 * Appendix 1 - Week 5 - Task 25
 * Aim: Find the height of a building when the user enters the distance
 *      from the building and the angle of elevation in degrees.
 *
 * From the right-angled triangle:  tan(angle) = height / distance
 *                                  height = distance x tan(angle)
 *
 * tan() works with radians, so degrees are converted first:
 * radians = degrees x PI / 180
 * (On some systems you may need to compile with:  gcc file.c -o file -lm)
 */
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    float distance, angleDegrees, angleRadians, height;

    printf("Enter the distance from the building (in metres) : ");
    scanf("%f", &distance);
    printf("Enter the angle of elevation (in degrees)        : ");
    scanf("%f", &angleDegrees);

    if (distance <= 0 || angleDegrees <= 0 || angleDegrees >= 90)
    {
        printf("Invalid input! Distance must be positive and the angle must be between 0 and 90.\n");
        return 0;
    }

    angleRadians = angleDegrees * PI / 180;
    height = distance * tan(angleRadians);

    printf("Height of the building = %.2f metres\n", height);

    return 0;
}
