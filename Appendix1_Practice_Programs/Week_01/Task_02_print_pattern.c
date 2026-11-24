/*
 * Appendix 1 - Week 1 - Task 2
 * Aim: Print the following pattern using printf.
 *
 * *                   *
 * * *               * *
 * * * *           * * *
 * * * * *       * * * *
 * * * * * *   * * * * *      (as shown in the manual: the stars grow to 5
 * ...                         on each side and then shrink back to 1)
 *
 * The pattern has 10 lines. Every line has a left block and a right block
 * of stars with the same number of stars.
 */
#include <stdio.h>

int main()
{
    int row, i;
    int stars;

    for (row = 1; row <= 10; row++)
    {
        // Lines 1-5 have 1..5 stars, lines 6-10 have 5..1 stars
        stars = (row <= 5) ? row : 11 - row;

        // Left block of stars
        for (i = 1; i <= stars; i++)
        {
            printf("* ");
        }

        // Spaces between the two blocks (more spaces when there are fewer stars)
        for (i = 1; i <= (5 - stars) * 4 + 2; i++)
        {
            printf(" ");
        }

        // Right block of stars
        for (i = 1; i <= stars; i++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
