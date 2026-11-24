/*
 * Experiment 3 - Task 1
 * Aim: Menu-driven Student Grade and Result Management System
 *      using switch and goto.
 *
 * - goto is used to return to the menu after each operation
 *   and to jump to the exit point.
 * - switch is used to select the menu option and to decide the grade.
 *
 * Marks are entered for 5 subjects, each out of 100.
 * A student passes only if he/she scores at least 40 in every subject.
 */
#include <stdio.h>

#define SUBJECTS 5

int main()
{
    char name[50];
    int marks[SUBJECTS];
    int choice, i;
    int total = 0;
    float percentage = 0;
    char grade;
    int dataEntered = 0;      // 1 after marks are entered
    int failedSubjects;

menu:                          // label used by goto
    printf("\n===== STUDENT GRADE AND RESULT MANAGEMENT SYSTEM =====\n");
    printf("1. Enter student details and marks\n");
    printf("2. Calculate total and percentage\n");
    printf("3. Show grade\n");
    printf("4. Show result (Pass / Fail)\n");
    printf("5. Display complete report card\n");
    printf("6. Exit\n");
    printf("Enter your choice (1-6): ");
    if (scanf("%d", &choice) != 1)    // input was not a number
    {
        printf("\nInvalid input! Program will exit.\n");
        goto end;
    }

    // Options 2 to 5 need the marks first
    if (choice >= 2 && choice <= 5 && dataEntered == 0)
    {
        printf("\nPlease enter the student marks first (option 1).\n");
        goto menu;
    }

    switch (choice)
    {
        case 1:
            printf("Enter student name (single word): ");
            scanf("%49s", name);
            total = 0;
            for (i = 0; i < SUBJECTS; i++)
            {
                printf("Enter marks of subject %d (0-100): ", i + 1);
                scanf("%d", &marks[i]);
                if (marks[i] < 0 || marks[i] > 100)
                {
                    printf("Invalid marks! Please enter again.\n");
                    i--;               // repeat the same subject
                }
            }
            for (i = 0; i < SUBJECTS; i++)
            {
                total = total + marks[i];
            }
            percentage = (float) total / SUBJECTS;
            dataEntered = 1;
            printf("Marks saved successfully.\n");
            break;

        case 2:
            printf("\nTotal marks = %d out of %d\n", total, SUBJECTS * 100);
            printf("Percentage  = %.2f%%\n", percentage);
            break;

        case 3:
            // Grade is decided using switch on (percentage / 10)
            switch ((int) percentage / 10)
            {
                case 10:
                case 9:  grade = 'O'; break;
                case 8:  grade = 'A'; break;
                case 7:  grade = 'B'; break;
                case 6:  grade = 'C'; break;
                case 5:  grade = 'D'; break;
                case 4:  grade = 'E'; break;
                default: grade = 'F';
            }
            printf("\nGrade of %s = %c\n", name, grade);
            break;

        case 4:
            failedSubjects = 0;
            for (i = 0; i < SUBJECTS; i++)
            {
                if (marks[i] < 40)
                {
                    failedSubjects++;
                }
            }
            if (failedSubjects == 0)
            {
                printf("\nResult of %s : PASS\n", name);
            }
            else
            {
                printf("\nResult of %s : FAIL (failed in %d subject(s))\n", name, failedSubjects);
            }
            break;

        case 5:
            printf("\n------------- REPORT CARD -------------\n");
            printf("Name : %s\n", name);
            for (i = 0; i < SUBJECTS; i++)
            {
                printf("Subject %d : %d\n", i + 1, marks[i]);
            }
            printf("Total      : %d\n", total);
            printf("Percentage : %.2f%%\n", percentage);
            printf("---------------------------------------\n");
            break;

        case 6:
            goto end;          // jump to the end of the program

        default:
            printf("\nInvalid choice! Please select 1 to 6.\n");
    }

    goto menu;                 // go back and show the menu again

end:
    printf("\nThank you for using the system. Goodbye!\n");
    return 0;
}
