/*
 * Appendix 1 - Week 8 - Task 41
 * Aim: Print Pascal's triangle using a recursive function.
 *
 * Every number in Pascal's triangle is the sum of the two numbers just
 * above it. The recursive function pascal(row, col) returns the number
 * at the given row and column (both counted from 0):
 *   - first and last number of every row is 1  (base case)
 *   - otherwise pascal(row-1, col-1) + pascal(row-1, col)
 */
#include <stdio.h>

int pascal(int row, int col)
{
    if (col == 0 || col == row)         // base case
    {
        return 1;
    }
    return pascal(row - 1, col - 1) + pascal(row - 1, col);
}

int main()
{
    int rows, row, col, space;

    printf("Enter the number of rows (1 to 12): ");
    scanf("%d", &rows);

    if (rows < 1 || rows > 12)
    {
        printf("Please enter a number from 1 to 12.\n");
        return 0;
    }

    for (row = 0; row < rows; row++)
    {
        // Leading spaces so that the triangle looks centred
        for (space = 0; space < (rows - row - 1) * 2; space++)
        {
            printf(" ");
        }
        for (col = 0; col <= row; col++)
        {
            printf("%4d", pascal(row, col));
        }
        printf("\n");
    }

    return 0;
}
