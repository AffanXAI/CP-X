/*
 * Appendix 1 - Week 10 - Task 51
 * Aim: Design a structure student_record to contain name, roll_number
 *      and total marks obtained. Read the data of 10 students from the
 *      user and display the first three toppers on the screen.
 */
#include <stdio.h>

#define STUDENTS 10

struct student_record
{
    char name[50];
    int roll_number;
    float total_marks;
};

int main()
{
    struct student_record students[STUDENTS];
    struct student_record temp;
    int i, j;

    for (i = 0; i < STUDENTS; i++)
    {
        printf("\n--- Enter details of student %d ---\n", i + 1);
        printf("Name         : ");
        scanf(" %49[^\n]", students[i].name);
        printf("Roll number  : ");
        scanf("%d", &students[i].roll_number);
        printf("Total marks  : ");
        scanf("%f", &students[i].total_marks);
    }

    // Sort the students in descending order of total marks (selection sort)
    for (i = 0; i < STUDENTS - 1; i++)
    {
        for (j = i + 1; j < STUDENTS; j++)
        {
            if (students[j].total_marks > students[i].total_marks)
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\n========== FIRST THREE TOPPERS ==========\n");
    for (i = 0; i < 3; i++)
    {
        printf("Rank %d : %s (Roll No. %d) - %.2f marks\n",
               i + 1, students[i].name, students[i].roll_number, students[i].total_marks);
    }

    return 0;
}
