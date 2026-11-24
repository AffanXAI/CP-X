/*
 * Appendix 1 - Week 9 - Task 44
 * Aim: Find the second largest element in an array.
 *
 * "Second largest" means the largest value that is smaller than the
 * largest value (repeated copies of the largest are not counted again).
 */
#include <stdio.h>

int main()
{
    int numbers[100];
    int n, i, largest, secondLargest;
    int secondFound = 0;               // becomes 1 when a second largest exists

    printf("Enter the number of elements (2 to 100): ");
    scanf("%d", &n);

    if (n < 2 || n > 100)
    {
        printf("Invalid size! Please enter a value between 2 and 100.\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Step 1: find the largest element
    largest = numbers[0];
    for (i = 1; i < n; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    // Step 2: find the largest element among those smaller than "largest"
    for (i = 0; i < n; i++)
    {
        if (numbers[i] < largest)
        {
            if (secondFound == 0 || numbers[i] > secondLargest)
            {
                secondLargest = numbers[i];
                secondFound = 1;
            }
        }
    }

    printf("Largest element        = %d\n", largest);
    if (secondFound == 1)
    {
        printf("Second largest element = %d\n", secondLargest);
    }
    else
    {
        printf("There is no second largest element (all elements are equal).\n");
    }

    return 0;
}
