/*
 * Experiment 10 - Task 1
 * Aim: Add two numbers using pointers.
 */
#include <stdio.h>

int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;            // pointers to integers

    printf("Enter the first number  : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);

    ptr1 = &num1;                // ptr1 stores the address of num1
    ptr2 = &num2;                // ptr2 stores the address of num2

    // *ptr1 and *ptr2 give the values stored at those addresses
    sum = *ptr1 + *ptr2;

    printf("Sum of %d and %d = %d\n", *ptr1, *ptr2, sum);

    return 0;
}
