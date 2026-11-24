/*
 * Appendix 1 - Week 11 - Task 53
 * Aim: Find the permutation and combination for given values of n and r
 *      with the help of pointers.
 *
 *   nPr = n! / (n - r)!
 *   nCr = n! / (r! x (n - r)!)
 *
 * The function receives pointers to n and r and stores its answers
 * through two more pointers.
 */
#include <stdio.h>

unsigned long long factorial(int number)
{
    unsigned long long result = 1;
    int i;

    for (i = 2; i <= number; i++)
    {
        result = result * i;
    }
    return result;
}

// n and r are read through pointers; results are written through pointers
void findPermutationCombination(int *n, int *r, unsigned long long *permutation, unsigned long long *combination)
{
    *permutation = factorial(*n) / factorial(*n - *r);
    *combination = factorial(*n) / (factorial(*r) * factorial(*n - *r));
}

int main()
{
    int n, r;
    unsigned long long permutation, combination;

    printf("Enter the value of n (0 to 20): ");
    scanf("%d", &n);
    printf("Enter the value of r (0 to n) : ");
    scanf("%d", &r);

    if (n < 0 || n > 20 || r < 0 || r > n)
    {
        printf("Invalid input! n must be from 0 to 20 and r must be from 0 to n.\n");
        return 0;
    }

    findPermutationCombination(&n, &r, &permutation, &combination);

    printf("%dP%d (permutation)  = %llu\n", n, r, permutation);
    printf("%dC%d (combination)  = %llu\n", n, r, combination);

    return 0;
}
