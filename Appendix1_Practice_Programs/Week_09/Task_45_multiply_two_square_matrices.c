/*
 * Appendix 1 - Week 9 - Task 45
 * Aim: Multiplication of two square matrices.
 *
 * For n x n matrices A and B, the product C is:
 *   C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + ... + A[i][n-1]*B[n-1][j]
 */
#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int n, i, j, k;

    printf("Enter the order n of the square matrices (1 to 10): ");
    scanf("%d", &n);

    if (n < 1 || n > 10)
    {
        printf("Invalid order! Please enter a value between 1 and 10.\n");
        return 0;
    }

    printf("\nEnter the elements of matrix A:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the elements of matrix B:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("B[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("\nProduct of the two matrices (A x B):\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%6d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
