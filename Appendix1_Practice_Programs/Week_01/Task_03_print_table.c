/*
 * Appendix 1 - Week 1 - Task 3
 * Aim: Print the following table using printf.
 *
 * | Roll No. | Name of Student     | Marks |
 * | 1        | Jon Doe             | 35    |
 * | 2        | Ranchordas Chanchad | 37    |
 * | 3        | Sanjay Singh        | 56    |
 */
#include <stdio.h>

int main()
{
    // %-8s means: print the text left-aligned in a width of 8 characters
    printf("+----------+----------------------+-------+\n");
    printf("| %-8s | %-20s | %-5s |\n", "Roll No.", "Name of Student", "Marks");
    printf("+----------+----------------------+-------+\n");
    printf("| %-8d | %-20s | %-5d |\n", 1, "Jon Doe", 35);
    printf("+----------+----------------------+-------+\n");
    printf("| %-8d | %-20s | %-5d |\n", 2, "Ranchordas Chanchad", 37);
    printf("+----------+----------------------+-------+\n");
    printf("| %-8d | %-20s | %-5d |\n", 3, "Sanjay Singh", 56);
    printf("+----------+----------------------+-------+\n");

    return 0;
}
