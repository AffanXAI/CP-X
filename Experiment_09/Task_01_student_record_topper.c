/*
 * Experiment 9 - Task 1
 * Aim: Design a structure student_record to contain name, roll_number
 *      and total marks obtained. Read the data of 5 students from the
 *      user and display the topper on the screen.
 */
#include <stdio.h>

#define STUDENTS 5

// Structure definition
struct student_record
{
    char name[50];
    int roll_number;
    float total_marks;
};

int main()
{
    struct student_record students[STUDENTS];
    int i, topperIndex = 0;

    // Read the data of 5 students
    for (i = 0; i < STUDENTS; i++)
    {
        printf("\n--- Enter details of student %d ---\n", i + 1);
        printf("Name         : ");
        scanf(" %49[^\n]", students[i].name);    // reads a name with spaces
        printf("Roll number  : ");
        scanf("%d", &students[i].roll_number);
        printf("Total marks  : ");
        scanf("%f", &students[i].total_marks);
    }

    // Find the student with the highest total marks
    for (i = 1; i < STUDENTS; i++)
    {
        if (students[i].total_marks > students[topperIndex].total_marks)
        {
            topperIndex = i;
        }
    }

    printf("\n========== TOPPER ==========\n");
    printf("Name         : %s\n", students[topperIndex].name);
    printf("Roll number  : %d\n", students[topperIndex].roll_number);
    printf("Total marks  : %.2f\n", students[topperIndex].total_marks);

    return 0;
}
