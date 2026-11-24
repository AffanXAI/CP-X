/*
 * Appendix 1 - Week 9 - Task 46
 * Aim: Calculate the determinant of a 3 x 3 matrix.
 *
 * For the matrix   | a b c |
 *                  | d e f |
 *                  | g h i |
 * determinant = a(ei - fh) - b(di - fg) + c(dh - eg)
 */
#include <stdio.h>

int main()
{
    int m[3][3];
    int i, j, determinant;

    printf("Enter the elements of the 3 x 3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("m[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }

    determinant = m[0][0] * (m[1][1] * m[2][2] - m[1][2] * m[2][1])
                - m[0][1] * (m[1][0] * m[2][2] - m[1][2] * m[2][0])
                + m[0][2] * (m[1][0] * m[2][1] - m[1][1] * m[2][0]);

    printf("\nThe matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", m[i][j]);
        }
        printf("\n");
    }

    printf("\nDeterminant = %d\n", determinant);

    return 0;
}
