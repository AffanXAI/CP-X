/*
 * Appendix 1 - Week 9 - Task 43
 * Aim: Sort the elements of an array in ascending order.
 *
 * Method: Bubble sort - neighbouring elements are compared and swapped
 * if they are in the wrong order. This is repeated until the array is sorted.
 */
#include <stdio.h>

int main()
{
    int numbers[100];
    int n, i, j, temp;

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid size! Please enter a value between 1 and 100.\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])      // wrong order, so swap
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Array in ascending order: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
