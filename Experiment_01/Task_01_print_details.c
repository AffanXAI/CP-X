/*
 * Experiment 1 - Task 1
 * Aim: Print name, age, class, division and UIN on the screen.
 *      Use escape sequences to format the output properly.
 */
#include <stdio.h>

int main()
{
    // \t gives a tab space, \n moves to a new line, \" prints a double quote
    printf("\n\t\t==============================\n");
    printf("\t\t\"STUDENT DETAILS\"\n");
    printf("\t\t==============================\n\n");

    printf("\tName     :\tAffan\n");
    printf("\tAge      :\t20\n");
    printf("\tClass    :\tFE (Sem 1)\n");
    printf("\tDivision :\tB\n");
    printf("\tUIN      :\t261P030\n");

    // \\ prints a single backslash
    printf("\n\tPath example : C:\\Programs\\Lab\n");

    return 0;
}
